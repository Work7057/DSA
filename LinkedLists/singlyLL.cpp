#include<bits/stdc++.h>
using namespace std;

class Node
{
    public : 
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=NULL;
    }
};


Node* deletehead(Node* head)
{
    if(head==NULL)return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}


Node* deleteTail(Node* head){
    if(head==NULL || head->next ==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }

    delete temp->next;
    temp->next=NULL;
    return head;
}

Node* deleteKth(Node* head, int k)
{
    if(head==NULL) return head;
    if(k==1)
    {
        Node* tempo=head;
        head=head->next;
        delete tempo;
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteEle(Node* head, int ele)
{
    
    if(head==NULL) return head;
    if(head->data==ele)
    {  
        Node* tempo=head;
        head=head->next;
        delete tempo;
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {   
        if(temp->data==ele)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head;
}


Node* insertAtHead(Node* head, int val)
{
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    return head;
}


Node* insertAtTail(Node* head, int val)
{
    Node* tempi=new Node(val);
    if(head==NULL) return tempi;

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=tempi;
    return head;
}



Node* insertK(Node* head, int val, int k){
    Node* newNode=new Node(val);
    if(k==1)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node* prev=NULL;
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {   
        if(cnt==k-1)
        {
            prev->next=newNode;
            newNode->next=temp;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
    }

    return head;
}


Node* insertBefore(Node* head, int val, int target)
{
    Node* newNode= new Node(val);
    if(head==NULL) return newNode;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        if(temp->data==target)
        {
            newNode->next=prev->next;
            prev->next=newNode;
        }
        prev=temp;
        temp=temp->next;
    }

    return head;
}


Node* insertAfter(Node* head, int val ,int target)
{
    Node* newNode= new Node(val);
    if(head==NULL) return newNode;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==target){
            newNode->next=temp->next;
            temp->next=newNode;
        }
        temp=temp->next;
    }
    return head;
}

Node* convertArrtoLL(vector<int> &arr)
{
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp;
    }
    return head;
    
}

int check(Node* head, int val)
{
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val) return 1;
        temp=temp->next; 
    }
    return 0;
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

int main(){ 
    vector<int> arr={12, 5, 7, 8};
    Node* head=convertArrtoLL(arr);
    // head=deleteKth(head, 5);
    // head=deleteEle(head, 12);
    // Node* tail=deleteTail(head);
    // head=deletehead(head);

    // head=insertAtHead(head,70);
    // head=insertAtTail(head,50);
    // head= insertK(head, 69, 3);
    // head =insertBefore(head, 100, 8);
    head= insertAfter(head, 69, 8);
    printLL(head);

    
    // Node* head=convertArrtoLL(arr);
    // cout<<head->data<<" "<<endl;
    // Node* temp =head;
    // int cnt=0;
    // while(temp!=NULL){
        // cout<<temp->data<<" ";
        // cnt++;
        // temp=temp->next;
    // }
    // cout<<endl;
    // cout<<"Length of the List is : \n"<<cnt<<endl;

    // cout<< check(head, 5)<<endl ;
    
return 0;
}