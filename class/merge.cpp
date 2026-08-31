#include <iostream>
using namespace std;

int main(){
    int n,m;

    cin>>n;

    int a[10], b[10]; merged[20];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0; j=0; k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            merged[k] = a[i];
            i++;
        }
        else{
            merged[k] = b[j];
            j++;
        }
        k++;
    }
}
while(i<n){
        merged[k] = a[i];
        i++;
        k++;
    }

    while(j<m){
        merged[k] = b[j];
        j++;
        k++;
    }

    for(int i=0; i<k; i++){
        cout<<merged[i]<<" ";
    }
}