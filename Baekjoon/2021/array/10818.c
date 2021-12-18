#include <stdio.h>

int main(){
    int number = 0;
    int num[100000]={0};
    int numMax,numMin;
    scanf("%d", &number);
    for(int i=0;i<number;i++){
        scanf("%d", &num[i]);
    }
    numMax=num[0];
    numMin=num[0];
    for(int i=0;i<number;i++){
        if(num[i]<numMin)
            numMin=num[i];
        if(num[i]>numMax)
            numMax=num[i];
    }
    printf("%d %d", numMin, numMax);
}