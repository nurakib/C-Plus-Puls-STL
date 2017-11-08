#include <bits/stdc++.h>
using namespace std;
int main(){
    auto n = 0;
    cin >> n;
    string binary = bitset<8>(n).to_string(); //for 8 bit representation
    cout << binary << "\n";
    return 0;
}
