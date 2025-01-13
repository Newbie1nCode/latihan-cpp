#include<iostream>
#include<algorithm>
using namespace std;
void fungsi(int array[], int size){
    int sama;
    for (int i = 0; i < size; i++){
        for (int x = i + 1; x < size; x++){
            if (array[x] == array[i]){
                sama = array[x];
            }
            
        }
        
    }

    cout<<sama;
    
}
int main(){
    int array [] = {1,2,3,4,5,3,7,8};
    int size = sizeof(array)/sizeof(*array);
    cout<<"elemen double: ";
    fungsi(array,size);

}