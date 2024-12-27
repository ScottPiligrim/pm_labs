#include <iostream>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
#include "func.hpp"
using namespace std;

int main()
{
    Node* head = nullptr;
    int n;

    while (cin >> n)
    {
        append(head, n);
    }

    bool hasOddThreeDigit = false;
    Node* curr = head;
    while (curr)
    {
        if (curr->val >= 100 && curr->val <= 999 && onlyodd(curr->val))
        {
            hasOddThreeDigit = true;
            break;
        }
        curr = curr->next;
    }

    if (!hasOddThreeDigit)
    {
        removeEvenNumbered(head);
        duplicate(head);
    }
    else
    {
        sortByFirstDigit(head);
    }

    printList(head);

    return 0;
}