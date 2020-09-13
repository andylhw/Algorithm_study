#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num==1)
        printf("*");
    else {
        for(int j=0;j<num*2;j++){
            if(num%2==0&&j%2==0){
                for(int i=0;i<num/2;i++){
                    printf("* ");
                }
            }
            else if(num%2==0&&j%2!=0){
                for(int i=0;i<num/2;i++){
                    printf(" *");
                }
            }
            else if(num%2!=0&&j%2==0){
                printf("*");
                for(int i=0;i<num/2;i++)
                    printf(" *");
            }
            else{
                printf(" ");
                for(int i=0;i<num/2;i++)
                    printf("* ");
            }
            printf("\n");
        }
    }
}

