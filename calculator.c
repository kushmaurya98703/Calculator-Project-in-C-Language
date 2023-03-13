#include<stdio.h>
 int a,b,c;
int main(){
    int con,n,ch;
    printf("\t\t\tCalculator\n\n\n");
    printf("Choose What you Want?\n");
    printf(" press 1: if you want to addition of two Number.\n");
    printf(" Press 2: if you want to substraction of two Number.\n");
    printf(" Press 3: if you want to Multiplication of two Number.\n");
    printf(" Press 4: if you want to Division of two Number.\n");

    
    printf("Press(1-4)\n");
    scanf(" %d",&ch);
    switch(ch){
        case 1: 
        printf("enter the two Number\n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Addition is:%d",c);
        break;

        case 2: 
        printf("enter the two Number\n");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("Substraction is:%d",c);
        break;

        case 3: 
        printf("enter the two Number\n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("Multiplication is:%d",c);
        break;

        case 4: 
        printf("enter the two Number\n");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("Addition is:%d",c);
        break;
    }
    
    return 0;
}