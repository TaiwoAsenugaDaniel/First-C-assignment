#include<stdio.h>


//main function
int main(){
 
    int i;
    
    int j;

    //print functon and scan function working to accept value for j
    printf("Enter total numbers you would like to print:");
    scanf("%d", &j);

    //for loop to iterate and print numbers from 1 to j
    for(i = 1; i <= j; i++){
     
      printf("%d ",i);
    }

    return 0;
}