#include<iostream>
#include<algorithm>
using namespace std;
void fungsi(int array[], int size){
    for (int i = 0; i <size; i++){
        for (int x = i+1; x < size; x++){
            if(array[x] > array[i]){
                cout<<array[i]<<"==>"<<array[x]<<endl;
                break;
            }
            
        }
         
    }
        
}
int main(){
    int array [] = {4, 5, 2, 10, 8};
    int size = sizeof(array)/sizeof(*array);

    fungsi(array,size);
}