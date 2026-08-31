#include <iostream>
using namespace std;

void traverseInventory(int inventory[], int size){
    cout<< "Inventory List: ";
    for(int i=0; i<size; i++){
        cout<<inventory[i]<<" ";
    }
}
void insertItem

void deleteItems(int inventory[], int size, int item){
    cout<< "Removing item: "<<item<<endl;

    int position = -1;

    for(int i=0; i<size; i++){
        if(inventory[i] == item){
            position = i;
            break;
            
        }
    }
    
}

int main(){
    int inventory[MAX_SIZE];
    int size, n, m;
    int newItems[MAX_SIZE];
    int deleteItems[MAX_SIZE];

    cin>>size;

    for(int i=0; i<size; i++){
        cin>> inventory[i];
    }



}