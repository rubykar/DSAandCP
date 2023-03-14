#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int size;
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int z = 0;
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k] ==0){
                    cout<<arr[i]<<"  "<<arr[j]<<"  "<<arr[k]<<endl;
                }
                else
                    continue;
            }
        }
    }
    return 0;
}