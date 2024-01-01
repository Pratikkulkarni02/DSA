#include <iostream>
#include<vector>
using namespace std;
int moveleft(vector<int> &arr, int n){
    int low = 0;
    int high = n-1;

    while(low <= high){
        if(arr[low] <  0){
            low++;
        }
        
        else if(arr[high] >0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
        }
    }
}

int main(){
    vector<int> arr = {5, 4, -1, 2, -5, 11};
    int size = 6;
    moveleft(arr,size);
    
    for(int i =0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}