#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, j, k = 1;   
   
    printf( " Enter a number to define the rows in Floyd's triangle: \n");  
    scanf( "%d", &num);   
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf(" %2d", k++); 
        }  
        printf( "\n");  
        }     
        getch();   
}  
