//  Static memory allocation

#include<stdio.h>
#define maxsize 5

int queue [maxsize];

int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
void peek();

int main(){
//  calling these functions or it means passing these values
enqueue(6);
enqueue(8);
enqueue(7);
enqueue(9);
enqueue(5);
display();
peek();
dequeue();
peek();
// dequeue();
display();

return 0;
}
// receive values
void enqueue(int x){
if(rear==maxsize-1){

    
      printf("Overflow");
}
else if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=x;
}
else{
    rear++;
    queue[rear]=x;
}
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");  // or underflow condition
    }
else if(front==rear){
    front=rear=-1;
}
else{   // we cna delete data from the  queue from the front only
    printf("The dequeued element is %d\n" , queue[front]);
    front++;
}
}

void display(){
     if(front==-1 && rear==-1){
         printf("Queue is empty");
     }
     else{
         for(int i=front; i<rear+1; i++){
             printf("Values are %d\n" , queue[i]);
         }
     }
}

void peek(){
     if (front==-1 && rear==1){
         printf("Queue is empty");
     }
     else{
         printf("Data at the front is %d\n", queue[front]);
     }
}