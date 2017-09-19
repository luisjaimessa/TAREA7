#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    
    printf("Dame el primer numero mayor a cero\n") ;
    scanf("%d",&num1);
    printf("Dame el segundo numero mayor a cero\n") ;
    scanf("%d",&num2);
    printf("Dame el tercer numero mayor a cero\n") ;
    scanf("%d",&num3);
    if(num1 < num2 && num1 < num3){
           printf("%d es el menor", num1);
           }
    if(num2 < num1 && num2 < num3){
           printf("%d es el menor", num2);
           }
    if(num3 < num1 && num3 < num2){
           printf("%d es el menor", num3);
           }
    system("PAUSE");
    return EXIT_SUCCESS;
}
