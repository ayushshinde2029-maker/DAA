#include<iostream>
using namespace std;

int binary_iterative(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    return -1;
}

int binary_recursive(int arr[], int low, int high, int x)
{
    if(low>high)
    {
        return -1;
    }

    int mid=(low+high)/2;

    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x)
    {
        return recursive(arr,mid+1,high,x);
    }
    else
    {
        return recursive(arr,low,mid-1,x);
    }
}

int main()
{
    int n;
    
    cout << "Enter size of array:";
    cin >> n;

    int arr[10];

    cout << "Enter elements in sorted order:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout << "Enter element to be searched:";
    cin >> x;

    int a=binary_iterative(arr,n,x);
    int b=binary_recursive(arr,0,n-1,x);

    if(a==-1)
    {
        cout<<"Element is not present";
    }
    else
    {
        cout<<"Element is present at position "<<a+1<<endl;
    }

    if(b==-1)
    {
        cout<<"Element is not present";
    }
    else
    {
        cout<<"Element is present at position "<<b+1;
    }

    return 0;
}