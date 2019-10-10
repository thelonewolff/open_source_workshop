/*				eval.h				*/

#define MAXCOLS	50

typedef struct stack
{
    int top;
    double items [MAXCOLS];
} STACK;

double eval (char []);
double pop (STACK *);
void push (STACK *, double);
int empty (STACK *);
double oper (int, double, double);
