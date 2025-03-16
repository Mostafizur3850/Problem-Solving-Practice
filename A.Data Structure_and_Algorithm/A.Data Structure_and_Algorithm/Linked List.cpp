// Signly Linked List 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    // Constructor
    Node(int data){
        this -> data = data;
        this-> next = NULL;
    }
};


int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;

    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constreuctor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
}

int main(){
    Node* node1 =  new Node(10);
    cout << node1-> data << endl;
    cout << node1-> next << end;

    Node* head = node1;

    return 0;

}*/