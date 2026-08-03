#include <iostream>
using namespace std;

int sum(int n, int s){
    if(n<1){
        return s;
    }
    return sum(n-1, s+n);
}
int main(){
    int n;
    cin>>n;
    int s = sum(n, 0);
    cout<<s<<"\n";
}