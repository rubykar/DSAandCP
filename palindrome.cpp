#include<iostream>

using namespace std;

void palindrome(int n){
    int rev = 0;
    int num = n;
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    cout<<rev<<endl;
    if(rev == num){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }

}

int main(){
    int x;
    cin>>x;
    palindrome(x);
    return 0;
}