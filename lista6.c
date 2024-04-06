#include <stdio.h>
#include <math.h>

#define ex13

#ifdef ex1
float esfera(float raio)
{
    float volume=4*3.14*(raio*raio*raio)/3;
    return volume;
}
int main()
{
    float raio,volume;
    do
    {
        printf("digite o raio da esfera em cm: ");
        scanf("%f",&raio);
        if(raio<0)
        {
            printf("porfavor digite um numero positivo!!!\n");
        }
    }while(raio<0);
    volume=esfera(raio);
    printf("O volume da esfera eh: %.2f cm",volume);
}
#endif // ex1
#ifdef ex2
int verifica(int num)
{
    if(num>0)
    {
        printf("o numero eh positivo !!");
    }
    else if(num<0)
    {
        printf("o numero eh negativo !!");
    }
    else
    {
        printf("o numero eh igual a zero !!");
    }
}
int main()
{
    int x,resultado;
    printf("digite um numero inteiro qualquer: ");
    scanf("%d",&x);

    resultado=verifica(x);
}
#endif // ex2
#ifdef ex3
int divisao(int num1, int num2)
{
    int resultado;
    resultado=num1/num2;
    if(num1%num2==0)
    {
        printf("A divisao do num1 pelo num2 eh: %d\n",resultado);
    }
    else
    {
        printf("os numeros nao sao divisiveis!\n");
    }
}
int main()
{
    int x,y;
    do
    {
        printf("Digite o primeiro numero: ");
        scanf("%d",&x);
        printf("Digite o segundo numero: ");
        scanf("%d",&y);
        if(x<0 || y<0)
        {
            printf("porfavor digite numeros positivos!!\n");
        }
    }while(x<0 || y<0);

    divisao(x,y);
}
#endif // ex3
#ifdef ex4
float ReajSalNovo(float salario)
{
    if(salario<800)
    {
        return salario=(salario*0.15)+salario;
    }
    else if(salario>=800 && salario<=1000)
    {
        return salario=(salario*0.10)+salario;
    }
    else
    {
        return salario=(salario*0.05)+salario;
    }
}
int main()
{
    float oldSalario,newSalario;

    do
    {
        printf("Informe seu atual salario: ");
        scanf("%f",&oldSalario);
        if(oldSalario<=0)
        {
            printf("porfavor digite um numero positivo!!\n");
        }
    }while(oldSalario<0);

        newSalario=ReajSalNovo(oldSalario);
        printf("Valor do salario antigo: %.2f\n",oldSalario);
        printf("Valor do salario antigo: %.2f\n",newSalario);

}
#endif // ex4
#ifdef ex5
int parImpar(int num)
{
    if(num%2==0)
    {
        printf("O numero %d eh par!!\n",num);
    }
    else
    {
        printf("O numero %d eh impar!!\n",num);
    }
}
int main()
{
    int x;
    do
    {
        printf("digite um numero inteiro qq: ");
        scanf("%d",&x);
        if(x<=0)
        {
            printf("porfavor o numero tem que ser maior que zero!!\n");
        }
    }while(x<=0);

    parImpar(x);
}
#endif // ex5
#ifdef ex6
float ReajSalNovo(float salario)
{
    if(salario<800)
    {
        return salario=(salario*0.15)+salario;
    }
    else if(salario>=800 && salario<=1000)
    {
        return salario=(salario*0.10)+salario;
    }
    else
    {
        return salario=(salario*0.05)+salario;
    }
}
int main()
{
    float oldSalario,newSalario;
    int k;

    do
    {
        printf("Informe a quantidade de funcionarios que vao ter o salario reajustado: ");
        scanf("%d",&k);
        if(k<=0 || k>10)
        {
            printf("a quantidade de funcionarios tem que ser maior que zero e menor que 10!!\n");
        }
    }while(k<=0 || k>10);

    for(int i=0;i<k;i++)
    {
        do
        {
            printf("Informe o salario do funcionario: ");
            scanf("%f",&oldSalario);
            if(oldSalario<=0)
            {
                printf("porfavor digite um numero positivo!!\n");
            }
        }while(oldSalario<0);
        newSalario=ReajSalNovo(oldSalario);
        printf("Valor do salario antigo: %.2f\n",oldSalario);
        printf("Valor do salario antigo: %.2f\n",newSalario);
    }
}
#endif // ex6
#ifdef ex7
#include <stdio.h>

