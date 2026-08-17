#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }
    int hash[14] = {0};
    for(int i=0; i<a; i++){
        hash[arr[i]]++;
    }

    int b;
    cin>>b;
    while(b--){
        int num;
        cin>> num;
        cout<< hash[num] << endl;
    }
    return 0;
}