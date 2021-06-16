#include <iostream>
#define int long long
#define null NULL
using namespace std;

struct node
{
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
    }
};

node *insert(node *start, int data)
{
    if (!start)
        return new node(data);

    start->next = insert(start->next, data);
    return start;
}

node *reverse(node *head)
{
    node *next = null, *prev = null, *curr = head;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void print(node *head)
{
    if (head)
    {
        cout << head->data << " ";
        print(head->next);
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    node *ll1 = new node(1);
    for (int i = 2; i <=5; i++)
        ll1 = insert(ll1, i);

    ll1 = reverse(ll1);
    print(ll1);
    
    return 0;
}
