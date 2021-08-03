#include <stdio.h>
#include <string.h>

int main(){
    int orderNum;
    char order[100];
    int num;
    int stack[10000];
    int stackCount=0;
    scanf("%d", &orderNum);
    for(int i=0;i<orderNum;i++){
        scanf("%s", order);
        if(strcmp(order, "push")==0){
            scanf("%d", &num);
            stack[stackCount]=num;
            stackCount++;
        }
        else if(strcmp(order, "pop")==0){
            if(stackCount>0){
            	printf("%d\n", stack[stackCount-1]);
	        stack[stackCount-1]=0;
            	stackCount--;
            }else{
            	printf("-1\n");
            }
        }
        else if(strcmp(order, "size")==0){
            printf("%d\n", stackCount);
        }
        else if(strcmp(order, "empty")==0){
            if(stackCount==0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else if(strcmp(order, "top")==0){
            if(stackCount>0){
            	printf("%d\n", stack[stackCount-1]);
            }
            else{
            	printf("-1\n");
            }
        }
    }
}
