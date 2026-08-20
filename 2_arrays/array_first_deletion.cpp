#include <iostream>
using namespace std;

int arrayAtFirst(int arr[], int size){
    if(size<=0){
        return 0;
    }
    for(int i=0; i<size; i++){
        arr[i] = arr[i+1];
    }

    return size-1;
}

int main(){
    int arr[4]= {69,34,22,42};
    int size = 4;
    size = arrayAtFirst(arr, size);
        for(int i=0; i<size; i++){
            cout << arr[i]<< endl;
        }

    
    return 0;
}