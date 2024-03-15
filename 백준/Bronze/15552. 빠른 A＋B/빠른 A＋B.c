#include <stdio.h>
main(){
    int a,b,n;
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}