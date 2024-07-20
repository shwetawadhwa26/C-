// #include <iostream>
// using namespace std;
// int main()
// {
//     char name[10];
//     cin >> name;
//     cout << "my name is " << name;
//     return 0;
// }

// entering value of sting one by one
//     null character value = 0
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch[10];
//     cin >> ch;
//     cout << "printing value of ch: " << ch << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "at index: " << i << " " << ch[i] << endl;
//     }
//     char temp = ch[6];
//     int value = int(temp);
//     cout << "printing integer value : " << value << endl;
//     return 0;
// }

// string input -- cin.getline(name,size)
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch[100];
//     cin.getline(ch, 100);
//     cout << ch << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    char name[100];
    cin.getline(name, 100);
    cout << name;
    return 0;
}