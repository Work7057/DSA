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

    Node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }
};


Node* convertToDLL(vector<int> &arr)
{   
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],NULL,prev);
        prev->next=temp;
        prev=temp; 
    }

    return head;
}


Node* deleteHead(Node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=NULL;
    prev->next=NULL;
    delete prev;
    prev=NULL;
    return head;
}


Node* deleteTail(Node* head)
{
    //for zero node
    if(head==NULL) return NULL;
    //for 1 node
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    prev=temp->back;
    temp->back=NULL;
    prev->next=NULL;
    delete temp;
    return head;
}


Node* deleteK(Node* head, int k)
{
    if(head==NULL) return NULL;
    int cnt=0;
    Node* kNode=head;
    while(kNode!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        kNode=kNode->next;
    }

    Node* prev=kNode->back;
    Node* front=kNode->next;

    if(prev==NULL && front ==NULL)
    {
        delete kNode;
        return NULL;
    }
    else if(prev==NULL)
    {
        return deleteHead(head);
    }
    else if(front==NULL)
    {
        return deleteTail(head);
    }
    prev->next=front;
    front->back=prev;
    kNode->next=NULL;
    kNode->back=NULL;
    delete kNode;
    return head;
}


void deleteNode(Node* head)
{
    Node* temp=head;
    Node* prev=temp->back;
    Node* front=temp->next;

    //Cover the case where temp is tail node
    if(front==NULL)
    {
        prev->next=NULL;
        temp->back=NULL;
        delete temp;
        return ;
    }

    prev->next=front;
    front->back=prev;

    temp->next=temp->back=NULL;
    delete temp;
    return ;
}

Node* insertHeadBefore(Node* head, int val)
{
    Node* newHead=new Node(val, head, NULL);
    head->back=newHead;
    return newHead;
}

Node* insertTailBefore(Node* head, int val)


{
    Node* tail= head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }

    Node *prev=tail->back;
    Node* newNode= new Node(val, tail, prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}


Node* insertKthBefore(Node* head, int val, int k)
{
    
    if(k==1)
    {
        return insertHeadBefore(head, val);
    }

    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }

    Node* newNode= new Node(val, temp, temp->back);
    temp->back->next=newNode;
    temp->back=newNode;
    return head;
}


Node* insertNodeBefore(Node* head, int val, int targetval)
{
    Node* temp=head;
    if(targetval==head->data)
    {
        return insertHeadBefore(head, val);
    }
    while(temp!=NULL)
    {
        if(targetval==temp->data) break;
        temp=temp->next;
    }
    Node* newNode= new Node(val, temp, temp->back);
    temp->back->next=newNode;
    temp->back=newNode;
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
    vector<int> arr={12, 5, 8, 7};
    Node* head=convertToDLL(arr);
    printDLL(head);
    // head=deleteHead(head);
    // printDLL(head);

    // head=deleteTail(head);
    // printDLL(head);

    // head=deleteK(head, 2);
    // printDLL(head);

    // deleteNode(head);
    // printDLL(head);

    // head=insertHeadBefore(head, 59);
    // printDLL(head);

    // head=insertTailBefore(head, 65);
    // printDLL(head);

    // head= insertKthBefore(head, 50, 3);
    // printDLL(head);

    head= insertNodeBefore(head, 69, 5);
    printDLL(head);
return 0;
}