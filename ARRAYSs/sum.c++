#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[100];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum;
    return 0;
}