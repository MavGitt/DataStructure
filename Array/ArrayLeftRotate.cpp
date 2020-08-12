#include<iostream>
#include<algorithm>

using namespace std;

void display(int* a, int length)
{
    for (int i = 0; i < length; ++i)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    const int len = 5;

    int arr[] =  { 1,2,3,4,5 };

    display(arr, len);

    rotate(arr, arr + 1, arr + len); // arr + x means left by x

    display(arr, len);

    rotate(arr, arr + len - 1, arr + len); // arr + len - x means right by x 

    display(arr, len);
}
