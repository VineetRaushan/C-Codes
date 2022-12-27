#include<iostream>
using namespace std;

int bitscount(int n1,int n2){
    int ans =0;
    int ans1=0;
    while(n1!=0){
           int bit = n1&1;
           ans1 = ans1 + bit;
           n1=n1>>1;
    }
    int ans2=0;
    while(n2!=0){
           int bit = n2&1;
           ans2 = ans2 + bit;
           n2=n2>>1;
    }
    ans = ans1 + ans2;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int answer = bitscount(n1,n2);
    cout<<answer<<endl;


}