#include<iostream>
using namespace std;

int ap(int a,int n,int d){
    return a+((n-1)*d);
}

int main(){
    int a,n,d;
    cout<<"Enter a then n and then value of d"<<endl;
    cin>>a>>n>>d;
    int answer = ap(a,n,d);
    cout<<answer<<endl;
}