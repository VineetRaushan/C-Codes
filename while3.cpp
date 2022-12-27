/* n numbers are given find sum of even numbers */
#include<iostream>
using namespace std;
int main()
{
 int n;
 int a;
 cin>>n;
 int sum =0;
 int i=0;
 while (i<=n/2)
 {
    sum=sum+i;
    i=i+1;
 }
 a=sum*2;
 cout<<a;
 return 0;
}