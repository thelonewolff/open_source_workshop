#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "eval.h"

int main (int argc, char **argv)
{
    char expr [MAXCOLS];
    int position = 0;

    printf ("Please key in the postfix expression:");
   
    while ((expr [position++] = getchar ()) != '\n')
        ;

    expr [--position] = '\0';
    printf ("The original expression is %s\n", expr);

    printf ("The result is %f\n", eval (expr));
    return 0;
}
