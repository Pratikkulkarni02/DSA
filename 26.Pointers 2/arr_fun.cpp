#include <iostream>
using namespace std;
          // it is notjing but a pointer
          //   |
          //   v
int getsum(int arr[], int n){

    cout<<endl<<sizeof(arr)<<endl; // 8 output but my systemis showing 4
    int sum =0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}



int main(){

    int arr[5] = {1,2,3,4,5};

    cout<<"sum is "<< getsum(arr+3,2)<< endl;

    return 0;
}