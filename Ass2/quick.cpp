#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;

            int x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
        }
    }

    int x=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=x;

    return i+1;
}

void quick_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int p =partition(arr,low,high);

        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
    }
}

int main()
{
    int n;

    cout << "Enter size of array:";
    cin >> n;

    int arr[20];

    cout << "Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr,0,n-1);

    cout << "Sorted array:";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}