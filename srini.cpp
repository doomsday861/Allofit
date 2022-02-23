#include<iostream>
using namespace std;
int top;
int arr[10001];
int s;
bool isempty()
{if(top==-1)
 return true;
}
bool isfull()
{
	if(top==s-1)
	return true;
}
void push(int data)
{  if (isfull)
    cout<<"Stack is full";
    else{
	
	top=top++;
	arr[top]=data;
}}
int pop()
{ if (isempty)
  cout<<"stack is empty";
	else{
	top=top--;
	return top;
}}
void display()
{
	if (isempty)
	cout<<"Stack is Empty";
	else
	{
		for(int i=0;i<top;i++)
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int s;
cin>>s;
int arr[s];
int top=-1;
  push(5);
  push(8);
  display();
  pop();
  display();
  
}