#include <stdio.h>

int main(void)
{
    int j = 1;
    for (int i = 0; i < 101; i++,j++)
    {
        if (j % 15 == 0){
            printf("fizzbuzz");
        }else if (j % 3 == 0){
            printf("fizz");
        }else if (j % 5 == 0){
            printf("buzz");
        }else{
            printf("%d",j);
        }
    }
    
}