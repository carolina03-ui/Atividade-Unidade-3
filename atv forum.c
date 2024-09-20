#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    int escolha;
    
    printf("Escolha uma operação:\n");
    printf("1: Calcule o fatorial\n");
    printf("2: Calcule o N-ésimo termo da sequência do Fibonacci\n");
    printf("3: Calcule o máximo divisor comum (MDC)\n");

    printf("Escreva o número da operação (1/2/3): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        int n;
        printf("Escreva um número para calcular o fatorial: ");
        scanf("%d", &n);
        int resultado = fatorial(n);
        printf("O fatorial de %d é %d.\n", n, resultado);
    } else if (escolha == 2) {
        int n;
        printf("Escreva o N-ésimo termo da sequência de Fibonacci: ");
        scanf("%d", &n);
        int resultado = fibonacci(n);
        printf("O %d-ésimo termo da sequência de Fibonacci é %d.\n", n, resultado);
    } else if (escolha == 3) {
        int a, b;
        printf("Escreva o primeiro número: ");
        scanf("%d", &a);
        printf("Escreva o segundo número: ");
        scanf("%d", &b);
        int resultado = mdc(a, b);
        printf("O máximo divisor comum de %d e %d é %d.\n", a, b, resultado);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
