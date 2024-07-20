#include <iostream>
#include <cstring>
using namespace std;
int vowels(char ch[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);

    int total = vowels(ch, strlen(ch));
    cout << "total number of vowels = " << total;

    return 0;
}