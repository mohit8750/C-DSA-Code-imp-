#include<iostream>
using namespace std;
struct Queue{
    int*arr;
    int cap;
    int size;
    int front;

    Queue(int c){
        arr=new int[cap];
        cap=c;
        size=0;
        int front=0;
    }
    bool isfull(){
      return(size==cap);
        
     
    }
    bool isEmpty(){
       return (size==0) ;
       
    }
     int getFront(){
       if(isEmpty()){
           return -1;
       }
       else{
           return front;
       }
   }
   int getRear(){
       if(isEmpty()){
           return -1;
       }
       else {
           return(front+size-1)%cap; 
       }
   }

    void enqueue(int x){
         if(isfull())
         return ;
         int rear=getRear();
         rear=(rear+1)%cap;
         arr[rear]=x;
         size++;
    }
    void dequeue(){
        if(isEmpty())
        return;
       front=(front+1)%cap;
     size--;
    }

    void printQueue(){
        if(isEmpty()){
            return;
        }
        for(int i=front;i<(front+size-1);i++){
            cout<<arr[i]<<" ";
        }
    }
   
  

};

int main(){
    Queue q(8);
    q.enqueue(10);
      q.enqueue(20);
        q.enqueue(30);
          q.enqueue(40);
            q.enqueue(50);
            q.printQueue();
           

          
}