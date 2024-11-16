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
class Stack
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
       newNode->prev = tail ;
       tail = newNode ;
    }
    int top()
    {
        return tail->val;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = tail ;
        tail = tail->prev;
        if(head== NULL) tail = NULL;
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
    int spec(int pos)
    {
        Node* tmp = head ;
        for(int i=1; i<=pos-1; i++)
        {
            tmp = tmp->next ;
        }
        return tmp->val;
    }
};
int main() 
{
   Stack st;
    int n; cin>>n;
    while(n--)
    {
       int x; cin >>x;
       st.push(x);
    }
    int x; cin>>x;
    cout << st.spec(x);
    
   return 0;
}
