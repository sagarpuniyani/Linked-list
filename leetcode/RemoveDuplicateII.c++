#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

void print(Node *head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
/*
This the problem of the Removing the ALL the Duplicate Node 
of the Linked list 
*/


Node* deleteDuplicates(Node* head) {
    cout<< "Fn is Calling .... "<< endl;

    // Base Case 
    if(head == NULL || head->next == NULL){
        return head;
    }
    int TerminatingValue;

    Node* temp = new Node(-1);
    temp->next = head;

    auto prev = temp;
    auto curr = prev->next;
    auto forw = curr->next;

    cout<< "prev = "<< prev->data<<endl;
    cout<< "curr = "<< curr->data<<endl;
    cout<< "forw = "<< forw->data<<endl;



    cout<< "Before Loop "<<endl;

    while(curr != NULL ){
        cout<< "Enter "<<endl;
        if(curr->data == forw->data ){
            cout << " Same Data = "<< curr->data<<endl; 
            TerminatingValue = curr->data;
        }

        if(TerminatingValue == curr->data){
            auto NodeToDelete = curr;
            cout << "Node to Delete  = "<< NodeToDelete->data<<endl;
            prev->next = forw;
            curr = forw;

            delete(NodeToDelete);
            forw = curr->next;
        }

    else {

        prev = curr;
        curr = forw;
        forw = forw->next;
        cout<< "Exit "<<endl;
    }
    }

    /*Adding the temp Node in Starting of the LINKed LIst 
    To make The Problem Easiler */

    return temp->next;

    cout << " Ending of Fn...."<< endl;
}


int main()
{
    Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(3);
    Node *e = new Node(3);
    Node *f = new Node(4);
    Node *g = new Node(5);

    a->next = b;
    b->next = NULL;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;

    // Print the Link list 
    cout << "Printing " << endl;
    print(a);

    // Calling the Function 
    Node* r = deleteDuplicates(a);

    cout<<"After Algo " << endl;
    print(r);

    
    return 0;
}