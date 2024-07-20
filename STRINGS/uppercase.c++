#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    for (int i = 0; i < strlen(ch); i++)
    {
        ch[i] = toupper(ch[i]);
    }
    cout << "name is : " << ch << endl;
    return 0;
}
