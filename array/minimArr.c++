#include<iostream>
using namespace std;
void fungsi(int array[], int size){
    int minim = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] < minim){
            minim = array[i];
        }
        
    }
    cout<<minim;
    
}
int main(){
    int array [] ={21,32,12,45,32,11,4,15,28,11,15};
    int size = sizeof(array)/sizeof(*array);

    cout<<"nilai terkecil: ";
    fungsi(array,size); 
}