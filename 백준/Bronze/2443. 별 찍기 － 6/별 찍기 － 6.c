#include <stdio.h>
main(){
    int n;
    scanf("%d",&n);
    for (int i =n;i>=1;i--){
        for(int sp=i;sp<n;sp++){
            printf(" ");
        }
        for(int star=1;star<=2*i-1;star++){
            printf("*");
        }
        printf("\n");
    }
}