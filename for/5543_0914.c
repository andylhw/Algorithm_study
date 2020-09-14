#include <stdio.h>

int main() {
    int burger[3]={0};
    int drink[2]={0};
    int minpb, minpc;
    scanf("%d %d %d %d %d", &burger[0],&burger[1],&burger[2],&drink[0],&drink[1]);
    minpb=burger[0];
    minpc=drink[0];
    for(int i=0;i<3;i++){
        if(minpb>burger[i])
            minpb=burger[i];
    }
    for(int i=0;i<2;i++){
        if(minpc>drink[i])
            minpc=drink[i];
    }
    printf("%d", minpb+minpc-50);
    return 0;
}

