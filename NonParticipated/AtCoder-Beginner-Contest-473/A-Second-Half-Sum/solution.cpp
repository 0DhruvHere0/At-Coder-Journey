// Time Complexity= O(N + N/2)
// Space Complexity= O(N + 1)
// Exec Time= 1 ms
// Exec Memory= 3636 KiB
// Code Size= 289 Byte

#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a;
  cin>>a;
  vector<int> b;
  for (int i=0; i<a; i++){
    int temp;
    cin>>temp;
    b.emplace_back(temp);
  }
  int sum=0;
  for (int i=a/2; i<a; i++){
    sum= sum+b[i];
  }
  cout<<sum;
}