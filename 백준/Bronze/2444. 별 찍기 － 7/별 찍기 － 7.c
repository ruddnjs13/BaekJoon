#include <stdio.h>
main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int sp =i;sp<n;sp++){
            printf(" ");
        }
        for (int star=1;star<=2*i-1;star++){
            printf("*");
        }
        printf("\n");
    }
    for (int j =n-1;j>=1;j--){
        for (int sp1=j;sp1<=n-1;sp1++){
            printf(" ");
        }
        for (int star1=1;star1<=2*j-1;star1++){
            printf("*");
        }
        printf("\n");
    }
}