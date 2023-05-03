#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    str = calloc(10, sizeof(char));
    printf("calloc 할당 결과 : %d\n", str[1]);

    str = realloc(str, sizeof(char) * 20);
    str[10] = 'a';
    printf("realloc 재할당 결과 : %c\n", str[10]);
}