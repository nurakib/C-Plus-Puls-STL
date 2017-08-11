#include <bits/stdc++.h>
using namespace std;

int mychoice(int x, int y){
    return x + y + 1;
}

int main(){
    int val[] = {1, 2, 3, 4, 5};
    int result[5];

    partial_sum(val, val+5, result);
    cout << "using default partial_sum: ";
    for(int i = 0; i < 5; i++)
        cout << result[i] << " ";
    cout << endl;

    partial_sum(val, val + 5, result, multiplies<int>());
    cout << "using functional operation multiplies: ";
    for(int i = 0; i < 5; i++)
        cout << result[i] << " ";
    cout << endl;

    partial_sum(val, val + 5, result, mychoice);
    cout << "using custom function: ";
    for(int i = 0; i < 5; i++)
        cout << result[i] << " ";
    cout << endl;
    
    return 0;
}
