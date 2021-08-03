#include <stdio.h>

int main(){
    int orderNum;
    int order;
    int stack[100000];
    int stackCount=0;
    int result=0;
    scanf("%d", &orderNum);
    for(int i=0;i<orderNum;i++){
        scanf("%d", &order);
        if(order==0){
        	if(stackCount>0){
      			stack[stackCount-1]=0;
      			stackCount--;
      		}
        }else{
        	stack[stackCount] = order;
        	stackCount++;
        }
    }
    for(int j=0;j<stackCount;j++){
    	result += stack[j];
    }
    printf("%d\n", result);
    return 0;
}
