#include <stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=9;i++){
        // 将下面的for循环注释掉，就输出左下三角形


        for(j=1;j<=i;j++)
            printf("%d*%d=%2d  ",i,j,i*j);

        printf("\n");
    }
    return 0;
}
