#include <stdio.h>

int main() {
    int count=0;
    int num;
    int comparison;
    scanf("%d", &num);
    comparison=num;
    while(1){
        num=(num%10)*10+(num%10+num/10)%10;
        count++;
        if(num==comparison)
            break;
    }
    printf("%d", count);
}

