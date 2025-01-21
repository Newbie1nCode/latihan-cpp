#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int array [] = {3, 5, 2, 1, 6, 4};
int size = sizeof(array)/sizeof(*array);
   int swap;
   for (int i = 0; i < size / 2; i++){
      swap = array[i];
      array[i] = array[size - i - 1];
      array[size - i - 1] = swap;
   }
   for (int i = 0; i < size; i++){
      /* code */
      cout<<array[i]<<" ";
   }
   
}