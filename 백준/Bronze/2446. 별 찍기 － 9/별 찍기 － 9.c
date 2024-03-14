#include <stdio.h>
main(){
    int n;
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        for (int sp1=i;sp1>1;sp1--){
            printf(" ");
        }
        for (int star1=1;star1<=(n-i)*2+1;star1++){
            printf("*");
        }
        printf("\n");
    }
    for (int j =1;j<n;j++){
        for (int sp2=j;sp2<=n-2;sp2++){
            printf(" ");
        }
        for (int star2=1;star2<=j*2+1;star2++){
            printf("*");
        }
        printf("\n");
    }
}