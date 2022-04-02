#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int x1,y1,x2,y2;
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        printf("%lld\n",(x2+y2+(x2+y2-1)*(x2+y2)/2+x2)-(x1+y1+(x1+y1-1)*(x1+y1)/2+x1));
    }   
}   