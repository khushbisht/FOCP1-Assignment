#include<stdio.h>
int main(){
    int arr[]={1,3,20,4,1,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            printf("Peak element is %d at index %d",arr[i],i);
            break;
        }
    }
    return 0;
}