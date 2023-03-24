#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <memory.h>

int main()
{
    int fd1[2];
    int fd2[2];
    if (pipe(fd1) == -1 || pipe(fd2) == -1)
    {
        fprintf(stderr, "Program failed while piping\n");
        return 1;
    }

    pid_t pid = fork();
    if (pid == -1)
    {
        fprintf(stderr, "Program failed while forking\n");
        return 2;
    }
    else if (pid == 0)
    {
        char string2[501];
        int ppid = getppid();
        int *s = &ppid;
        wait(s);
        read(fd1[0], string2, sizeof(string2));
        printf("Process #2: Message received from process 1\n");
        printf("\nReceived Message: %s\n\n", string2);
        char string3[501] = "Message sent succesfully";
        write(fd2[1], string3, sizeof(string3));
        close(fd1[0]);
        close(fd1[1]);
        close(fd2[1]);
        close(fd2[0]);
    }
    else
    {
        printf("Process #1: Sending message to Process 2...\n");
        char string1[501] = "Sample Message";
        write(fd1[1], string1, sizeof(string1));
        wait(NULL);
        memset(string1, 0, sizeof(string1));
        read(fd2[0], string1, sizeof(string1));
        close(fd1[1]);
        close(fd1[0]);
        close(fd2[0]);
        close(fd2[1]);
        printf("Process #1: %s\n", string1);
    }