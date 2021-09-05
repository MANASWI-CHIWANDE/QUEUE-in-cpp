#include<iostream>
using namespace std;
#define n 5

class CircularQueue{
    int arr[n];
    int front;
    int back;
public : 
    CircularQueue(){
     front =0;
     back=0;
 }
    void enqueue(int x){
        if ( ((back+1)%n)==front){
            cout<<"QUEUE OVERFLOW "<<endl;
        }
        else {
            arr[back]=x;
            back=(back+1)%n;
        }
    }
    int dequeue(){
        int  x;
        if(back ==front ){
            cout<<"EMPTY QUEUE"<<endl;
        }
        else{
                x= arr[front];
                front =(front +1)%n;
            }
            return x;
    }
    int peek(){
        if(back ==front ){
            cout<<"EMPTY QUEUE"<<endl;
        }
        return arr[front];
	}
	bool empty(){
        if(back ==front )
           { return  true ;}
           else {
		   return false;
	}
	}
};

int main(){
    CircularQueue cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cout<<"\tELEMENT AT TOP IN QUEUE INITIALLY IS : ";
    cout<<cq.peek()<<endl;
    cq.dequeue();
    cout<<"\n\tELEMENT AT TOP AFTER POPING FROM QUEUE IS : ";
    cout<<cq.peek()<<endl;
    cq.dequeue();
    cout<<"\n\tELEMENT AT TOP AFTER POPING FROM QUEUE IS : ";
    cout<<cq.peek()<<endl;
    cq.dequeue();
    cout<<"\n\tELEMENT AT TOP AFTER POPING FROM QUEUE IS : ";
    cout<<cq.peek()<<endl;
    cq.dequeue();
    cout<<"\n\tTO CHECK WHETHER QUEUE IS EMPTY OR NOT (if empty ==1, false==0) IS : ";
    cout<<cq.empty()<<endl;
    return 0;
}