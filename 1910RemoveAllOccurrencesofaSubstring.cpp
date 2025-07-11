#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part) {
    bool isCheck = true;
    while(isCheck){
        auto a = s.find(part);
        if(s.find(part) < s.length()){
            s.erase(a,part.length());
        }else{
            isCheck = false;
        }
    }
    return s;
}

int main(){
    string s = "axxxxyyyyb"; 
    string part = "xy";
    cout << removeOccurrences(s,part) << endl;
    return 0;
}