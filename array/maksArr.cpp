#include<iostream>
using namespace std;
void fungsi(int array[],int size){
    //menyediakan variabel integer 0 untuk menukar nilainya dengan elemen array
    int maks = 0;
    for (int i = 0; i < size; i++){
        //jika nilai maks lebih dari nilai array
        if (maks < array[i]){
            // maka nilai maks akan diubah dengan nilai array yang nilai nya lebih besar;
            // misal maks = 0 dan array = 21;
            // nilai true maka maks berubah menjadu 21. itu akan berulang hingga maks menemukan nilai terbesar dan tidak dapat ditukar lagi nilainya
            maks = array[i];
        }
        
    }
    cout<<maks;
}
int main(){
    int array [] = {21,32,12,45,32,11,15,28,4};
    int size = sizeof(array)/sizeof(*array);

    cout<<"ini adalah array terbesar: ";
    fungsi(array,size);
}