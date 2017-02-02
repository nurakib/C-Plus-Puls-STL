#include <bits/stdc++.h>
using namespace std;
int main(){
    //declaring a vector
    vector <int> vec;
    cout << "Initially Vector size: " << vec.size() << endl;

    //putting data into vector
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);
    vec.push_back(9);
    cout << "After pushing size is: " << vec.size() << endl;

    //put out data from vector
    vec.pop_back(); //Removes the last element in the vector
    cout << "After popping size is: " << vec.size() << endl;

    //vector accessing
    cout << "First element is: " << vec.front() << endl;
    cout << "Second element is: " << vec[1] << endl; //no range check
    cout << "Third element is: " << vec.at(2) << endl; //throw range_error exception if out of range
    cout << "Last element is: " << vec.back() << endl;

    //printing vector
    cout << "Printing the vector" << endl;
    //way - 1
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " "; // just like array printing
    cout << endl;
    //way - 2
    for(vector <int> :: iterator itr = vec.begin(); itr < vec.end(); itr++)
        cout << *itr << " "; // iterator behaves like a pointer
    cout << endl;
    //way - 3
    for(auto it: vec)
        cout << it << " "; // only for c++ 11
    cout << endl;

    //printing in reverse order
    cout << "Printing vector in reverse order" << endl;
    for(vector <int> :: reverse_iterator itr = vec.rbegin(); itr < vec.rend(); itr++)
        cout << *itr << " "; // iterator behaves like a pointer
    cout << endl;

    //make a new copy of existing vector
    vector <int> copy_vec;
    copy_vec = vec; // vector <int> copy_vec(vec); also works.
    cout << "Printing the copied one" << endl;
    for(auto it: copy_vec)
        cout << it << " ";
    cout << endl;

    //swapping two vectors
    vector <int> swap_vec;
    for(int i = 1; i <= 5; i++)
        swap_vec.push_back(i); // insert 5 elements in swap vector
    swap_vec.swap(vec);
    cout << "Printing the swapped two" << endl;
    for(auto it: vec)
        cout << it << " "; // filled with swap_vec
    cout << endl;
    for(auto it: swap_vec)
        cout << it << " "; //filled with vec
    cout << endl;

    //inserting in a vector
    cout << "Inserting in the vector" << endl;
    vector <int> :: iterator itr;
    itr = vec.begin();
    vec.insert(itr , 0); //insert 0, at the beginning
    vec.insert(itr, 3, 10); //insert 10, 3 times at the beginning
    itr = vec.begin(); //prev itr is not valid cause size changed more than 1
    vec.insert(itr + 5, 3, 11); //insert 11, 3 times at 5 position from front
    vector <int> inset_this_vec(2, 50); //create this vector to insert in vec
    vec.insert(itr + 2, inset_this_vec.begin(), inset_this_vec.end()); //inset a new vector
    itr = vec.begin();
    int insert_this_array[3] = {19, 20, 21};
    vec.insert(itr, insert_this_array, insert_this_array + 3);
    for(auto it: vec)
        cout << it << " ";
    cout << endl;

    //erasing a vector
    cout << "Erasing in the vector" << endl;
    vec.erase(vec.begin()); //erase at the beginning
    vec.erase(vec.begin() + 1); //erase 1 position from beginning
    vec.erase(vec.begin() + 2, vec.begin() + 5); // erase 2 -> 5 position from beginning
    for(auto it: vec)
        cout << it << " ";
    cout << endl;

    //clearing a vector
    vec.clear();
    cout << "After clearing vector size is: " << vec.size() << endl;

    //empty
    if(vec.empty()) cout << "Empty" << endl;
    return 0;
}
