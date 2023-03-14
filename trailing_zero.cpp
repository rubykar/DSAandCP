#include<iostream>

using namespace std;

void trailing_zero(int n){
    int count = 0;
    while(n%10 == 0){
        count ++;
        n = n/10;
    }
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    trailing_zero(n);
    return 0;
}