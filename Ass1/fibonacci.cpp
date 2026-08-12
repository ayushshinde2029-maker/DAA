#include<iostream>
using namespace std;

void fibo_iterative(int n)
{
    int a=0,b=1,c;

    cout<<"Iterative: ";

    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}

int fibo_recursive(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return recursive(n-1)+recursive(n-2);
}

int main()
{
    int n;

    cout<<"Enter number of terms:";
    cin>>n;

    fibo_iterative(n);

    cout<<endl<<"Recursive: ";

    for(int i=0;i<n;i++)
    {
        cout<<fibo_recursive(i)<<" ";
    }

    return 0;
}