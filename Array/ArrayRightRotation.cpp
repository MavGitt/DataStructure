/**
 *    author:  MavricK_
 *    created:        
**/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(long long  i=(a);i>=(b);i--)
typedef long long ll;

ll gcd(ll a, ll b)
{
 if(b==0)
  return a;
 else
  return gcd(b, a%b);
}

void ArrayRotate(ll* result, ll n)
{
 ll d=-1,i,temp,j;
 for(i=0;i<gcd(n,1);i++)           
 {
  j=i;
  temp=result[i];
  while(1)
  {
   d=(j+1)%n;
   if(d==i)
    break;
   result[j]=result[d];
   j=d;
  }
  result[j]=temp;
 }
}

void displayArray(ll A[],ll n)
{
REP(i,n)
  cout<<A[i]<<" ";
cout<<"\n";
}
int main()
{
    std::ios::sync_with_stdio(false);   
    std:: cin.tie(0);
    std:: cout.tie(0);
    
    ll n,d;
    cin>>n>>d;
    ll arr[n];
   
    REP(i, n)
    {
        cin>>arr[i];
    }
     
        
    while(d--)
    {
        ArrayRotate(arr,n);
    }
   displayArray(arr,n);
}


