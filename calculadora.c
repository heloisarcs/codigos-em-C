#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;
    
    printf("=== CALCULADORA SIMPLES ===\n");
    printf("Digite a operação (ex: 5 + 3): ");
    scanf("%f %c %f", &num1, &operador, &num2);
    
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido!\n");
            return 1;
    }
    
    printf("Resultado: %.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);
    return 0;
}
