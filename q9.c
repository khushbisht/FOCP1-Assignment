#include<stdio.h>
int main(){
    int a[5]={98,99,23,21,89};
    for(int i=0;i<5;i++){
        if(a[i]==99){
            printf("%d",i);
        }
    }
    return 0;
}