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

node *removeduplicates(node *head)
{
    if (!head)
        return NULL;
    node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
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
    for (int i = 2; i <= 5; i++)
        ll1 = insert(ll1, 2);

    ll1 = removeduplicates(ll1);

    
    print(ll1);

    return 0;
}
