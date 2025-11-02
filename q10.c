#include <stdio.h>
int main(){
    int marks[]={99,64,87,42,99,43};
    int n= sizeof(marks)/sizeof(marks[0]);
    int count=0;
    printf("Students who scored 99 are: ");
    for(int i=0;i<n;i++){
        if(marks[i]==99){
            printf("%d\n",i+1);
            count++;
        }
    }
    printf("Total students who scored 99 are: %d",count);
    return 0;
}