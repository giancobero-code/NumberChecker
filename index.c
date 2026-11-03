#include <stdio.h>
#include <string.h>
int main(){
    // check if the number is odd or even

    int number;
    char choice[10];


    do{
        int number;
    printf("ENTER ANY NUMBER: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%d IS EVEN NUMBER!", number);
    }else{
        printf("%d IS ODD NUMBER!", number);
    }

    printf("\nDO YOU WANT TO CHECK ANOTHER NUMBER? (YES/NO:)");
    scanf("%s", &choice);


    }while(strcmp(choice, "YES")== 0);
    printf("THANKYOU FOR USING THE PROGRAM");



   return 0;

}