#include<stdio.h>

int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0,i=0;
    for(int i=0;i<7;i++){
        sum +=arr[i];
        if(arr[i]==arr[i+1]){
            arr[i+1] = sum;
            
            break;
        }
    }
    for(int i=0;i<7;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
