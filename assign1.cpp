#include<iostream>
using namespace std;

int main(){

//1
  int x,y;
  cin>>x;
  cin>>y;

  cout<<x+y;

  // 2 

  int alpha='U';
  cout<<alpha;

 // 3

  int l,b;
  cin>>l;
  cin>>b;
  cout<<l*b;
  
// 4
  int n;
  cin>>n;
  cout<<n*n*n;

// 5

  cout<<sizeof(int)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(bool)<<endl<<sizeof(char)<<endl;
  cout<<sizeof(string)<<endl;

  // 6 

  int p=10,q=12;
  int z;
  z=p;
  p=q;
  q=z;

  cout<<p<<endl<<q;
  
  
  return 0;
}
