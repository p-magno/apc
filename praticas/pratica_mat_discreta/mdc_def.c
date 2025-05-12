#include <stdio.h>

long calcularMDC(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long calcularMMC(long a, long b) {
    return (a / calcularMDC(a, b)) * b;
}
void mostrarTabelaAdicao(int n) {
    printf("\nTabela de Adição Z_%d\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", (i + j) % n);
        }
        printf("\n");
    }
}

int main() {
    long num1, num2;
    int n;
    
    printf("Digite dois numeros: ");
    scanf("%ld %ld", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, coloque apenas numeros positivos!\n");
        return 1;
    }
    
    printf("\nMDC: %ld\n", calcularMDC(num1, num2));
    printf("MMC: %ld\n", calcularMMC(num1, num2));
    
    printf("\nDigite n para tabela: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 20) { 
        printf("Use 0 < n ≤ 20\n");
        return 1;
    }
    
    mostrarTabelaAdicao(n);
    
    return 0;
}