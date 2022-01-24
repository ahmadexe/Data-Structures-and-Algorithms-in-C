#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int* arrCheck = (int*)malloc(5 * sizeof(int));
    // arrCheck[0] = 1;
    // arrCheck[1] = 2;
    // arrCheck[2] = 3;
    // arrCheck[3] = 4;
    // arrCheck[4] = 5;
    // arrCheck[5] = 7;
    //arrCheck[6] = 1;
    // arrCheck[7] = 2;
    // arrCheck[8] = 3;
    // arrCheck[9] = 4;
    // arrCheck[10] = 5;
    // arrCheck[11] = 7;
    for (int i = 0; i < 12; i++){
        printf("%d   ",arrCheck[i]);
    }
    return 0;
}