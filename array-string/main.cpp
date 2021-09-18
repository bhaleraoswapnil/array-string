//
//  main.cpp
//  array-string
//
//  Created by Swapnil Bhalerao on 16/09/21.
//  clang++ -std=c++14 -stdlib=libc++ main.cpp

//  String Compression: Implement a method to perform basic string compression using the counts of repeated characters.

//  For example,
//  the string aabcccccaaa would become a2blc5a3.

//  If the "compressed"string would not become smaller than the original string,
//  your method should return the original string. You can assume the string has only uppercase and lowercase letters (a - z).

#include <iostream>
#include <string>
#include <stack>
#include <stdlib.h>
using namespace std;

void stringCompress(string str)
{
    string output = "";
    std::stack<char> stk;
    int cnt = 1;
    if (stk.empty())
    {
        stk.push(str[0]);
        output = output + str[0];
    }
    for (int i = 1; i < str.length(); i++)
    {
        // aabcccccaaa would become a2blc5a3

        if (stk.top() == str[i])
        {
            cnt++;
        }
        else if (stk.top() != str[i])
        {
            output = output + std::to_string(cnt);
            stk.pop();
            if (stk.empty())
            {
                stk.push(str[i]);
                output = output + str[i];
                cnt = 1;
            }
        }
    }
    output = output + std::to_string(cnt);
    cout << "input == " << str << endl;
    if (output.length() < str.length())
    {
        cout << "output == " << output << endl;
    }
    else
    {
        cout << "output == " << str << endl;
    }
}

int main(int argc, const char *argv[])
{
    // insert code here...
    std::cout << "Enter string\n";
    string s1 = "";
    cin >> s1;
    stringCompress(s1);
    return 0;
}
