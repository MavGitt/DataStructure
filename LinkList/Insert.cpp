#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *link;
}*start = NULL;

struct node *createNode()
{
	node *n = new node();
	return n;
}

void insert(node *p,int position,int x)
{
	
	struct node *t;
	if(position<0)
	   return;
	t=createNode();
	t->data = x;
	t->link = NULL;

	
	//adding node before <- the first node
	if(position==0)
	{
		t->link = start;
		start = t;
    }
    else   //adding node after -> the given position
    {
    	for(int i=0;i<position-1;i++)
    	{
    		p=p->link;
    		cout<<"hi";
		}
    	  
    	t->link=p->link;
    	p->link=t;
     }
}

//Iterartive approach to display elements of link list
void display(node *p)
{   
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		p=p->link;
	}
}

void RDisplay(node *p)
{
	if(p!=NULL)
	{
		cout<<p->data<<"->";
		RDisplay(p->link);
	}
}

void LDisplay(node *p)
{
	if(p!=NULL)
	{
		LDisplay(p->link);
		cout<<p->data<<"->";
		
	}
}

int main()
{
	insert(start,0,20);
	insert(start,1,10);
	//display(start); 
	RDisplay(start);
	//LDisplay(start);    
}
