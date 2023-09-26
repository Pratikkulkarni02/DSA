// without using sort function

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = a[0];
    int seclargest = -1;
    int smallest = INT_MAX;
    int secsmallest = INT_MAX;
    vector<int> arr;

     for(int i =0; i<n; i++){
        if(a[i] > largest){
            largest = a[i];
          }
         }

    for(int i=0; i<n; i++){
        if(a[i] > seclargest && a[i] != largest){
            seclargest = a[i];
           
        }
    }
    arr.push_back(seclargest);

    for(int i =0; i<n; i++){
        if(a[i] < smallest){
            smallest = a[i];
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] < secsmallest && a[i] > smallest){
            secsmallest = a[i];
            
        }
    }
   arr.push_back(secsmallest);
   return arr;

}