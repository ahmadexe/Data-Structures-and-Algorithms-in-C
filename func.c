#include <stdio.h>


void add(int* x){
    *x = 8;
}

int main(int argc, char const *argv[])
{
    int y = 1;
    int* z = &y;
    add(z);
    printf("%d",y);
    return 0;
}