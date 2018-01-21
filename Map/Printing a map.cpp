#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, fl = 0;
    map <int, int> num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        num[tmp]++;
    }
    for(auto it = num.begin(); it != num.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}
