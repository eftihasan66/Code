#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;        // নোডের ডাটা
    Node *next;     // পরবর্তী নোডের পয়েন্টার
    Node *prev;     // পূর্ববর্তী নোডের পয়েন্টার

    // কনস্ট্রাক্টর
    Node(int val)
    {
        this->val = val; // ডাটা সেট করা হচ্ছে
        this->next = NULL; // পরবর্তী নোড পয়েন্টারকে NULL দিয়ে শুরু করা হচ্ছে
        this->prev = NULL; // পূর্ববর্তী নোড পয়েন্টারকে NULL দিয়ে শুরু করা হচ্ছে
    }
};
// লিস্টের শুরু থেকে শেষ পর্যন্ত নোড প্রিন্ট করার ফাংশন
void print_normal(Node *head)
{
    Node *tmp = head; // বর্তমান নোড শুরু থেকে হেড নোড
    while (tmp != NULL)
    {
        cout << tmp->val << " "; // নোডের মান প্রিন্ট করা হচ্ছে
        tmp = tmp->next; // পরবর্তী নোডে চলে যাচ্ছি
    }
    cout << endl;
}

// লিস্টের শেষ থেকে শুরু পর্যন্ত নোড প্রিন্ট করার ফাংশন
void print_reverse(Node *tail)
{
    Node *tmp = tail; // বর্তমান নোড শেষ থেকে টেইল নোড
    while (tmp != NULL)
    {
        cout << tmp->val << " "; // নোডের মান প্রিন্ট করা হচ্ছে
        tmp = tmp->prev; // পূর্ববর্তী নোডে চলে যাচ্ছি
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10); // হেড নোড তৈরি করা হচ্ছে
    Node *a = new Node(20);    // নতুন নোড তৈরি করা হচ্ছে
    Node *b = new Node(30);    // নতুন নোড তৈরি করা হচ্ছে
    Node *tail = b;           // টেইল নোড নির্ধারণ করা হচ্ছে

    // নোডগুলোর মধ্যে সংযোগ স্থাপন করা হচ্ছে
    head->next = a; // হেড নোডের পরবর্তী নোড হচ্ছে a
    a->prev = head; // a নোডের পূর্ববর্তী নোড হচ্ছে হেড
    a->next = b;    // a নোডের পরবর্তী নোড হচ্ছে b
    b->prev = a;    // b নোডের পূর্ববর্তী নোড হচ্ছে a

    // ফাংশন কল করে নোডগুলোর মান প্রিন্ট করা হচ্ছে
    print_normal(head); // হেড থেকে টেইল পর্যন্ত প্রিন্ট করা হচ্ছে
    print_reverse(tail); // টেইল থেকে হেড পর্যন্ত প্রিন্ট করা হচ্ছে

    return 0;
}
