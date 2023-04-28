#include<iostream>
using namespace std;


int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    // we will count how many element are lesser than our pivot
    for(int i =s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }

    }

    // place pivot at right position;
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    // left and right wala part smbhal lete hai
    int  i= s; 
    int j =e;

    while(i<pivotindex && j>pivotindex){
        while(arr[i]<= pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }
        // ith paryant alat tr third case:
        // pivot peksha mothe left side la aslele element right part la pivot peksha chotya element ssobt swap kra
        if(i<pivotindex && j>pivotindex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }


    }

    return pivotindex;
}





void quicksort(int arr[], int s, int e){

     // base case
     if(s>=e){
        return;
     }

     // partition karenge
     int p = partition(arr, s, e);

     // left wala part sort kro
     quicksort(arr,s,p-1);

     // right wala part sort kro
     quicksort(arr,p+1,e);
}



int main(){

    int arr[5] = {2,4,1,6,9};
    int n =5;

    quicksort(arr,0,n-1);

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    return 0;
}