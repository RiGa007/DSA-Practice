#include <iostream>
using namespace std;

int insertAtMiddle(int arr[], int size, int capacity, int element, int index){
    if(size>capacity){
        cout<<"Array is full";
        return size;
    }
    if(index<0||index>size){
        cout<<"Invalid";
        return size;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return size+1;
}

int main(){
    int arr[] = {10,15,20,12,68};
    int size = 5;
    int capacity = 10;
    int element = 69;
    int index = 3;

    size = insertAtMiddle(arr, size, capacity, element, index);

    cout<< "array after insertion at index: "<< index;
    for(int i=0; i<size; i++){
        cout<<arr[i]<< endl;
        
    }
    return 0;
}