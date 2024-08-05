#include<iostream>
using namespace std;

int main(){
  //a-1
  int x,y;
  cout<<"Enter x:";
  cin>>x;
  cout<<"Enter y:";
  cin>>y;

  if(x==y){
    cout<<"True";
  }
  else{
    cout<<"False";
  }

  //a-2

   int a,b;
  cout<<"Enter x:";
  cin>>a;
  cout<<"Enter y:";
  cin>>b;

  if(a<50 && a<b){
    cout<<"True";
  }
  else{
    cout<<"False";
  }


  // a-3
 int boys ,girls,total,per,Str ;
 cout<<"Enter boys :";
 cin>>boys;
  cout<<"Enter % :";
   cin>>per;
  cout<<"Enter strength :";
  cin>>Str;
 total=(per*Str)/100;
girls=total-boys;
  cout<<girls;
  //a-4
 int num;
 cout<<"Enter a Number :";
 cin>>num;
 int rem,i=4;
 int ar[5]={};
 while(num!=0){
   rem=num%10;
   ar[i]=rem;
   num/=10;
   i--;
 }

  int sum=ar[0]+ar[3];
  cout<<sum; 

  //a-5

  int num;
 cout<<"Enter a Number :";
 cin>>num;
 int rem;
 int sum=0;
 while(num!=0){
   rem=num%10;
   sum+=rem;
   num/=10;
 }
 cout<<sum; 

 // a -6
 int p , q ;
 cout<<"Enter p :";
 cin>>p;
 cout<<"Enter q :";
 cin>>q;

  cout<<"Product="<<p*q<<endl;
  cout<<"Subtraction="<<p-q<<endl;
  cout<<"Addition="<<p+q<<endl;
  cout<<"Division="<<p/q<<endl;
  cout<<"Remainder="<<p%q<<endl;
  
  
  return 0;
}
