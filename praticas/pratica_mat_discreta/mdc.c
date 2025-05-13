#include <stdio.h>

long int calculadoraMDC(long int a, long int b) {
    long int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

long int calculadoraMMC(long int a, long int b) {
    return (a / calculadoraMDC(a, b)) * b;  
}
void TabelaAdicao(int n) {
    printf("\nTabela de Adicao Z_%d\n+ |", n);
    for (int i = 0; i < n; i++) printf("%3d", i);
    printf("\n---");
    for (int i = 0; i < n; i++) printf("---");
    
    for (int i = 0; i < n; i++) {
        printf("\n%d |", i);
        for (int j = 0; j < n; j++) printf("%3d", (i + j) % n);
    }
    printf("\n");
}
void TabelaMultiplicacao(int n) {
    printf("\nTabela de Multiplicacao Z_%d\n* |", n);
    for (int i = 0; i < n; i++) printf("%3d", i);
    printf("\n---");
    for (int i = 0; i < n; i++) printf("---");
    
    for (int i = 0; i < n; i++) {
        printf("\n%d |", i);
        for (int j = 0; j < n; j++) printf("%3d", (i * j) % n);
    }
    printf("\n");
}

int main() {
    long int num1, num2;
    int n;
    
    printf("CALCULADORA MDC/MMC\n");
    printf("===================\n");
    
    printf("\nDigite dois numeros positivos:\n");
    printf("Numero 1: ");
    scanf("%ld", &num1);
    printf("Numero 2: ");
    scanf("%ld", &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("\nERRO: Digite apenas numeros positivos!\n");
        return 1;
    }
    
    printf("\nMDC(%ld, %ld) = %ld\n", num1, num2, calculadoraMDC(num1, num2));
    printf("MMC(%ld, %ld) = %ld\n", num1, num2, calculadoraMMC(num1, num2));
    
    printf("\nDigite n para as tabelas Z_n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("\nERRO: n deve ser positivo!\n");
        return 1;
    }
    
    TabelaAdicao(n);
    TabelaMultiplicacao(n);
    
    printf("\nObrigado!\n");
    return 0;
}