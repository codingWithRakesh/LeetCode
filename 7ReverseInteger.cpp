#include <iostream>
#include <climits>
using namespace std;

int reverse(int x) {
    int reverse = 0;
    while(x != 0){
        int a = x % 10;
        if (reverse > INT_MAX/10 || reverse < INT_MIN/10) {
            return 0; // Return 0 or handle it however you'd like
        }
        reverse = reverse * 10 + a;
        x /= 10;
    }
    return reverse;
}

int main(){
    int n = -123;
    cout << reverse(n) << endl;
    return 0;
}