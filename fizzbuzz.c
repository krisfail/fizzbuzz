#include <stdio.h>

int main(void)
{
    int j = 1;
    for (int i = 0; i < 101; i++,j++)
    {
        if (j % 15 == 0){
            printf("fizzbuzz\n");
        }else if (j % 3 == 0){
            printf("fizz\n");
        }else if (j % 5 == 0){
            printf("buzz\n");
        }else{
            printf("%d\n",j);
        }
    }
    
}