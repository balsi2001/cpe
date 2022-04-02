#include<stdio.h>
int main(){
    int t;
    while(scanf("%d",&t)&&t){
        int rp,pa;
        rp=pa=0;
        for(int i=1;i<=1000000&&pa<t;i++){
            pa+=i;
            rp=i;
        }
        printf("%d %d\n",pa-t,rp);
    }
}