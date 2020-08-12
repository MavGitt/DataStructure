#include<bits/stdc++.h>
using namespace std;

//function to reverse arr[] from index start to end
void reverseArray(int arr[], int start, int end)
{
	while(start<end)
	{
	   swap(arr[start],arr[end]);
	   start++;
	   end--;
	}
}

//function to right rotate array[] of size n by d
void leftRotate(int arr[], int d , int n)
{
	if(d == 0)
	    return;
	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}

//function to display the array[]
void display(int* a, int length)
{
    for (int i = 0; i < length; ++i)
        cout << a[i] << " ";

    cout << endl;
}

//driver code
int main()
{
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 2;
  
   // in case the rotating factor is 
  // greater than array length 
  k = k % n;
  
  //Function calling
  leftRotate(arr, k, n);
  display(arr, n);
  
  
}
