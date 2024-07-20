#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Section 1: Basic String Operations

    // string name;
    // cin >> name;
    // cout << "Length of string: " << name.length() << endl;
    // cout << "String is empty or not: " << name.empty() << endl;
    // cout << "Character at position 0 is: " << name.at(4) << endl;
    // cout << "Front character of string is: " << name.front() << endl;
    // cout << "Back character of string is: " << name.back() << endl;

    // Section 2: String Concatenation

    // string str1 = "Love";
    // string str2 = "Babbar";
    // cout << "Before appending" << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;
    // str1.append(str2);
    // cout << "After appending" << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // Section 3: String Erase and Insert

    // string desc = "This is a car";
    // desc.erase(4, 3); //removes 3 characters starting from the 4th place
    // cout << desc << endl;
    // string name = "Love Babbar";
    // string middle = "kumar ";
    // name.insert(5, middle);
    // cout << "Printing name:  " << name << endl;

    // Section 4: String Push and Pop

    // string name = "shweta";
    // cout << name << endl;
    // name.push_back('a');
    // cout << name << endl;
    // name.pop_back();
    // cout << name << endl;

    // Section 5: String Find and Compare
    string str1 = "staryyyy";
    string str2 = "staryyyy";
    if (str1.find(str2) == string::npos)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    string str3 = "babbar";
    string str4 = "Love";
    if (str1.compare(str2) == 0)
    {
        cout << "Matching" << endl;
    }
    else
    {
        cout << "Not matching " << endl;
    }

    return 0;
}
