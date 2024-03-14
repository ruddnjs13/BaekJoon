#include <stdio.h>
main(){
    int dc1,dc2,dc3;
    scanf("%d %d %d",&dc1,&dc2,&dc3);
    
    if (dc1==dc2&&dc2==dc3){
        printf("%d",10000+(dc1*1000));
    }
    else if (dc1==dc2&&dc1!=dc3){
        printf("%d",1000+100*dc1);
    }
    else if (dc1==dc3&&dc1!=dc2){
        printf("%d",1000+100*dc1);
    }
    else if (dc2==dc3&&dc2!=dc1){
        printf("%d",1000+100*dc2);
    }
    else if (dc1!=dc2&&dc1!=dc3&&dc2!=dc3){
        if (dc1>dc2&&dc1>dc3){
            printf("%d",dc1*100);
        }
        else if(dc2>dc1&&dc2>dc3){
            printf("%d",dc2*100);
        }
        else if (dc3>dc1&&dc3>dc2){
            printf("%d",dc3*100);
        }
    }
}