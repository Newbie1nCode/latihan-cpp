#include<iostream>
#include<algorithm>
using namespace std;
void fungsi(int array[], int size){
    int swap = 0;
     for(int x = 0;x < size;x++){
       for(int i = x + 1;i < size; i++){
          if(array[x] > array[i]){
            swap = array[x];
            array[x] = array[i];
            array[i] = swap;
          }
       }
    }
    for (int  i = 0; i < size - 1; i+=2){
        swap = array[i];
        array[i] = array[i + 1];
        array[i + 1] = swap;
    }
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    
}
int main(){
     int array [] = {10, 90, 49, 2, 1, 5, 23};
     int size = sizeof(array)/sizeof(*array);

     //[2, 1, 10, 5, 49, 23, 90] = output yang di inginkan     
     fungsi(array, size);
}
