#include <stdio.h>


int main(int argc, char const *argv[])
{   
    char c = 'a';
    char* b = &c;
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    return 0;
}