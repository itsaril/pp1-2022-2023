#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    char a;
    string b;
    cin >> a >> b;
    for (int i = 0; i < b.size(); i++)
    {
        if(b[i] == a){
            continue;
        } else {
            cout << b[i];
        }
    }
    
}