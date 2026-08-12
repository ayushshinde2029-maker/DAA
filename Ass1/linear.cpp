#include <iostream>
using namespace std;

void linear_search(int arr[], int n, int x) {
    int flag = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Element is not present in array";
    else
        cout << "Element is present in array";
}

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[10];

    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter element to be searched: ";
    cin >> x;

    linear_search(arr, n, x);

    return 0;
}