//funcao 1
// Função para calcular o n-ésimo número Fibonacci usando programação dinâmica
//nesse caso tem que armazebar em um array para fazer a sequencia direito
int fibonacci(int num, int array[])
{
    //os 2 primeiros termos sao 0 e 1 sempre por isso tem isso
    if (num <= 1)
    {
        return num;
    }
    // Calcular o valor e armazena no array
    array[num] = fibonacci(num - 1, array) + fibonacci(num - 2, array);
    return array[num];
}

//funcao 2
// Função para calcular a média Fibonacci até o n-ésimo termo e imprimir a sequência
double mediaFibonacci(int num)
{
    //declara as variaveis
    float soma = 0;
    int array[num];//array com o tamanho num, que seria o tamanho que foi informado no int main()

    // Inicializar a tabela array com -1 (indicando que nenhum valor foi calculado ainda)
    for (int i = 0; i < num; ++i)
    {
        array[i] = -1;
    }
    printf("Sequencia de Fibonacci:\n");
    for (int i = 0; i < num; ++i)
    {
        int termo = fibonacci(i, array);
        soma += termo;
        printf("%d", termo);
        if (i < num - 1)
        {
            printf("  ");
        }
    }
    return soma / num;
}

int main()
{
    int x;
do
{
    printf("Digite a quantidade de termos para a sequencia: ");
    scanf("%d", &x);
    if (x <= 0)
    {
        printf("Por favor, insira um valor positivo e maior que 0.\n");
    }
}while(x<=0);
double resultado = mediaFibonacci(x);
printf("\nA media Fibonacci ate o %d-esimo termo eh: %.2f\n", x, resultado);
}
#endif // ex7
#ifdef ex8
int delta(int a,int b,int c)
{
    int delta=(b*b)-4*a*c;
    if(delta>0)
    {
        return printf("O valor do delta eh %d e possui duas raizes reais e distintas!!\n",delta);
    }
    if(delta==0)
    {
        return printf("O valor do delta eh %d e possui duas raizes iguais!!\n",delta);
    }
    else
    {
        return printf("O valor do delta eh %d e nao possui  raizes reais!!\n",delta);
    }
}
int main()
{
    int a,b,c,resultado;
    do
    {
        printf("digite o primeiro numero da equacao: ");
        scanf("%d",&a);
        if(a==0)
        {
            printf("para ter uma equacao do segundo grau o primeiro numero tem que ser diferente de zero!!\n");
        }
    }while(a==0);

    printf("digite o segundo numero da equacao: ");
    scanf("%d",&b);

    printf("digite o terceiro numero da equacao: ");
    scanf("%d",&c);

    delta(a,b,c);
}
#endif // ex8
#ifdef ex9
int fatorial(int num)
{
    int fatorial=1;
    for(int i=1;i<=num;i++)
    {
        fatorial*=i;
    }
    return fatorial;
}
int main()
{
    int x,resultado;
    do
    {
        printf("digite um numero inteiro qq: ");
        scanf("%d",&x);
        if(x<0)
        {
            printf("porfavor o numero tem que ser maior ou igual a zero!\n");
        }
    }while(x<0);

    resultado=fatorial(x);
    printf("o fatorial de %d eh %d",x,resultado);
}
#endif // ex9
#ifdef ex10
float tipoTriangulo(float a,float b,float c)
{
    if(a==b && b==c && c==a)
    {
        return printf("O triangulo eh equilatero, todos os lados sao iguais!!\n");
    }
    else if(a==b || b==c || c==a)
    {
        return printf("O triangulo eh isosceles, apenas dois lados iguais!!\n");
    }
    else
    {
        return printf("O triangulo eh escaleno, tem todos os lados diferentes!!\n");
    }
}
int main()
{
    float a,b,c;
    do
    {
        printf("digite o valor do lado A do triangulo: ");
        scanf("%d",&a);
        printf("digite o valor do lado B do triangulo: ");
        scanf("%d",&b);
        printf("digite o valor do lado C do triangulo: ");
        scanf("%d",&c);
        if(a+b<c || b+c<a || c+a<b)
        {
            printf("digite os lados corretamente!!\n");
        }
    }while(a+b<c || b+c<a || c+a<b);
    tipoTriangulo(a,b,c);
}
#endif // ex10
#ifdef ex11
int categoria(int idade)
{
    if(idade<5)
    {
        return printf("crianca, idade: %d\n",idade);
    }
    else if(idade>=5 && idade<=7)
    {
        return printf("infantil A, idade: %d\n",idade);
    }
    else if(idade>=8 && idade<=10)
    {
        return printf("infantil B, idade: %d\n",idade);
    }
    else if(idade>=11 && idade<=13)
    {
        return printf("juvenil A, idade: %d\n",idade);
    }
    else if(idade>=14 && idade<=17)
    {
        return printf("juvenil B, idade: %d\n",idade);
    }
    else
    {
        return printf("adulto, idade: %d\n",idade);
    }
}
int main()
{
    int k,A[10];

    do
    {
        printf("informe a quantidade de pessoas: ");
        scanf("%d",&k);
        if(k<3 || k>10)
        {
            printf("a quantidade tem que ser >= 3 ou <=10!!\n");
        }
    }while(k<3 || k>10);
    for(int i=0;i<k;i++)
    {
        do
        {
            printf("digite a idade da pessoa: ");
            scanf("%d",&A[i]);
            if(A[i]<0 || A[i]>120)
            {
                printf("digite a idade corretamente!!\n");
            }
        }while(A[i]<0 || A[i]>120);
    }
    for(int i=0;i<k;i++)
    {
        //printf("idade eh: %d\n",A[i]);
        categoria(A[i]);
    }

}
#endif
#ifdef ex12
float media(float n1, float n2, float n3, char letra)
{
    if(letra=='A')
    {
        float mediaA=(n1+n2+n3)/3;
        return printf("A media aritmetica do aluno eh: %.2f",mediaA);
    }
    else if(letra=='B')
    {
        float mediaP=(n1*5+n2*3+n3*2)/10;
        return printf("A media ponderada do aluno eh: %.2f",mediaP);
    }
    else
    {
        //float inversoNota1=1/n1,inversoNota2=1/n2,inversoNota3=1/n3;
        //float somaInversos=inversoNota1+inversoNota2+inversoNota3;

        float mediaH=3/(1/n1+1/n2+1/n3);
        return printf("A media harmonica do aluno eh: %.2f",mediaH);
    }
}
int main()
{
    float nota1,nota2,nota3;
    char letra;

    do
    {
        printf("digite a primeira nota: ");
        scanf("%f",&nota1);

        printf("digite a segunda nota: ");
        scanf("%f",&nota2);

        printf("digite a terceira nota: ");
        scanf("%f",&nota3);

        printf("Digite A para calcular a media aritmetica, B para calcular a media ponderada e C para calcular a media harmonica: ");
        scanf(" %c",&letra);

        if((nota1<0||nota1>10) && (nota2<0||nota2>10) && (nota3<0||nota3>10) ||(letra!='A'&& letra!='B'&& letra!='C'))
        {
            printf("notas ou letras invalidas !!\n");
        }
    }while((nota1<0||nota1>10) && (nota2<0||nota2>10) && (nota3<0||nota3>10) ||(letra!='A'&& letra!='B'&& letra!='C'));

    media(nota1,nota2,nota3,letra);
}
#endif // ex12
#ifdef ex13
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


    for (int i = 1; i <= x; i++)
    {
        printf("\nTabuada de %d:\n", i);

        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", j, i, j * i);
        }
    }

    return 0;}
