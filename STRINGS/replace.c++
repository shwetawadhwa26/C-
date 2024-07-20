// #include <iostream>
// using namespace std;
// int replacechar(char ch[], int n)
// {
//     int index = 0;
//     while (ch[index] != '\0')
//     {
//         char ok = ch[index];
//         if (ok == '@')
//         {
//             ch[index] = '*';
//         }
//         index++;
//     }
// }
// int main()
// {
//     char ch[100];
//     cin.getline(ch, 100);
//     replacechar(ch, 100);
//     cout << ch << endl;

//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;
int charreplace(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char ok = ch[index];
        if (ok == '@')
        {
            ch[index] = '=';
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int length = strlen(ch);
    charreplace(ch, length);
    cout << ch << endl;

    return 0;
}
