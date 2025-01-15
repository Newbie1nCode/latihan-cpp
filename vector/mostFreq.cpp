#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size, add;
    cout<<"how long: ";
    cin>>size;
    vector<int> array;

    for (int i = 0; i < size; i++){
        cout<<"array: ";
        cin>>add;
        array.push_back(add);
    }
    int mostFreq = 0;
    int max = 0;
    for (int i = 0; i < size; i++){
        int count = 0;
        for (int x = 0; x < size; x++){
            if (array[x] == array[i]){
                count++;
            }
        }
        if(count > max){
            max = count;
            mostFreq = array[i];
        }
        
    }
    cout<<"most Freq: "<<mostFreq<<endl;
    cout<<"much: "<<max;
}