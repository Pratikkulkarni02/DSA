#include <bits/stdc++.h>
using namespace std;

int main(){
   //collecting the vector
   vector<int> a = { 1, 45, 54, 71, 76, 12 };
   cout << "Vector: ";
   for (int i = 0; i < a.size(); i++)
      cout << a[i] << " ";
   cout << endl;
   //reversing the vector
   reverse(a.begin(), a.end()-3);
   cout << "Reversed Vector: ";
   for (int i = 0; i < a.size(); i++)
      cout << a[i] << " ";
   cout << endl;
   return 0;
}
