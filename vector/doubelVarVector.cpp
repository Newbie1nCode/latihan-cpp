#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size, add, same;
    cout<<"how long: ";
    cin>>size;
    vector<int> array;
    for (int i = 0; i < size; i++){
        cout<<"input array: ";
        cin>>add;
        array.push_back(add);
    }
    for (int i = 0; i < size; i++){
        for (int x = i + 1; x < size; x++){
            if (array[x] == array[i]){
                same = array[x];
            }
        }
    }
    cout<<"array double: "<<same;
    
}