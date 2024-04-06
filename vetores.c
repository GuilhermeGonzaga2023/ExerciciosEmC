#include <stdio.h>

#define ex13
#ifdef video1
int main()
{
    float nota[5];

    nota[0]=10;
    nota[1]=0;
    nota[2]=2;
    nota[3]=3.00;
    nota[4]=1.2;

    printf("%g",nota[3]);
}
#endif // video1
#ifdef video2
int main()
{
    //tem esse jeito de preencher o vetor com 5 valores
    int vetor[5]={5,2,3,4,5};

    //e esse jeito mais trabalhoso de preencher
    //int vetor[5];
    //vetor[0]=3;
    //vetor[1]=5;
    //vetor[2]=2;
    //vetor[3]=7;
    //vetor[4]=1;

    /*o for tem que ser usado quando o assunto é preencher o vetor, tem esse jeito que eu ja coloco os valores, mas se quisesse que o usuario colocasse os valores, teria que ter printf e scanf dentro do FOR*/
    for(int i=0;i<5;i++)
    {
        printf("%i\n",vetor[i]);
    }
}
#endif // video
#ifdef video3
int main()
{
    float notas[5],total=0,media=0;

    for(int i=0;i<5;i++)
    {
        printf("insira uma nota: ");
        scanf("%f",&notas[i]);
        total+=notas[i];
    }

    media= total/5;

    printf("\n\nMedia eh %g",media);
}
#endif // video
#ifdef ex1

    //funcao 1
    int A[12];
exiba121()
{
        int i;
        for(i=0;i<12;i++)
        {
            if(A[i]>121)
            {
                printf("%d\n",A[i]);
            }
        }
}
    //funcao 2
int positivo()
{
        int auxpos;
        do
        {
            scanf("%d",&auxpos);
            if(auxpos<=0)
            {
                printf("numero invalido\n");
                printf("digite apenas numeros positivos\n");
            }
        }while(auxpos<=0);
        return auxpos;
}
    //int main
int main()
{
   int i=0,a121=0;
   for(i;i<12;i++)
   {   printf("Digite apenas nummeros positivos\n");
       A[i]=positivo();
       if(A[i]>121)
       a121=a121+1;
   }
   if (a121!=0)
    {
        printf("numeros maiores que 121: \n");
        exiba121();
    }
    else
    {
        printf("Não foi digitado nenhum numero>121 no vetor\n");
    }
}
#endif
#ifdef ex2
int A[8];
int B[8];

