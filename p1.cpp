/**
 * 
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;

//IMPLEMENT SINGLY LINKED LIST 
// METHODS : ADD AND PRINT
// ADD = ADD A NODE AT THE END
// PRINT = PRINT THE ENTIRE LIST
class Node{
  public:
    //Node *head;
    int data;   // value of the node
    Node *next; // Pointer to the next
    // Node(Node *cur,int x)
    // {
    //     cur->data = x;
    //     cur->next = nullptr;
    // }  
    
};
    
    Node* add(Node* cur, int val) // returns the tail after adding the new node
    {
        Node *tmp = NULL;
        cout<<cur->data;
        cur->next = tmp;
        cur = cur->next;
        return cur;
    }
    
    void print(Node *head)
    {
        while(head)
        {
            cout<<head->data<<" ";
            head = head->next;
        }
        return;
    }
int main()
{
    run
 
    Node *dummyhead = NULL; 
    Node *head;
    head = new Node();
    dummyhead->data = 5;
    cout<<dummyhead->data;
    dummyhead = add(dummyhead,25);
    dummyhead = add(dummyhead,45);
    //print(head);
    return 0;
}
