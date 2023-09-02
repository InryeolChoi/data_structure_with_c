#include "calculator.h"

int main()
{
    char    *init;
    char    *postfix;
    double  result;

    printf("expression : ");
    scanf("%s", init);
    postfix = get_post_fix(init);
    printf("postfix notation = %s", postfix);
    printf("result = %lf\n", result);   
}