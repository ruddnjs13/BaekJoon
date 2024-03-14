#include <stdio.h>
main(){
    int n;
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        for (int sp=n-i;sp>=1;sp--)
            printf(" ");
        for (int star=1;star<=(2*i)-1;star++)
            printf("*");
        printf("\n");
    }
    
}