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



node *reverse(node *head, int k)
{
    if(!head) return null;
    node *next = null, *prev = null, *curr = head;
    int icount = 0;
    while (curr && icount < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        icount++;
    }
    if (next)
    {
        head->next = reverse(next, k);
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

    node *ll1 = new node(9);
    ll1 = insert(ll1,8);
    ll1 = insert(ll1,7);
    ll1 = insert(ll1,6);
    ll1 = insert(ll1,5);
    ll1 = insert(ll1,4);



    ll1 = reverse(ll1,3);
    print(ll1);

    return 0;
}