int main()
{
    //declarando variavel
    int i=0;

    //preechendo os vetores
    //vetor A
    for(i=0;i<8;i++)
    {
        printf("digite um numero qualquer \n");
        scanf("%d",&A[i]);
    }
    //vetor B
    for(i=0;i<8;i++)
    {
        B[i]=A[i]*3;
    }

    //exibir os vetores
    for(i=0;i<8;i++)
    {
        printf("vetor A: %d\n",A[i]);
    }
    for(i=0;i<8;i++)
    {
        printf("vetor B: %d\n",B[i]);
    }

}
#endif
#ifdef ex3
int vetorNegativo[6];
int main()
{
    int i=0,total=0;
    for(i=0;i<6;i++)
    {
        do
        {
            printf("digite um numero negativo: ");
            scanf("%d",&vetorNegativo[i]);
            if(vetorNegativo[i]>=0)
            {
                printf("porfavor digite apenas numeros negativos!!\n");
            }
        }while (vetorNegativo[i]>=0);
        total+=vetorNegativo[i]*vetorNegativo[i];
    }
    while (total < 1000)
    {
        printf("A soma dos quadrados eh inferior a 1000. Digite novos numeros.\n");

        // Zera a soma antes de receber novos números
        total = 0;

        for (i = 0; i < 6; i++) {
            do {
                printf("Digite um numero negativo: ");
                scanf("%d", &vetorNegativo[i]);
                if (vetorNegativo[i] >= 0)
                {
                    printf("Por favor, digite apenas números negativos!!\n");
                }
            } while (vetorNegativo[i] >= 0);

            // Calcula a soma dos quadrados
            total += vetorNegativo[i] * vetorNegativo[i];
        }
    }
    printf("Soma dos quadrados dos numeros negativos: %d\n", total);
return 0;
}
#endif
#ifdef ex4
int A[10];
int main()
{
    int i=0,maior,qtd,posicoes[10];
    for(i;i<10;i++)
    {
        do
        {
            printf("digite um numero qq positivo \n");
            scanf("%d",&A[i]);

            if(A[i]<0)
            {
                printf("Por favor o numero tem que ser positivo!! \n");
            }
        }while(A[i]<0);
        //precisa desse if e else porque se tiver so o if o maior numero sempre vai ser o 1°, com o else o maior numero realmente é o maior
        if(i==0)
        {
            maior=A[i];
        }
        else{
            if(A[i]>maior){
                maior=A[i];}
        }
    }
        //verificar quantas vezes o maior numero foi digitado
        for(i=0;i<10;i++)
        {
            if(A[i]==maior)
            {
                qtd++;
                posicoes[qtd-1]=i;
            }
        }
    //mostar resultados
    printf("maior numero encontrado eh: %d\n",maior);
    printf("O maior numero apareceu %d vezes\n",qtd);

    for(i=0;i<qtd;i++)
    {
        printf("posicoes no vetor: %d\n",posicoes[i]);
    }
return 0;
}
#endif
#ifdef ex5
int A[10],B[10];
int main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        do
        {
            printf("Digite um numero qq positivo\n");
            scanf("%d",&A[i]);
            if(A[i]<0)
            {
                printf("Por favor o numero tem que ser positivo!!\n");
            }
        }while(A[i]<0);
    }
    //mostrar resultados
    for(i=0;i<10;i++)
    {
        printf("Valores do vetor A: %d\n",A[i]);
    }
    for(i=0;i<10;i++)
    {
        B[i]=A[i]-(A[i]*2);
        printf("\nValores do vetor B: %d",B[i]);
    }
}
#endif
#ifdef ex6
int A[5], B[5];
int fatorial(int A)
{
    int fatorial=1;
    for(int i=1;i<=A;i++)
    {
        fatorial=fatorial*i;
    }
    return fatorial;
}
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        do
        {
            printf("Digite um numero\n");
            scanf("%d",&A[i]);
            if(A[i]<0 || A[i]>15)
            {
                printf("o numero tem que ser maior que 0 e menor que 15!!\n");
            }
        }while(A[i]<0 || A[i]>15);
    }

    //mostrar os resultados
    for(i=0;i<5;i++)
    {
        printf("Valores do vetor A: %d\n",A[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        B[i]=fatorial(A[i]);
        printf("Valores do vetor B: %d\n",B[i]);
    }
return 0;
}
#endif
#ifdef ex7
int main()
{
    int A[20],B[20];
    int i,k,j;

    do
    {
         printf("Digite a quantidade de termos desejada\n");
         scanf("%d",&k);
         if(k<4 || k>20)
         {
             printf("A quantidade tem que ser maior que 4 e menor ou igual a 20!!!\n");
         }
    }while(k<4 || k>20);
    j=k-1;
    for(i=0;i<k;i++)
    {
         printf("Digite um numero positivo\n");
         scanf("%d",&A[i]);
         B[j]=A[i];
         j--;
    }

    //mostrar os resultados
    //vetor A
    for(i=0;i<k;i++)
    {
       printf("Vetor A: %d\n",A[i]);
    }
    //vetor B
    for(i=0;i<k;i++)
    {
       printf("\nVetor B: %d",B[i]);

    }
}
#endif
#ifdef ex8
int A[5], B[5], C[5],D[15];
int MaiorNum()
{
    int maior=D[0];
    for(int i=1;i<15;i++)
    {
        if(D[i]>maior)
        {
            maior=D[i];
        }
    }
    return maior;
}
void PreencherD()
{
    for(int i=0;i<5;i++)
    {
        D[i]=A[i];
        D[i+5]=B[i];
        D[i+10]=C[i];
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("digite o elemento %d do vetor A: ",i+1);
        scanf("%d",&A[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("digite o elemento %d do vetor B: ",i+1);
        scanf("%d",&B[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("digite o elemento %d do vetor C: ",i+1);
        scanf("%d",&C[i]);
    }
    PreencherD();
    int maiorNumero=MaiorNum();

    printf("\nConteudo do vetor A: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nConteudo do vetor B: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\nConteudo do vetor C: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\nConteudo do vetor D: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", D[i]);
    }
    printf("\nMaior numero no vetor D eh: %d\n",maiorNumero);
}
#endif
#ifdef ex9
float A[10],B[10];
void preencherB()
{
    for(int i=0;i<10;i++)
    {
        B[i]=A[i]/2;
    }
}
int qtd4(float vetor[], int tamanho, char vetorNome)
{
 printf("\nValores superiores a 4 em %c e suas posicoes:\n", vetorNome);
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > 4)
        {
            printf("%c[%d]: %.2f\n", vetorNome, i+1, vetor[i]);
        }
    }
}
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("digite o elemento %d do vetor A: ",i+1);
        scanf("%f",&A[i]);
    }
    preencherB();

    printf("\nConteudo do vetor A: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", A[i]);
    }
    printf("\nConteudo do vetor B: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", B[i]);
    }
    qtd4(A, 10, 'A');
    qtd4(B, 10, 'B');
}
#endif
#ifdef ex10
int A[10];
int numeroPositivo()
{
    int num;
    do
    {
        printf("digite um numero inteiro qq: ");
        scanf("%d",&num);
        if(num<=0)
        {
            printf("porfavor digite um numero positivo!!\n");
        }
    }while(num<=0);
    return num;
}
int main()
{
    int x;
    x=numeroPositivo();


    for (int i = 0; i <10; i++)
    {
        A[i] = x * (i + 1);
    }
    printf("\nTabuada de %d:\n", x);

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", x, i+1, A[i]);
    }

    return 0;}

