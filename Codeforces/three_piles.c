/* Three Piles - 2290A */

/* PROBLEMA:
* Existem três pilhas de pedras. A primeira contém a pedras, a segunda contém b pedras
* e a terceira contém c pedras. 1 <= a <= b <= c <= 10. É possível retirar exatamente
* uma pedra da maior pilha e colocar na primeira de modo que todas as pilhas tenham a
* mesma quantidade de pedras?
*/

/* SOLUÇÃO: 
* É possível desde que a b e c sejam números consecutivos de modo que é possível retirar
* uma pedra de c e colocar em a e então a = b = c
*/

#include <stdio.h>

int main(void) {
    unsigned int t, a, b, c;

    scanf(" %u", &t);
    while (t--) {
        scanf(" %u %u %u", &a, &b, &c);
        if (b == a + 1 && c == b + 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}