/**]
 * 
 * 
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
struct ListNode{
	int data;
	struct ListNode *next;
};
void traverse(struct ListNode* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ListNode *list;
for(int i=1;i<=10;i++)
{
	ListNode *new_node;
    new_node->data = i; 
    new_node->next = list; 
    list = new_node;
	list->data = i;
	cout<<i;
	list = list->next;
} 
traverse(list);
    return 0;
}