/**
 *    author:  MavricK_
 *    created:        
**/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
using namespace std;
#define endl "\n"
#define DEBUG(x) cerr << '>' << #x << ':' << x << endl;
#define REP(i,n) for(__typeof(n) i=0;i<(n);i++)
#define FOR(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define FORD(i,a,b) for(__typeof(b) i=(a);i>=(b);i--)
#define MOD 1000000007
typedef long long ll;
struct node
{
	int data;
	node* link;
}*first=NULL;

main()
{
    std::ios::sync_with_stdio(false);  
    std:: cin.tie(0);
    std:: cout.tie(0);
	
	node* temp =  new node();
	temp->data = 5;
	temp->link = NULL;
	first = temp;
	
	node* temp1 =  new node();
	temp1->data = 6;
	temp1->link = NULL;
	temp->link  = temp1;
	
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	
	
}


