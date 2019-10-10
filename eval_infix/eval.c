/*			eval.c				*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "eval.h"

int empty (STACK *ps)
{
    return (ps->top == -1);
}

double pop (STACK *ps)
{
    if (empty (ps))
    {
        printf ("Stack underflow\n");
        exit (1);
    }
    return (ps->items[ps->top--]);
}

void push (STACK *ps, double x)
{
    if (ps->top == MAXCOLS - 1)
    {
        printf ("Stack overflow\n");
        exit (1);
    }
    else
        ps->items[++(ps->top)] = x;
    return;
}

double eval (char expr[])
{
    int c, position;
    double opnd1, opnd2, value;
    STACK opndstk;

    opndstk.top = -1;

    for (position = 0; (c = expr[position]) != '\0'; position ++)
    {
        if (isdigit (c))	// Operand
            push (&opndstk, (double) (c - '0'));
        else		// Operator
        {
            opnd2 = pop (&opndstk);
            opnd1 = pop (&opndstk);
            value = oper (c, opnd1, opnd2);
            push (&opndstk, value);
        }
    }
    return (pop (&opndstk));
}

double oper (int symb, double op1, double op2)
{
    switch (symb)
    {
        case '+': return (op1 + op2);

        case '-': return (op1 - op2);

        case '*': return (op1 * op2);

        case '/': return (op1 / op2);

        case '^': return (pow (op1, op2));

        default: printf ("Illegal operation\n");
    }
}
