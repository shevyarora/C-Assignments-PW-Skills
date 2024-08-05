#include<iostream>
#include<cmath>
using namespace std;

int main(){
  //a -1
 int p , q ;
 cout<<"Enter length :";
 cin>>p;
 cout<<"Enter breadth :";
 cin>>q;

  if(p==q){
    cout<<"square";
  }
  else{
    cout<<"rectangle";
  }

  // a-2
int num;
 cout<<"Enter a number :";
 cin>>num;
 if(num<0){
   cout<<abs(num);
 }
else{
  cout<<num;
}
 // a-3

   int cp,sp;
 cout<<"Enter Cost Price :";
 cin>>cp;
 cout<<"Enter Selling Price :";
 cin>>sp;
 if(cp>sp){
   cout<<"loss="<<cp-sp;
 }
 else{
   cout<<"Profit="<<sp-cp;
 }

  // a-4

   int num;
 cout<<"Enter num:";
 cin>>num;

 if(num>0){
   cout<<num;
 }

  // a-5

   int a,b;
  string op;
  cin>>a>>b;
  
  cout<<"enter operator";
  cin>>op;

  if(op=="-"){
    cout<<a-b;
  }
  else if(op=="+"){
    cout<<a+b;
  }
  else if(op=="*"){
    cout<<a*b;
  }
  else if(op=="/"){
    cout<<a/b;
  }

  // a-6

  int marks;
  cout<<"Enter the marks :";
  cin>>marks;

  if(marks<=100 && marks>90){
    cout<<"A+";
  }
  else if(marks<=90 && marks>80){
    cout<<"A";
  }
  else if(marks<=80 && marks>70){
    cout<<"B+";
  }
  else if(marks<=70 && marks>60){
    cout<<"B";
  }
  else if(marks<=60 && marks>50){
    cout<<"C";
  }
  else if(marks<=50 && marks>40){
    cout<<"D";
  }
  else if(marks<=40 && marks>30){
    cout<<"E";
  }
  else{
    cout<<"F";
  }

  
  return 0;
}
