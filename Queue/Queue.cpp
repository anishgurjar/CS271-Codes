//Anish Gurjar
//Simple Array Representation of a Queue

#include <iostream>
using namespace std;

#define n 1000 //defining queue size

class Queue{

    int front; //front of the queue
    int back;   //back of the queue
    int arr[n]; //declaring the array

    public:

        //Initially, we have values as -1
        Queue(){
            front = -1;
            back = -1;
        }

        //Adding element to queue
        void Enqueue(int val){
            
            //For the first insert, we increment front. 
            //Then front stays there until anything is removed.
            if(back == -1){
                front = 0;
            }

            //Checking if the array overlows or not
            if(back >= n-1){
                cout << "Queue Overflow" << endl;
                return;
            }

            back++; 
            arr[back] = val;
        }

        //Removing Values
        void Dequeue(){

            if(front < 0){  
                cout << "Nothing to remove" << endl;
                return;
            }
            front++;
        }

        //Gives the front value (which would be the first to be removed)
        int peek(){
            //base case of no elements
            if(front < 0){
                cout << "No elements present" << endl;
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            //The only 2 cases when the array will be empty is when:
                //a. Either front or back values are -1
                //b. Front is greater than back, which means that values were removed
                //to the point where it reached back and beyond. 

            if(front > back | front == -1 | back == -1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){

    Queue anish; //Creating a queue.
    anish.Enqueue(1);
    anish.Enqueue(2);
    anish.Enqueue(3);
    anish.Enqueue(4);
    anish.Enqueue(5);   
    anish.Dequeue();
    anish.Dequeue();
    
    //Printing the Queue.
    while(!anish.empty()){
        cout << anish.peek() << " ";
        anish.Dequeue();
    }

}