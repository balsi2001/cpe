#include <stdio.h>
#include <string.h>


int main() {
   
    char *str;
    int t;
    scanf("%d",&t);
    

    for (int i = 1; i <= t; ++i) {
        int tt;
        scanf("%d",&tt);
        int matrix[tt][tt];
        for (int j = 0; j < tt; ++j) {
            for (int k = 0; k < tt; ++k) {
                matrix[j][k] = getchar() - '0';
            }
            scanf("\n");
        }
        int temp;
        int ttt;
        scanf("%d",&ttt);
        while(ttt--) {
            scanf("%s",str);
            if (*str=='r') {
                int a,b;
                scanf("%d%d",&a,&b);
                --a;
                --b;
                for (int k = 0; k < tt; ++k) {
                    temp = matrix[a][k];
                    matrix[a][k] = matrix[b][k];
                    matrix[b][k] = temp;
                }
            } else if (*str=='c') {
                int a,b;
                scanf("%d%d",&a,&b);
                --a;
                --b;
                for (int k = 0; k < tt; ++k) {
                    temp = matrix[k][a];
                    matrix[k][a] = matrix[k][b];
                    matrix[k][b] = temp;
                }

            } else if (*str=='i') {
                for (int k = 0; k < tt; ++k) {
                    for (int l = 0; l < tt; ++l) {
                        ++matrix[k][l];
                        matrix[k][l] %= 10;
                    }
                }
            } else if (*str=='d') {
                for (int k = 0; k < tt; ++k) {
                    for (int l = 0; l < tt; ++l) {
                        matrix[k][l]=--matrix[k][l]>=0?matrix[k][l]:9;
                    }
                }
            } else if (*str=='t') {
                for (int k = 0; k < tt; ++k) {
                    for (int l = 0; l < k; ++l) {
                        temp = matrix[k][l];
                        matrix[k][l] = matrix[l][k];
                        matrix[l][k] = temp;
                    }
                }
            }
        }
        printf("Case #%d\n",i);
        for (int k = 0; k < tt; ++k) {
            for (int l = 0; l < tt; ++l) {
                printf("%d",matrix[k][l]);
            }
            puts("");
        }
        puts("");
    }
}