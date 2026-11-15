/* Composite Permutation - CODE ??? */

/* PROBLEMA: 
* entradas: um inteiro n.
* relação: construir uma permutação p de tamanho n tal que i*p[i] é um número composto
* para todo 1 <= i <= n ou determinar que tal permutação não existe
* saídas: os n inteiros da permutação p ou -1 se não existir p
*/

/* SOLUÇÃO: 
* Se a > 1 e b > 1 então a*b é um número composto.
* O menor primeiro número construir a permutação é 4. Logo, se n < 4 então não é possível
* formar uma permutação.
* 
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    unsigned int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n < 4) {
            cout << -1 << "\n";
            continue;
        }
        if (n >= 4) {
            for (unsigned int i = 4; i > 0; i--)
                cout << i << " ";
            if (n > 4) {
                for (unsigned int i = 5; i <= n; i++) {
                    cout << i << " ";
                }
                cout << "\n";
            }
            else {
                cout << "\n";
            }
        }
    }

    return 0;
}