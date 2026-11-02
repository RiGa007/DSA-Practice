#include <iostream>
using namespace std;

void tower_Of_Hanoi(int n, char source, char auxilary, char destination){
    if(n==1){
        cout<<"Move disk from "<<source<<" to "<<destination<<endl;
        return;
    }
    tower_Of_Hanoi(n-1, source, destination, auxilary);

    cout<<"Move disk from "<<source<<" to "<<destination<<endl;

    tower_Of_Hanoi(n-1, auxilary, source, destination);

}

int main(){
    tower_Of_Hanoi(4, 'A', 'B', 'C');
    return 0;
}