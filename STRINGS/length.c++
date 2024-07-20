// #include <iostream>
// #include <string.h>
// using namespace std;
// int findlength(char ch[], int size)
// {
//     int length = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (ch[i] == '\0')
//         {
//             break;
//         }
//         else
//         {
//             length++;
//         }
//     }
//     return length;

//     //     int index = 0;
//     //     while (ch[index] != '\0')
//     //     {
//     //         index++;
//     //     }
//     //     return index;
// }
// int main()
// {
//     char ch[100];
//     cin.getline(ch, 100);
//     int len = findlength(ch, 100);
//     cout << "length of string is: " << len << endl;
//     cout << "printing length: " << strlen(ch) << endl;
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;
int length(char ch[], int n)
{
    int lenn = 0;
    for (int i = 0; i <= n; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            lenn++;
        }
    }
    return lenn;
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len = strlen(ch);
    int total = length(ch, len);
    cout << len;

    return 0;
}