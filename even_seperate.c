#include<stdio.h>
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i=n+1;i<q;i++){
        if(i%2==0)
            printf("%d ",i);
    }
}