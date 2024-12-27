#include <iostream>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
#include "func.hpp"
using namespace std;

Node::Node(int val) : val(val), next(nullptr){}

void append(Node*& head,int val)
{
    if (!head)
    {
        head = new Node(val);
    }
    else
    {
        Node* temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = new Node(val);
    }
}

void removeEvenNumbered(Node*& head)
{
    Node* curr = head;
    Node* prev = nullptr;

    while (curr)
    {
        int n = curr->val;
        int nlng = 0;
        bool containsEvenNumbered = false;
        while (n)
        {
            n = n/10;
            nlng++;
            if (nlng % 2 == 0)
            {
                containsEvenNumbered = true;
                break;
            }
            n /= 10;
        }

        if (!containsEvenNumbered)
        {
            if (prev)
            {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } 
            else
            {
                head = curr->next;
                delete curr;
                curr = head;
            }
        } 
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

bool conteight(int n)
{
    int nlng = 0;
    while (n)
    {
        n = n/10;
        nlng++;
        if(nlng%2==0)
        {
            return true;
        }
        n/=10;
    }
    return false;
}

void duplicate(Node*& head)
{
    Node* curr = head;
    while (curr)
    {
        if(conteight(curr->val))
        {
            Node* newNode= new Node(curr->val);
            newNode->next=curr->next;
            curr->next=newNode;
            curr=newNode;
        }
        curr = curr->next;
    }
}

void sortByFirstDigit(Node*& head)
{
    if (!head) return;

    vector<Node*> nodes;
    Node* curr = head;
    while (curr)
    {
        nodes.push_back(curr);
        curr = curr->next;
    }

    sort(nodes.begin(), nodes.end(), [](Node* a, Node* b)
    {
        return firstdigit(b->val) < firstdigit(a->val);
    });

    head = nodes[0];
    curr = head;
    for (size_t i = 1; i < nodes.size(); ++i)
    {
        curr->next = nodes[i];
        curr = curr->next;
    }
    curr->next = nullptr;
}

void printList(Node* head)
{
    Node* curr = head;
    while (curr)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

bool onlyodd(int n)
{
    while(n>0)
    {
        int digit=n%10;
        if(digit%2==0)
        {
            return false;
        }
        n/=10;
    }
    return true;
}

bool iseight(int n)
{
    while(n>0)
    {
        if(n%10==8)
        {
            return true;
        }
        n/=10;
    }
    return false;
}

int firstdigit(int n)
{
    while(n>=10)
    {
        n/=10;
    }
    return n;
}

bool comparefirstdigit(int a,int b)
{
    return firstdigit(a)>firstdigit(b);
}
