class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
// stoi : used to convert string into an integer
// we will convert the hour in min (string to interger using stoi)
      for(int i=0; i<timePoints.size(); i++){
        string curr = timePoints[i];  
        int hours = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        int totalminutes = hours*60 + min;
        minutes.push_back(totalminutes);
      }

// step 2 : sort
    sort(minutes.begin(), minutes.end());

// step 3 : find the min minutes difference

  int mini = INT_MAX;
  int n = minutes.size();

  for(int i =0; i<n-1; i++){
      int diff = minutes[i+1] - minutes[i];
      mini = min(mini, diff);
  }

// step 4 : to handle the 11:59 case
  int lastdiff = (minutes[0] + 1440) - minutes[n-1];
   mini = min(mini, lastdiff);
   
   return mini;

    }
};