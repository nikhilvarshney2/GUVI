#include <stdio.h>
int check(int number)
{
    int originalNumber, remainder, result = 0;

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
       return 1;
    else
        return 0;
}
int main(){
    int p,q;
    scanf("%d %d",&p,&q);
    
    for(int i=p+1;i<q;i++){
        if(check(i)==1){
            printf("%d ",i);
        }
    }
}