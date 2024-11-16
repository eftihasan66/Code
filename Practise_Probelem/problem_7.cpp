#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
        int val;
        Node* next;  
        Node* prev;  
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class Queue
{
  public:
    Node* head = NULL;  
    Node* tail = NULL;  
     int sz =0 ;
    void push(int val )
    {
       sz++;
       Node* newNode = new Node(val);
       if(head == NULL)
       {
        head = newNode;
        tail = newNode;
        return;
       }
       tail->next = newNode ;
       tail = newNode ;
    }
    int front()
    {
        return head->val;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = head ;
        head = head->next;
        if(head == NULL) tail = NULL;
        delete deleteNode;
    }
    int size()
    {
       return sz;
    }
    bool empty()
    {
        return size();
    }
    void specPosDel(int pos)
    {
        Node* tmp = head ;
        for(int i=1; i<=pos-1; i++)
        {
            tmp = tmp->next ;
        }
        Node* deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        tmp->next->prev= tmp;
        delete deleteNode ;
    }
    
};
int main() 
{
   Queue q;
   int n; cin>>n;
   while(n--)
   {
    int val ;cin>>val;
    q.push(val);
   }
   int pos ;cin>>pos;
   q.specPosDel(pos);
   while(q.empty())
   {
    cout <<q.front() <<" ";
    q.pop();
   }
   
   return 0;
}
