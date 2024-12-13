#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1)
    {
        data=data1;
        next=next1;
    }

    Node(int data1)
    {
        data=data1;
        next=NULL;
    }
};


Node* arrtoLL(vector<int> &arr)
{   
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}


void printLL(Node* head){
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


Node* middleLL(Node* head)
{   
    Node* middle=head;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {   
        slow=slow->next;
        fast=fast->next->next;
    }
    middle=slow;
    return middle;
}


int main(){
vector<int> arr={12, 5, 7, 10};
Node* head = arrtoLL(arr);
printLL(head);

Node* ans=middleLL(head);
cout<<ans->data<<" ";


return 0;
}