#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abca";
    if(next_permutation(s.begin(), s.end()))
        cout << s << endl;
    return 0;
}
