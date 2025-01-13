#include<iostream>
#include<algorithm>
using namespace std;
void fungsi(int array[],int size){
    int nilai1 = array[0];
    int nilai2 = array[0];
    int nilai3 = array[0];

    for (int i = 0; i < size; i++){
        if(array[i] > nilai1){
            nilai1 = array[i];
        }
        if(array[i] > nilai2 && array[i] < nilai1){
            nilai2 = array[i];
        } 
        if((array[i] > nilai3) && (array[i] < nilai1 && array[i] < nilai2)){
            nilai3 = array[i];
        }
        
    }

    cout<<nilai1<<","<<nilai2<<","<<nilai3;
    
}
int main(){
    int array [] = {21,32,12,45,32,11,15,28,4};
    int size = sizeof(array)/sizeof(*array);

    cout<<"ini adalah 3 elemen terbesar: ";
    fungsi(array,size);
}