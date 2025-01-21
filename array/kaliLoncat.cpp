#include<iostream>
#include<algorithm>
using namespace std;
void fungsi(int array[], int size){
   int swap;
   for (int i = 0; i < size; i++) {
        if (array[i] == 6) {
            array[i] = 2;
        }
    }
    for(int i = 0;i < size-1;i++){

      if(array[0]) swap = array[1];        

      if(array[5]) swap = array[4] * 1;
    
      if(array[i] > array[0] && array[i] < array[5])
        swap = array[i -1] * array[i + 1];
        cout<<swap<<" ";
    }
}
int main(){
     int array [] = {1, 2, 3, 4, 6, 7};
     int size = sizeof(array)/sizeof(*array);

     fungsi(array, size);
}