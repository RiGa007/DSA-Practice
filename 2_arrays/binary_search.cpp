#include <iostream>
using namespace std;

int main(){
    int arr[]= {12,20,29,40,41};
    int size = 5;
    int key;
    cin>>key;

    int low = 0;
    int high = size-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == key){
            cout << "Element found at index: "<< mid;
        
        }
        else if(key>arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
        cout<<"Element not found";
    }
    return 0;

}