#endif
#ifdef ex11
int main() {
    // Declare o vetor para armazenar as temperaturas
    float temperaturas[12];

    // Solicite ao usuário para inserir as temperaturas de cada mês
    printf("Digite a temperatura media de cada mes:\n");
    for (int i = 0; i < 12; i++) {
        printf("Mes %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // Inicialize as variáveis para a maior, menor temperatura e a soma total
    float maior = temperaturas[0];
    float menor = temperaturas[0];
    float soma = temperaturas[0];

    // Encontre a maior, menor temperatura e calcule a soma total
    for (int i = 1; i < 12; i++) {
        if (temperaturas[i] > maior)
        {
            maior = temperaturas[i];
        }
        if (temperaturas[i] < menor)
        {
            menor = temperaturas[i];
        }
        soma += temperaturas[i];
    }

    // Calcule a média das temperaturas
    float media = soma / 12;

    // Exiba os resultados
    printf("\nTemperaturas armazenadas:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("Mes %d: %.2f\n", i + 1, temperaturas[i]);
    }

    printf("\nMaior temperatura do ano: %.2f\n", maior);
    printf("Menor temperatura do ano: %.2f\n", menor);
    printf("Media das temperaturas: %.2f\n", media);

    return 0;
}

#endif
#ifdef ex12
#include <stdio.h>

int main() {
    // Declare o vetor para armazenar as notas
    float notas[10];

    // Solicite ao usuário para inserir as notas dos alunos
    printf("Digite as notas dos dez alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Inicialize as variáveis para a média, alunos aprovados e alunos reprovados
    float soma = 0;
    int aprovados = 0;
    int reprovados = 0;

    // Calcule a média e conte a quantidade de alunos aprovados e reprovados
    for (int i = 0; i < 10; i++)
    {
        soma += notas[i];

        if (notas[i] >= 7)
        {
            aprovados++;
        }
        else
        {
            reprovados++;
        }
    }

    // Calcule a média da classe
    float media = soma / 10;

    // Exiba os resultados
    printf("\nNotas dos alunos:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }

    printf("\nMedia da classe: %.2f\n", media);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);
    printf("Quantidade de alunos reprovados: %d\n", reprovados);

    return 0;
}

#endif
#ifdef ex13

#endif
#ifdef ex14

#endif
#ifdef ex15

#endif
#ifdef ex16

#endif
#ifdef ex17

#endif
#ifdef ex18

#endif
#ifdef ex19

#endif
