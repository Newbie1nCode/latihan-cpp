#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size,add;
    int maks1 = 0;
    int maks2 = 0;

    cout<<"panjang vector: ";
    cin>>size;
    vector<int> array;

    for (int i = 0; i < size; i++){
        cin>>add;
        array.push_back(add);
    }
    for (int i = 0; i < size; i++){
        if (array[i] > maks1){
            maks1 = array[i];
        }
        if (array[i] > maks2 && array[i] < maks1){
            maks2 = array[i];
        }
    }

    cout<<"ini adalah 2 element terbesar: "<<maks1<<","<<maks2;
}