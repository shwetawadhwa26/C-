// static array - dynamic array

// #include <iostream>
// using namespace std;
// int fun(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
// }
// int main()
// { // static memory allocation
//     // int arr[5] = {1, 2, 3, 4, 5};
//     // fun(arr, 5);

//     // dynamic memory allocation
//     int h;
//     cin >> h;
//     int *array = new int[h]; // each element will be zero or garbage
//     fun(array, h);

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
// void num(vector<int> v)
// {
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << v[i] << " ";
//         cout << v.at(i) << " ";
//     }
// }

void print(vector<int> v)
{
    cout << "printing vector method 2" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{ // vector intialisation

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
    // vector<char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');

    // cout << "front element : " << v[0] << endl;
    // cout << "front element : " << v.front() << endl;
    // cout << "end element : " << v[v.size() - 1] << endl;
    // cout << "end element : " << v.back() << endl;

    // vector<int> v;
    // vector<int> arr2(5, -1); // init with n size with specific data
    // arr2.push_back(50);
    // num(arr2);

    // vector<int> arr = {1, 2, 3, 4, 5};
    // arr.pop_back();
    // num(arr);

    // // copying a vector
    // vector<int> arr5 = {9, 8, 7, 6, 5};
    // num(arr5);
    //  while (1)
    //  {
    //      int d;
    //      cin >> d;
    //      v.push_back(d);
    //      cout << "capacity : " << v.capacity() << " size : " << v.size() << endl;
    //      ;
    //  }
    //  v.push_back(1);
    //  v.push_back(2);
    //  v.push_back(3);
    //  int n;
    //  cin >> n;
    //  for (int i = 0; i < n; i++)
    //  {
    //      int d;
    //      cin >> d;
    //      v.push_back(d);
    //  }
    //  // for (int i = 0; i < 10; ++i)
    //  // {
    //  //     v.push_back(80);
    //  // }

    // v.clear();
    // v.push_back(50);
    // num(v);

    return 0;
}