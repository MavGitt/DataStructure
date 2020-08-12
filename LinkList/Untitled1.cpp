/**
 *    author:  MavricK_
 *    created:        
**/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
typedef long long ll;


main()
{
	std::ios::sync_with_stdio(false);   
    std:: cin.tie(0);
    std:: cout.tie(0);
	int flag = 0;
    int testcase; cin>>testcase;
    while(testcase--)
    {
       int n; cin>>n;
       int arr[n];  
       REP(i,n)
       {
           cin>>arr[i];
       }
       
       if(n==1)
       {
           if(arr[0]%2!=0)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
       }
       else
       {
       	  for(int i=3;i<=1000;i=i+2)
       	    {
       	    	for(int j = 0; j<n;j++)
       	    	{
       	    		if(arr[j]%i==0)
       	    		flag=0;
       	    		else
       	    		{
       	    			flag=-1;
       	    			break;
					   }
       	    		
				   }
				   if(flag==0)
				   {
				   	cout<<"YES"<<endl;
				   	break;
				   }
				   
			   }
			   if(flag!=0)
			   cout<<"NO"<<endl;
	   }
       
    }
      
      
}


