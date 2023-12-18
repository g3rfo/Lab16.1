#include <iostream>
#include <stdio.h>

int main()
{
    int a[4][6];

    int i, j, counter = 0;
    
    bool isExist = false;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("Enter [%d][%d]: ", i + 1, j + 1);
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < 6; j++) {
        for (i = 0; i < 4; i++) {
            if (a[i][j] == 0) {
                counter++;
            }
        }  
        if (counter >= 2) {
            printf("\nThe column %d has at least 2 elements, that equal 0", j + 1);
            isExist = true;
        }
        counter = 0;
    }

    if (isExist == false) {
        printf("\nMatrix a[4*6] has no columns with at least 2 elements, that equal 0");
    }
}