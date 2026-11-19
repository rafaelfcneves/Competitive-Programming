//                            PALINDROME NUMBER - Difficulty: Easy

/* 
* PROBLEMA: verificar se o número é palíndromo ou não. Nesse exercício, na IDE do 
* Leetcode, por convenção, são utilizados true e false em vez de 1 e 0.
*/

/*
* SOLUÇÃO: criar uma variável palíndromo e a cada iteração adicionar o último algarismo
* de x. Antes de adicionar o último algarismo atual, multiplica-se a variável palindrome
* por 10 para deslocar os números para a direita. */

#include <stdio.h>
#include <stdbool.h>

// Minha resolução:

bool isPalindrome(int x) {
    int rest, n;
    long palindrome = 0;
    n = x;
    while (n > 0) {
        rest = n % 10;
        palindrome = rest + (palindrome * 10);
        n /= 10;
    }
    if (palindrome == x) {
        return true;
    }
    else {
        return false;
    }
}