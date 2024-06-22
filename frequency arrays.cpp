#include <iostream>
using namespace std;
int main(){
    int l[26] = {0};
    string x;
    cin>>x;
    for(char  i : x){
        l[i-97]++;
    }
    int sum;
    int max=1;
    // string a = 'Yes';
    // string b = '';
    // for(int i : x){
    //     if (i==0){
    //         cout<<'No';
    //         break;
    //     }
    // }
    // cout<<'Yes';
}