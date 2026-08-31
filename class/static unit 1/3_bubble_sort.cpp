#include <iostream>
using namespace std;

void bubbleSort(int scores[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(scores[j]>scores[j+1]){
                int temp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = temp;
            }
        }
    }
}

void alreadySorted(int scores[], int size){
    int count = 0;
    for(int i=0; i<size-1; i++){
        if(scores[i]>scores[i+1]){
            cout<< "The array is not sorted."<<endl;
            return;
        }
        count++;
    }
    cout<< "The array is already sorted."<<endl;
}