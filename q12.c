#include <stdio.h>
#include<limits.h>
int main(){
    int a[]={1,232,23,42,231,23,1212,342,3112,441,122};
    int min = INT_MIN;
    int max= INT_MAX;
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(max>a[i]){
            max=a[i];
        }
        if(min<a[i]){
            min=a[i];
        }
       
    }
     printf("maximum no is %d ,minimum no is %d",min,max);
    return 0;
}