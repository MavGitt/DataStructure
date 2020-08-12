#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node * next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};

node *insertLeft(node*head,int key)
{
	node *temp = new node(key);
	temp->next = head;
	return temp;
}
/*insertRight(node*head,int x)
{
	
}*/
displayIterativeLeft(node*head)
{
	while(head!=NULL)
	{
	   cout<<head->data<<"->";
	   	head = head->next;
		
	}
}
int main()
{
	node *head = NULL;
	head = insertLeft(head,10);
	head = insertLeft(head,20);
	
	displayIterativeLeft(head);
}
