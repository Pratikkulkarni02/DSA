void selectionSort(vector<int>&arr) {
    int i;
    int j;
    int n = arr.size();
    int min_index ;
   for(i =0; i<n; i++){
     
     min_index = i;
   
    for(j = i+1; j<n; j++){
        if(arr[j] < arr[min_index]){
            min_index = j;
        }
        
    }
      swap(arr[min_index], arr[i]);
    }
}