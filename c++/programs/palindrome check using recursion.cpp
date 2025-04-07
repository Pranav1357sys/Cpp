#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string &s, size_t st, size_t en) {
    if (s.length() == 1) return true;
    if (s[st] != s[en - 1]) return false;
    if (st < en + 1) return isPalindrome(s, st + 1, en - 1);
    return true;
}

int main() {
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    isPalindrome(s, 0, s.length()) ? cout << "s is a palindrome" << endl
                                   : cout << "s is not a palindrome" << endl;
}
