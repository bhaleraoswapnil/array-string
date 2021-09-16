//
//  main.cpp
//  array-string
//
//  Created by Swapnil Bhalerao on 16/09/21.
//  clang++ -std=c++14 -stdlib=libc++ main.cpp
//  Is Unique: String has all unique charecter.

#include <iostream>
#include <string>
using namespace std;

bool IsUnique(string str)
{
    bool flags[256];
    memset(flags, false, sizeof(bool) * 256);
    if (str.length() > 256)
    {
        return false;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (flags[str[i]] == true)
        {
            return false;
        }
        else
        {
            flags[str[i]] = true;
        }
    }
    return true;
}

int main(int argc, const char *argv[])
{
    // insert code here...
    std::cout << "Enter string\n";
    string s = "";
    cin >> s;
    if (IsUnique(s))
    {
        cout << "String is having all unique charecter" << endl;
    }
    else
    {
        cout << "String is having duplicate charecter" << endl;
    }

    return 0;
}
