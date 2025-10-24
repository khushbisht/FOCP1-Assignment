#include<stdio.h>
#include<math.h>
int main(){
    int n, no, rem,c = 0;
    double sum=0.0;
    printf("Enter no:");
    scanf("%d", &n);
    no = n;
    // Counting digits
    while(no > 0){
        no /= 10;
        c++;
    }
    // Reset no to original value
    no = n;
    // now breaking down the number into digits
    // raising each digit to the power of the total number of digits and suming the results
        for(int i=1;i<=c;i++){
        rem = no % 10;
        sum+= pow(rem, c);
        no = no / 10;
    }
    
    // Check Armstrong
    if((int)sum == n)
        printf("%d is an Armstrong\n"  , n);
    else
        printf("%d is not an Armstrong" , n);
    
    return 0;
}
