#include <stdio.h>

#define ex4

#ifdef ex2
int main()
{
    int N;
    while (1)
    {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &N);

        if (N == 0)
        {
            printf("Programa encerrado.\n");
            break;
        }

        if (N % 2 == 0)
        {
            printf("%d eh um numero par.\n", N);
        }
        else
        {
            printf("%d eh um numero impar.\n", N);
        }
    }

    return 0;
}
#endif // ex2

#ifdef ex4
int main()
{
    int K,N,maior;

    printf("Informe a quantidade de numeros desejada\n");
    scanf("%i",&K);

    if (K <= 0)
    {
        printf("digite um numero positivo para K.\n");
        return 1;
    }
    printf("Digite o primeiro numero: ");
    scanf("%d", &maior);

    int i = 2;
    do
    {
        printf("Digite o proximo numero: ", i);
        scanf("%d", &N);

        if (N > maior)
        {
            maior = N;
        }

        i++;
    }
    while (i <= K);

    printf("O maior numero digitado eh: %d\n", maior);

    return 0;
}
#endif // ex1
#include <stdio.h>

#define NUM_ALUNOS 5

// Função para calcular a média da classe
float calcularMedia(float notas[]) {
    float soma = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        soma += notas[i];
    }
    return soma / NUM_ALUNOS;
}

// Função para contar a quantidade de alunos aprovados (nota >= 7)
int contarAprovados(float notas[]) {
    int aprovados = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (notas[i] >= 7) {
            aprovados++;
        }
    }
    return aprovados;
}

// Função para contar a quantidade de alunos reprovados (nota < 7)
int contarReprovados(float notas[]) {
    int reprovados = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (notas[i] < 7) {
            reprovados++;
        }
    }
    return reprovados;
}

// Função para encontrar a maior nota
float encontrarMaiorNota(float notas[]) {
    float maiorNota = notas[0];
    for (int i = 1; i < NUM_ALUNOS; ++i) {
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }
    return maiorNota;
}

// Função para encontrar a menor nota
float encontrarMenorNota(float notas[]) {
    float menorNota = notas[0];
    for (int i = 1; i < NUM_ALUNOS; ++i) {
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }
    return menorNota;
}

int main() {
    float notas[NUM_ALUNOS];

    // Leitura das notas com verificações
    int i;
    printf("Digite as notas dos alunos (0 a 10):\n");
    for (i = 0; i < NUM_ALUNOS; ++i) {
        do {
            printf("Nota do aluno %d: ", i + 1);
            scanf("%f", &notas[i]);

            // Verifica se a nota está no intervalo correto
            if (notas[i] < 0 || notas[i] > 10) {
                printf("Por favor, insira uma nota válida entre 0 e 10.\n");
            }
        } while (notas[i] < 0 || notas[i] > 10);  // Repete o loop se a nota não estiver no intervalo correto
    }

    // Cálculos
    float media = calcularMedia(notas);
    int aprovados = contarAprovados(notas);
    int reprovados = contarReprovados(notas);
    float maiorNota = encontrarMaiorNota(notas);
    float menorNota = encontrarMenorNota(notas);

    // Exibição dos resultados
    printf("\nResultados:\n");
    printf("a) Média da classe: %.2f\n", media);
    printf("b) Quantidade de alunos aprovados: %d\n", aprovados);
    printf("c) Quantidade de alunos reprovados: %d\n", reprovados);
    printf("d) Maior nota: %.2f\n", maiorNota);
    printf("e) Menor nota: %.2f\n", menorNota);

    return 0;
}

