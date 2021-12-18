#include <stdio.h>

int main() {
    int array[3]={0,0,0};
    scanf("%d %d %d", &array[1], &array[2], &array[0]);
    int temp;
    for (int j=0;j<2;j++) {
        for (int i = 0; i < 2; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    printf("%d", array[1]);
}

