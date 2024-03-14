#include <stdio.h>
main(){
    int n,hap=0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        hap = hap +i;
    }
    printf("%d",hap);
}