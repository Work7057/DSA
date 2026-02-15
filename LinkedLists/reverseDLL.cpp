#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* back;
    Node(int data1, Node* next1, Node* back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }

    Node(int data1)
    {
        data=data1;
        next=NULL;
        back=NULL;
    }

};

Node* reverseDLL(Node* head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        swap(temp->next,temp->back);
        temp=temp->back;
    }
    swap(temp->next,temp->back);
    return temp;
}

Node* arrayToDLL(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size() ;i++){
        Node* temp=new Node(arr[i],NULL, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void printDLL(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
Node* head=head;
vector<int> arr={12, 5, 8, 7};

head=arrayToDLL(arr);
printDLL(head);


head=reverseDLL(head);
printDLL(head);

return 0;
}