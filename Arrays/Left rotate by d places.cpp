
vector<int> rotateArray(vector<int>arr, int k) {
  
    optimal solution
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin(), arr.end());


    return arr;

//     brute force solution
//     int n = arr.size();
//     k = k % n;
//     int temp[k];
//     for(int i =0; i<k; i++){
//         temp[i] = arr[i];
//     }

//     for(int i =k; i<n; i++){
//         arr[i-k] = arr[i];
//     }

//     for(int i = n-k; i<n; i++){
//         arr[i] = temp[i-(n-k)];
//     }
//   return arr;
    
}
