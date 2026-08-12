#include<iostream>
using namespace std;

int fact_iterative(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int fact_recursive(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*recursive(n-1);
    }
}

int main()
{
    int n;
    
    cout << "Enter a number:";
    cin >>n;
    
    cout << "Factorial using Iterative method: ";
    cout << fact_iterative(n) << endl;
    
    cout << "Factorial using Recursive method: ";
    cout << fact_recursive(n);
    
    return 0;
}