#endif // ex13
#ifdef ex14
int n1[50],n2[50],n3[50],n4[50];
float media(float n1,float n2,float n3,float n4, int aluno)
{
    float media=(n1+n2+n3+n4)/4;
    if(media>0 && media<5)
    {
        return printf("Aluno %d -  Conceito D, media: %.2f\n",aluno,media);
    }
    else if(media>=5 && media<7)
    {
        return printf("Aluno %d - Conceito C, media: %.2f\n",aluno,media);
    }
    else if(media>=7 && media<9)
    {
        return printf("Aluno %d - Conceito B, media: %.2f\n",aluno,media);
    }
    else
    {
        return printf("Aluno %d - Conceito A, media: %.2f\n",aluno,media);
    }
}
int main()
{
    int k;
    do
    {
        printf("informe a quantidade de pessoas: ");
        scanf("%d",&k);
        if(k<3 || k>5)
        {
            printf("a quantidade tem que ser >= 3 ou <=50!!\n");
        }
    }while(k<3 || k>5);
    for(int i=0;i<k;i++)
    {
        do
        {
            printf("\ndigite a nota 1 do aluno %d: ",i+1);
            scanf("%d",&n1[i]);

            printf("digite a nota 2 do aluno %d: ",i+1);
            scanf("%d",&n2[i]);

            printf("digite a nota 3 do aluno %d: ",i+1);
            scanf("%d",&n3[i]);

            printf("digite a nota 4 do aluno %d: ",i+1);
            scanf("%d",&n4[i]);
            if(n1[i]<0 || n1[i]>10 || n2[i]<0 || n2[i]>10 || n3[i]<0 || n3[i]>10 || n4[i]<0 || n4[i]>10)
            {
                printf("digite a nota corretamente!!\n");
            }
        }while(n1[i]<0 || n1[i]>10 || n2[i]<0 || n2[i]>10 || n3[i]<0 || n3[i]>10 || n4[i]<0 || n4[i]>10);
    }
    for(int i=0;i<k;i++)
    {
        media(n1[i],n2[i],n3[i],n4[i],i+1);
    }
}

