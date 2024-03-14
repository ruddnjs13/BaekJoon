#include <stdio.h>
main(){
    int h,m;
    scanf("%d %d",&h,&m);
    
    if (m>=45){
        printf("%d %d",h,m-45);
    }
    else{
        if (m<45 && !h==0){
            printf("%d %d",h-1,60-(45-m));
        }
        else{
            if (m<45 && h==0){
                printf("%d %d",23,60-(45-m));
            }
        }
    }
    
}