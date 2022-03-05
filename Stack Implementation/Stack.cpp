//Anish Gurjar
//Simple Stack Implementation

#include <iostream>
using namespace std;

#define n 1000 //defining the size of the list to simplify things

class Stack{

    int top; //the top of the stack
    
    public:
        int a[n]; //declaring the array

        //constructor
        Stack(){
            top = -1; //which means no element
        }

        void Push(int val){
            
            if(top >= n-1){ 
                cout << "Stack Overflow" << endl; //which means that stack is filled because top cant be over n
                return;
            }

            top++;
            a[top] = val;
        }

        void Pop(){
            if(top < 0){
                cout << "Stack Underflow" << endl; //nothing to remove
            }
            top--;
        }
        
        void Empty(){
            top = -1; 
        }

        void Display(){
            for(int i = 0; i <= top; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
};

int main(){

    class Stack anish;
    anish.Push(1);
    anish.Push(2);
    anish.Push(3);
    cout << "After push" << endl;
    anish.Display();
    cout << "After Pop" << endl;
    anish.Pop();
    anish.Display();
    cout << "After Empty" << endl;
    anish.Empty();
    anish.Display();

}