#include<iostream>
using namespace std;

class emp
{
public:
    int empid;
    string name;
    float salary;
};

void merge(emp arr[], int low, int mid, int high)
{
    emp temp[20];

    int i=low;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=high)
    {
        if(arr[i].salary < arr[j].salary)
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=high)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(i=low,k=0;i<=high;i++,k++)
    {
        arr[i]=temp[k];
    }
}

void merge_sort(emp arr[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;

        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}

int main()
{
    int n;

    cout << "Enter number of employees:";
    cin >> n;

    emp arr[20];

    for(int i=0;i<n;i++)
    {
        cout << "Enter Employee ID:";
        cin >> arr[i].empid;

        cout << "Enter Name:";
        cin >> arr[i].name;

        cout << "Enter Salary:";
        cin >> arr[i].salary;
    }

    merge_sort(arr,0,n-1);

    cout << endl << "Employees sorted according to salary:" << endl;

    cout << "ID\tName\tSalary" << endl;

    for(int i=0;i<n;i++)
    {
        cout << arr[i].empid << "\t";
        cout << arr[i].name << "\t";
        cout << arr[i].salary << endl;
    }

    return 0;
}