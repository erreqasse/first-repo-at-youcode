#include <stdio.h>

int main() {
    int i,j;
    int f[10][10];
    for(i =0;i < 10;i++)
    {
        for(j =0;j < 10;j++)
        {
            printf("entre vos number");
            scanf("%d",&f[i][j]);
        }
    }
    for(i =0;i <10 ;i++)
    {
        for(j =0;j < 10;j++)
        {
            printf("%d",f[i][j]);
        }
    }
    return 0;
}
