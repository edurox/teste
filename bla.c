/* EU NAO USO PUTS*/


#include <stdio.h>


void primo(int a, int b) {
    int i;

    for (i = 0; i < 10; i++) {

        a = a+i;

    }
    printf ("NUMERO DO SWAG DO KEVIN %d", a *10*b);

}

void soma (int a, int b) {

    int r = a + b;
    printf ("SOma = %d\n",r);

}

void sub(int a, int b) {

    int r = a - b;

    printf ("O resultado da sub é: = %d\n", r);
}

void div (int a, int b) {

    float r = (float)a /b;

    printf ("DIV = %f\n", r);

}

void mul (int a, int b) {

    int r = a*b;

    printf ("MUL = %d\n", r);

}

int main() {

    int op, a, b;

    printf ("Digite operaçao (0=soma, 1=sub, 2=mult, 3=duv, 4=primos)\n");

    scanf ("%d", &op);

    printf ("operador 1\n");

    scanf ("%d", &a);

    printf ("operador 2\n");

    scanf ("%d", &b);

    printf ("OP = %d, a = %d, b = %d\n", op, a ,b);

    switch(op) {

        case 0:
            soma (a, b);
            break;

        case 1:
            sub(a, b);
            break;

        case 2:

            mul(a ,b);
            break;

        case 3:

            div(a, b);
            break;

        case 4:

            primo(a, b);
            break;

    }

    return 0;

}
