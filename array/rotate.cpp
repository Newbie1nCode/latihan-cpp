#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int array [] = {3, 5, 2, 1, 6, 4};
int size = sizeof(array)/sizeof(*array);
    for(int x = 0;x < size;x++){
       cout<<array[x]<<" ";
    }
    cout<<endl;
    int awal;
   for(int x = 0;x < size/2;x++){
      awal = array[x];
      array[size - 1] = array[x];
      array[x] = awal;
      cout<<awal<<" ";
   }
}