// Time Complexity= O(N + N)
// Space Complexity= O(N + 1)
// Exec Time= 2 ms
// Exec Memory= 3504 KiB
// Code Size= 385 Byte

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int sizer;
  cin>>sizer;
  vector<int> vals;
  for (int i=0; i<sizer; i++){
    int temp;
    cin>>temp;
    vals.emplace_back(temp);
  }
  int count=0;
  for (int i=1; i<sizer-1; i++){
    if (max(vals[i-1], vals[i+1])<vals[i]){
      count++;
    }
  }
  cout<<count;
}