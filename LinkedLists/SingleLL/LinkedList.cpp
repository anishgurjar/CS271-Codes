//Anish Gurjar
//Singly Linked List Implementation with C++
//March 5, 2022

#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
    
    //constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

class List{

    public:
        
        void insertAtTail(node* &head, int x){

            node* n = new node(x); //creating a new node

            //base case: if head is null
            if (head == NULL){
                head = n;
            }

            node* temp = head; //creating a temp node because head is stationary

            //making temp go till the very end
            while(temp->next!=NULL){
                temp=temp->next;
            }

            temp = n;
        }


        int search(node* head, int x){
            node* temp = head; //temp node
            int counter = 0;    //initial index
            while(temp->next!=NULL){
                if(temp->next->data == x){
                    return counter;
                }
                counter++; //index finder
            }
            return -1;
        }

        void del(node* &head, int x){
            node* back = head;
            node* temp = head->next;
            node* front = head->next->next;

            while(temp->next->data!=x){
                temp=temp->next;
                back=back->next;
                front=front->next;
            }

            delete temp;
            back->next = front;
        }

        //printing a linked list
        void display(node* head){
            node* temp = head; //temp node
            while(temp->next!=NULL){
                cout << temp->next->data << "->"; //printing the data 
                temp = temp->next;
            }
            cout << endl;
            delete temp;
        }



};

int main(){

}
