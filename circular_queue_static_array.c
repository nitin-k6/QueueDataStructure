#include<stdio.h>
#define maxsize 5

int  circular_queue[maxsize];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();


int main(){
enqueue(6);
enqueue(8);
enqueue(7);
enqueue(9);
enqueue(5);
display();
peek();
dequeue();
display();


    return 0;
}

void enqueue(int x){
     if(front==-1 && rear==-1){
         front=rear=0;
         circular_queue[rear]=x;
     }
     else if((rear+1)%maxsize==front){
         printf("queue is full");
              }
              else{
                  rear=(rear+1)%maxsize;
                  circular_queue[rear]=x;
              }
}

void dequeue(){
    if(front==-1 && rear==-1){
         printf("Queue is empty");
    }

    else if(front==rear){
        printf("The dequeued element is %d" , circular_queue[front]);
        front==-1 && rear==-1;
    }
    else{
        printf("The dequeued element is %d", circular_queue[front]);
        front=(front+1)%maxsize;
    }
}

void display(){
       int i=front;
     if(front==-1 && rear==-1){
         printf("Queue is empty");
     }
     else{
            printf("Queue is:");
         while(i!=rear){
           printf("%d" , circular_queue[i]);
           i=(i+1)%maxsize;
         }
           printf("%d" , circular_queue[rear]);

     }
}