#include <stdio.h>
#include <math.h>

int filter (void(*function) (int),int *n, int tamanho, int i)
{
    if(i>=tamanho)
    {
        return 0;
    }
    else 
    {
        function(*n);
        return filter(function,++n, tamanho, ++i);
    }
}

void even (int a)
{
    if(a % 2 != 0)
    {
        printf("[%d]",a);
    }
}

void odd(int a)
{
 	if(a % 2 == 0)
    {
        printf("[%d]",a);
    }
}

int main()
{
    int i, n=0;
    scanf("%d",&n);
    int array [n];

    for(i = 0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("pares");
    filter(odd,array,n,0);
    printf("\n");

    printf("ímpares ");
    filter(even,array,n,0);
    printf("\n");
    
        return 0;
}
