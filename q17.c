#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos,i;
    printf("Original array: ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);}
    printf("Choose deletion position: ");
    printf("0 for front number");
    printf("\n1 for middle number");
    printf("\n2 for last number");
    int ch;
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 0:
          pos=0;
          break;
        case 1:
          printf("Enter index: ");
          scanf("%d",&pos);
          if(pos<0 || pos>=n){
            printf("Invalid position");
            return 0;}
            break;
        case 2:
          pos=n-1;
          break;
        default:
          printf("Invalid choice");
          return 0;}
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];}
    n--;
    printf("\nArray after deletion: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);}
    return 0;}