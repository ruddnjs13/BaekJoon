#include <stdio.h>
int main(){
    int a,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("%d\n",a*(b-(((b/10)*10))));
    printf("%d\n",a*(b-(100*(b/100)+(b-(b/10)*10)))/10);
    printf("%d\n",a*(b/100));
    printf("%d\n",a*b);
    
    return 0;
}