#include <stdio.h>
main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    
    if(b+c>=60){
        if (a+((b+c)/60)>=24){
            printf("%d %d",a+((b+c)/60)-24,(b+c)%60);
        }
        else if (a+((b+c)/60)<24){
            printf("%d %d",a+((b+c)/60),(b+c)%60);
        }
        
    }
    else if (b+c<60){
        printf("%d %d",a,b+c);
    }
}