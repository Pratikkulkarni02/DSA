class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
      int arr[256] = {0};
      for(int i =0; i<S.size(); i++){
          arr[S[i]]++;
      }
      
      for(int i =0; i<S.size(); i++){
          if(arr[S[i]] == 1){
              return S[i];
              break;
          }
      }
      return '$';
       
    }

};