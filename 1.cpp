#include <iostream>
using namespace std;

int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int nextprime(int n){
    while (true){
        if(isprime(n)){
            return n;
        }
        n++;
    } 
}

int previousprime(int n){
    while (true){
        if(isprime(n)){
            return n;
        }
        n--;
    } 
}

int nearestprime(int n){
    int np = nextprime(n);
    int pp = previousprime(n);
    int x = abs(n-np);
    int y = abs(n-pp);
    if(x>=y){
        return pp;
    }else{
        return np;
    }
}

int main(){
    int num;
    cin>>num;
    cout<<nearestprime(num);
}