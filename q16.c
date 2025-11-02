#include<stdio.h>
int main(){
int a[]={23,13,24,231,3121,12,234,121};
int n= sizeof(a)/sizeof(a[0]);

int pos,val;
printf("Enter position to enter: ");
scanf("%d",&pos);
printf("Enter value to enter: ");
scanf("%d",&val);
printf("Array before insertion:\n ");
for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
}
for(int i=n;i>pos;i--){
    a[i]=a[i-1];
}
a[pos]=val;
n++;
printf("\nArray after insertion: ");
for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
}
    return 0 ;
}