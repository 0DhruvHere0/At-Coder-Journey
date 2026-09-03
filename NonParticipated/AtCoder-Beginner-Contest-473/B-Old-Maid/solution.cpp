// Time Complexity= O(N + N + N)
// Space Complexity= O(N + N + 1)
// Exec Time= 1 ms
// Exec Memory= 3620 KiB
// Code Size= 463 Byte

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
  int total;
  cin>>total;
  vector<int> values;
  for (int i=0; i<total; i++){
    int temp;
    cin>>temp;
    values.emplace_back(temp);
  }
  unordered_map<int, int> cards;
  for (int i=0; i<total; i++){
    cards[values[i]]++;
  }
  int sum=0;
  for (auto x:cards){
    if (x.second%2==1){
      sum= sum+x.first;
    }
  }
  cout<<sum;
}