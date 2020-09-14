#include <stdio.h>

int main() {
    int student[5]={0};
    int total=0;
    for(int i=0;i<5;i++){
        scanf("%d", &student[i]);
        if(student[i]<40){
            student[i]=40;
        }
        total+=student[i];
    }
    printf("%d", total/5);
}

