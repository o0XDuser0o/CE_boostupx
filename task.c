#include<stdio.h>
int x,y;
int main(){
    scanf("%c%c",&x,&y);
    if(x>=65&&y>=65){
        if(x>y){
            printf("%d",x-y);
        }
        else{
            printf("%d",y-x);
        }
    }
    else{
        printf("%d",x+y);
    }
    return 0;
}