#include <stdio.h>
main(){
    int x,n,a,b,tot=0;
    
    scanf("%d",&x);
    scanf("%d",&n);
    
    for (int i =1;i<=n;i++){
        scanf("%d %d",&a,&b);
        tot += (a*b);
    }
    if (x==tot){
        printf("Yes");
    }
    else{
        printf("No");
    }
}