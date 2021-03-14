#include <stdio.h>
#include <math.h>
 int map (void(*function) (int),int *n,int i){
     if(i>=n){
         return 0;
     }
     else {
         function(*n);
         return map(function,++n,++i);
     }

 }
 void square(int n){
     printf("[%d]",pow(n*n));
 }
 void factorial (int n) 
{
    int result = 1;
    
    for (;  n>= 1 ; --n)
    {
        res *= n;
    }

    printf("[%d] ", res;
    
}
int main(){
    int i, n;
    scanf("%d",&n);
    int array [n];
    for(i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("square");
    map(square,array,0);
    printf("\n");
    printf("factorial")
    map(factorial,array,0);
    printf("\n");
       return 0;
}