#endif // ex14
#ifdef ex15
float vetor[12];
void pesoIdeal(float altura, char sexo,int pessoa)
{
    if(sexo=='f')
    {
        float idealF=62.1*altura-44.7;
        return printf("Peso ideal para a pessoa %d do sexo %c com %.2fm eh: %.2f\n",pessoa,sexo,altura,idealF);
    }
    else
    {
        float idealM=72.7*altura-58;
        return printf("Peso ideal para pessoa %d  do sexo %c com %.2fm eh: %.2f\n",pessoa,sexo,altura,idealM);
    }
}
int main()
{
    char sex;
    int k=0;
    do
    {
        printf("informe a quantidade de pessoas: ");
        scanf("%d",&k);
        if(k<3 || k>12)
        {
            printf("a quantidade tem que ser >= 3 ou <=12!!\n");
        }
    }while(k<3 || k>12);
    for(int i=0;i<k;i++)
    {
        do
        {
            printf("informe sua altura da pessoa %d: ",i+1);
            scanf("%f",&vetor[i]);
            printf("f para feminino e m para masculino: ");
            scanf(" %c",&sex);

            // Condição combinada para altura e sexo
            if (vetor[i] < 0 || vetor[i] > 3.50 || (sex != 'f' && sex != 'm'))
            {
                printf("\nDados incorretos. Verifique a altura e o sexo!\n");
            }
        } while (vetor[i] < 0 || vetor[i] > 3.50 || (sex != 'f' && sex != 'm'));
        pesoIdeal(vetor[i],sex,i+1);
    }

}
#endif
#ifdef ex16
// Definindo vetores como variáveis globais
int A[5], B[5], C[5], D[15];

// Função para preencher o vetor D com base nos vetores A, B e C
void PreencherVetorD() {
    for (int i = 0; i < 5; i++)
    {
        D[i] = A[i];
        D[i + 5] = B[i];
        D[i + 10] = C[i];
    }
}

// Função para encontrar o maior número no vetor D
int MaiorNumero()
{
    int maior = D[0];
    for (int i = 1; i < 15; i++)
    {
        if (D[i] > maior)
        {
            maior = D[i];
        }
    }
    return maior;
}

int main() {
    // Recebendo input para os vetores A, B e C
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o elemento %d do vetor A: ",i+1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o elemento %d do vetor B: ",i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o elemento %d do vetor C: ",i+1);
        scanf("%d", &C[i]);
    }

    // Preenchendo o vetor D com base nos vetores A, B e C
    PreencherVetorD();

    // Encontrando o maior número no vetor D
    int maiorNumero = MaiorNumero();

    // Exibindo o conteúdo do vetor D e o maior número
    printf("Conteudo do vetor D: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", D[i]);
    }

    printf("\nMaior numero no vetor D: %d\n", maiorNumero);

    return 0;
}
#endif
