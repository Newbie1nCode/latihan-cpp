#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int size,add,sama;

    cout<<"how long: ";
    cin>>size;

    vector<int> array;

    for (int i = 0; i < size; i++){
        cin>>add;
        array.push_back(add);
    }
    for (int i = 0; i < size; i++){
        for (int x = i+1; x < size; i++){
            if (array[x] == array[i]){
                sama = array[x];
                break;
            }
            
        }
        
    }

    cout<<"nilai double: "<<sama;
}