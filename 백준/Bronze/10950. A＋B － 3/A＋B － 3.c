#include <stdio.h>
main(){
    int roop,a,b;
    scanf("%d",&roop);
    for (int i=1;i<=roop;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}