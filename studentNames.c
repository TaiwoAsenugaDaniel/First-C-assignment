#include <stdio.h>

int main() {
    int studNo;

    //code block requesting for number of names
    printf("Please enter the number of names you would like to print: ");
    scanf("%d",&studNo);

    //code to create an array with an array size for the names entered
    char studName[studNo][100] ;

    //for loop to iterate over the array and add entered elements to the array
    for ( int i = 1 ; i <= studNo; i++)
    {
        printf("Please enter the name of student %i: ", i);
        scanf("%s",&studName[i-1]);
    }

    //code block to print out names entered
    printf("\nThese are the names you entered: \n");

    //for loop to loop over the array of names entered and print the names out
    for(int j = 0; j<studNo; j++){
        printf("%s \n", studName[j]);

    }

    return 0;
}