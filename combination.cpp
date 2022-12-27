#include<iostream>
using namespace std;

int factorial(int n){
    int a=1;
    while (n>0)
    {
        a=a*n;
        n--;
    }
    return a;
}
int nCr(int n , int r){
    int upper = factorial(n);
    int lower = factorial(r) * factorial(n-r);
    float ans = upper/lower;
}    

int main(){
    int n,r;
    cin>> n >> r;

    cout<<nCr(n,r)<<endl;
    return 0;
}
    
