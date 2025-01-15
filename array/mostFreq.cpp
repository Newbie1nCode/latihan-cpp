#include<iostream>
using namespace std;
void fungsi(int array[], int size){
    int mostFreq = array[0];
    int max = 0;
    for (int i = 0; i < size; i++){
        int count = 0;
        for (int x = 0; x < size; x++){
            if (array[i] == array[x]){
                count++;
            }
        }
        if (count > max){
            max = count;
            mostFreq = array[i];
        }
    }
    cout<<"tersering muncul: "<<mostFreq<<endl;
    cout<<"banyak muncull: "<<max;
}
int main(){
    int array [] = {1,2,3,2,4,5,5,6,5,7,5,9,10,2};
    int size = sizeof(array)/sizeof(*array);

    for (int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    


    fungsi(array,size);
}