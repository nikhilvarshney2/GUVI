#include<stdio.h>i
int check(int i){
    int flag=0;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i=n+1;i<q;i++){
        if(check(i)==0)
            printf("%d ",i);
    }
}