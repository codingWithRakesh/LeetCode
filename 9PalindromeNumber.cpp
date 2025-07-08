#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x) {
    if(!x > 0){
        return false;
    }

    int r = x;

    int re = 0;
    int rev;
    while(x != 0){
        int a = x % 10;
        rev = rev * 10 + a;
        x /= 10;
    }

    cout << "rev = " << rev << endl;

    if(r == rev){
        return true;
    }else{
        return false;
    }


}

int main() {
    int x = -121;
    cout << isPalindrome(x) << endl;
    return 0;
}