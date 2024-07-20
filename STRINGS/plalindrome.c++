// #include <iostream>
// #include <string.h>
// using namespace std;
// bool checkpalindrome(char ch[], int n)
// {
//     int i = 0;
//     int j = n - 1;
//     while (i <= j)
//     {
//         if (ch[i] == ch[j])
//         {
//             i++;
//             j--;
//         }
//         else
//         {
//             return false;
//         }
//     }
// }
// int main()
// {
//     char ch[100];
//     cin.getline(ch, 100);
//     int len = strlen(ch);
//     bool ispalindrome = checkpalindrome(ch, len);
//     if (ispalindrome)
//     {
//         cout << "valid plaindrome" << endl;
//     }
//     else
//     {
//         cout << "invalid " << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len = strlen(ch);
    bool ispalindrome = palindrome(ch, len);
    if (ispalindrome)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
