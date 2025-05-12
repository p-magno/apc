#include <stdio.h>

int main() {
    int a, b, n, i, j, resto;
    
    printf("CALCULADORA SIMPLES\n");
    printf("==================\n\n");
    
    printf("Digite dois numeros para calcular MDC e MMC:\n");
    scanf("%d %d", &a, &b);
    
    int x = a, y = b;
    while (y != 0) {
        resto = x % y;
        x = y;
        y = resto;
    }
    printf("\nMDC(%d, %d) = %d\n", a, b, x);
    
    printf("MMC(%d, %d) = %d\n", a, b, (a * b) / x);
    
    // 3. TABELAS MODULARES
    printf("\nDigite um numero para as tabelas modulares: ");
    scanf("%d", &n);
    
    printf("\nTabela de Adicao (mod %d):\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", (i + j) % n);
        }
        printf("\n");
    }
    
    printf("\nTabela de Multiplicacao (mod %d):\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", (i * j) % n);
        }
        printf("\n");
    }
    
    return 0;
}