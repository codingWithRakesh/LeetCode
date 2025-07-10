#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // Convert uppercase to lowercase using ASCII
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Keep only lowercase letters and digits
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            result += ch;
        }
    }

    string tmp = result;

    int st = 0;
    int end = result.length() -1;
    while(st < end){
        swap(result[st],result[end]);
        st++;
        end--;
    }

    cout << "tmp: " << tmp << endl;
    cout << "Cleaned String: " << result << endl;

    if(tmp == result){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}