#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abca";
    if(prev_permutation(s.begin(), s.end()))
        cout << s << endl;
    return 0;
}
