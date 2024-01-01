vector<int> alternateNumbers(vector<int>&a) {

    // optimal approach
    int n = a.size();
    vector<int> ans(n,0);
    int posindex =0;
    int negindex =1;

    for(int i =0; i<n; i++){
        if(a[i] > 0){
            ans[posindex] = a[i];
            posindex += 2;
        }
        else{
            ans[negindex] = a[i];
            negindex += 2;
        }
    }
    return ans;

    // better approach
    // vector<int> posarr;
    // vector<int> negarr;
    // int n = a.size();

    // for(int i =0; i<n; i++){
    //     if(a[i] > 0){
    //         posarr.push_back(a[i]);
    //     }
    //     else{
    //         negarr.push_back(a[i]);
    //     }
    // }

    // for(int i =0; i<n/2; i++){
        
    //         a[2 * i] = posarr[i];
    //         a[2* i+1] = negarr[i];
        
    // }
    // return a;
}