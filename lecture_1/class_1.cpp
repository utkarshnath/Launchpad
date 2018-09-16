#include<iostream>
using namespace std;
int spi(int p,int r,int t){
    return (p*r*t)/100 + p;
}
int largest(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    if(b>c){
        return b;
    }
    return c;
}
void ap(int a, int d){
    for(int i=0;i<10;i++){
        cout<<a+i*d<<endl;
    }
}
void printN_numbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
bool check_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
}
int largest_N(int arr[10],int n){
    int max = -1000;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /*
*
**
***
****
*****
*/
}
bool check_fibo(int n){
// 0,1,1,2,3,5,8,13
    if(n==0){
        return true;
    }
    int a = 0;
    int b = 1;
    int c = a+b;
    while(c<=n){
        if(c==n){
            return true;
        }
        a = b;
        b = c;
        c = a+b;
    }
    return false;
}
void pattern2(int n){
    int curr = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<curr++<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
/*
****1
***123
**12345
*1234567
123456789
*/
}
int sum_of_digits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n = n/10;
    }
    return sum;
}


int main(){
//pattern1(5);
//pattern2(5);
//pattern3(5);

cout<<check_fibo(1)<<endl;
cout<<check_fibo(2)<<endl;
cout<<check_fibo(3)<<endl;
cout<<check_fibo(17)<<endl;
cout<<check_fibo(8)<<endl;
cout<<check_fibo(0)<<endl;
}
