#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

typedef struct myThread
{
    int thread_num;
    int num_to_find;
} myThread;

void *thread_function(void *p)
{
    myThread *ptr = (myThread *)p;
    int n = ptr->thread_num;
    int *thread_sum = (int *)calloc(1, sizeof(int));
    if (n == 0)
    {
        // first thread
        for (int i = 0; i < 10; i++)
        {
            thread_sum[0] = thread_sum[0] + arr[i];
        }
    }
    else
    {
        thread_sum[0] = -1;
        // second thread
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == ptr->num_to_find)
            {
                thread_sum[0] = i;
                break;
            }
        }
    }
    pthread_exit(thread_sum);
}

int main(void)
{
    pthread_t tid[2];
    myThread thread_myThread[2];
    thread_myThread[0].thread_num = 0;
    thread_myThread[1].thread_num = 1;
    // Number to find
    thread_myThread[1].num_to_find = 25;

    // Start both threads:
    pthread_create(&tid[0], NULL, thread_function, &thread_myThread[0]);
    pthread_create(&tid[1], NULL, thread_function, &thread_myThread[1]);

    // Declare space for sum:
    int *sum;
    int *index;

    // Retrieve sum of threads:
    pthread_join(tid[0], (void **)&sum);
    pthread_join(tid[1], (void **)&index);

    printf("The sum of array fetched by first thread is %i\n", *sum);
    printf("The index of given number fetced by second thread is : %i\n", *index);

    return 0;
}