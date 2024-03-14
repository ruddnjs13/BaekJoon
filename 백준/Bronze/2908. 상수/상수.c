#include <stdio.h>
main(){
    int a,b,il,sib,bek;
    scanf("%d %d",&a,&b);
    il= (a/100);
    sib=(a-(il*100))/10;
    bek= ((a-(il*100))-(sib*10));
    a= (bek*100+sib*10+il);
    
    il= (b/100);
    sib=(b-(il*100))/10;
    bek= ((b-(il*100))-(sib*10));
    b= (bek*100+sib*10+il);
    if (a>b)
        printf("%d",a);
    
    else
        printf("%d",b);
    
}