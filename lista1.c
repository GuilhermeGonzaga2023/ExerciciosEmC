#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ex15
#ifdef ex0
int main()
 {
//     CALCULA A MEDIA

     float num1,num2,media;
     printf("Digite dois numeros quaisquer\n");
     scanf("%f",&num1);
     scanf("%f",&num2);
     media=(num1+num2)/2;
     printf("A media e %.2f ",media);
 }

#endif // ex0
#ifdef ex1
int main()
{
//  exercicio 1 da lista

    float num1,soma,sub;
    printf("Digite um numero qualquer\n");
    scanf("%f", &num1);
    soma=(num1 + 1);
    sub=(num1-1);
    printf("O antecessor de %.2f\n",sub);
    printf("O sucessor de %.2f\n",soma);
}
#endif // ex1
#ifdef ex2
int main()
{
//  exercicio 2 da lista

    float num1;
    printf("Digite um numero qualquer\n");
    scanf("%f", &num1);
    if(num1>0)
    {
        printf("Numero digitado eh positivo\n");
    }
    else if(num1<0)
    {
        printf("Numero digitado eh negativo\n");
    }
    else
    {
        printf("Numero digitado eh zero\n");
    }
}
#endif // ex2
#ifdef ex3
int main()
{
//     CALCULA A MEDIA com reprovação e aprovação

     float num1,num2,num3,num4,media;
     printf("Digite as 4 notas do aluno\n");
     scanf("%f",&num1);
     scanf("%f",&num2);
     scanf("%f",&num3);
     scanf("%f",&num4);
     media=(num1+num2+num3+num4)/4;
     if(media>=6)
     {
        printf("Aluno aprovado media: %.2f ",media);
     }
     else
     {
        printf("Aluno reprovado media: %.2f ",media);
     }

}
#endif // ex3
#ifdef ex4
int main()
{
    //     O % CALCULA O RESTO DA DIVISAO SE FOR 0 É MULTIPLO

int num1,num2;

    printf("Digite dois valores:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0)
    {
        printf("Sao multiplos\n");
    }
    else
    {
        printf("Nao sao multiplos\n");
    }
    return 0;
}
#endif // ex4
#ifdef ex5
int main()
{
    int num1,num2;

    printf("Digite dois valores:\n");
    scanf("%d", &num1);
    scanf("%d",&num2);

    if (num1 % 2 == 0 && num2 % 2 != 0)
    {
        printf("O segundo numero eh impar \n");
    }
    else if(num1 % 2 != 0 && num2 % 2 == 0)
    {
        printf("O primeiro numero eh impar \n");
    }
    else if(num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Sao pares\n");
    }
    else
    {
        printf("Sao impares\n");
    }

    return 0;
}
#endif // ex5
#ifdef ex6
int main()
{
    int num1,num2;
    printf("digite 2 numeros inteiros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
        if(num1>num2)
        {
            printf("O maior numero eh: %d\n",num1);
        }
        else if(num2>num1)
        {
                printf("O maior numero eh: %d\n",num2);

        }
        else
        {
                printf("Os numeros sao iguais\n");

        }
}
#endif // ex6
#ifdef ex7
int main()
{
    char sexo[100];
    float altura, peso;
    printf("Homem ou mulher?\n");
    scanf("%s", sexo);

        if (strcmp(sexo, "Homem") == 0 || strcmp(sexo, "homem ") == 0 || strcmp(sexo, "HOMEM") == 0) {
            printf("Sexo escolhido foi o masculino\n");

            printf("Agora digite sua altura(usando .)\n");
            scanf("%f", &altura);
            peso = (72.7 * altura) - 58;
            printf("Seu peso ideal eh: %.2f\n", peso);
        } else {
            printf("Sexo escolhido foi o feminino\n");

            printf("Agora digite sua altura(usando .)\n");
            scanf("%f", &altura);

            peso = (62.1 * altura) - 44.7;
            printf("Seu peso ideal eh: %.2f\n", peso);
        }
 return 0;
}

#endif // ex7
#ifdef ex8
int main()
{
    float produto,desconto,reajuste;
    printf("insira o preco do produto: \n");
    scanf("%f",&produto);

    desconto=produto-(produto*0.09);
    printf("preco do produto com desconto eh: %f\n",desconto);

    reajuste = desconto + (produto * 0.10);
    printf("preco do produto com reajuste eh: %f\n",reajuste);
}
#endif // ex8
#ifdef ex9
int main()
{
    float salario,Htrab,desconto;
    int nrAula;

    printf("insira o numero de aulas dadas\n");
    scanf("%d",&nrAula);

    printf("insira o valor da hora aula\n");
    scanf("%f",&Htrab);

    salario=nrAula*Htrab;
    printf("salario liquido  eh: %.2f\n",salario);

        if(salario<=1320)
        {
            desconto=salario-(salario*0.075);
            printf("salario com desconto do inss eh: %.2f\n",desconto);
        }
        else if(salario>1320 && salario<=2571.29)
        {
            desconto=salario-(salario*0.09);
            printf("salario com desconto do inss eh: %.2f\n",desconto);
        }
        else if(salario>2571.29 && salario<=3856.94)
        {
            desconto=salario-(salario*0.12);
            printf("salario com desconto do inss eh: %.2f\n",desconto);
        }
        else
        {
            desconto=salario-(salario*0.14);
            printf("salario com desconto do inss eh: %.2f\n",desconto);
        }
}
#endif // ex9
#ifdef ex10
int main()
{
    float precoVeiculo, precoFab,lucro,imposto;
    printf("insira o preco de fabrica do veiculo:\n");
    scanf("%f",&precoFab);

    printf("quantos por cento de lucro para o distribuidor?\n");
    scanf("%f",&lucro);

    printf("quantos por cento de imposto?\n");
    scanf("%f",&imposto);

    lucro=precoFab*(lucro/100);
    imposto=precoFab*(imposto/100);

    precoVeiculo=precoFab+lucro+imposto;

    printf("O lucro do distribuidor eh: %.0f\n",lucro);
    printf("O valor dos impostos eh: %.0f\n",imposto);
    printf("O preco final do veiculo eh: %.0f\n",precoVeiculo);


}
#endif // ex10
#ifdef ex11
int main()
{
    float num1,inf10,inf20;

    printf("Digite um numero inteiro: \n");
    scanf("%f",&num1);

    if(num1<100)
    {
        inf10=num1+(num1*0.10);
        printf("O numero com inflacao de 10 eh: %f\n",inf10);
    }
    else
    {
        inf20=num1+(num1*0.20);
        printf("O numero com inflacao de 20 eh: %f\n",inf20);
    }
}
#endif // ex11
#ifdef ex12
int main()
{
    float salarioOld, salarioNew;
    printf("Qual seu salario atual?\n");
    scanf("%f",&salarioOld);

        if(salarioOld<800)
        {
            salarioNew=salarioOld+(salarioOld*0.15);
            printf("Seu antigo salario era: %.2f\n",salarioOld);
            printf("Seu novo salario eh: %.2f\n",salarioNew);

        }
        else if(salarioOld>=800 && salarioOld<=1000)
        {
            salarioNew=salarioOld+(salarioOld*0.10);
            printf("Seu antigo salario era: %.2f\n",salarioOld);
            printf("Seu novo salario eh: %.2f\n",salarioNew);

        }
        else
        {
            salarioNew=salarioOld+(salarioOld*0.05);
            printf("Seu antigo salario era: %.2f\n",salarioOld);
            printf("Seu novo salario eh: %.2f\n",salarioNew);
        }
}
#endif // ex12
#ifdef ex13
int main() {

    int num1, num2, num3, num4;

    do {
        // Solicitar os dois números ao usuário
        printf("Digite um numero maior que 10 e menor que 25: ");
        scanf("%d", &num1);

        printf("Digite um numero maior ou igual a zero: ");
        scanf("%d", &num2);

        // Verificar se os números atendem aos critérios
        if (num1 > 10 && num1 < 25 && num2 >= 0)
        {
            // Calcular o terceiro número e o quarto número
            num3 = num1 + num2;
            printf("Terceiro numero eh: %d\n", num3);
            num4 = num1 * num2 * num3;
            printf("Quarto numero eh: %d\n", num4);

            // Calcular a soma dos quadrados
            int soma_quadrados = num1 * num1 + num2 * num2 + num3 * num3 + num4 * num4;

            // Verificar se a soma dos quadrados é menor que 50000
            if (soma_quadrados < 50000) {
                // Exibir resultados
                printf("A soma dos quadrados dos numeros eh: %d\n", soma_quadrados);
                break;  // Sair do loop
        }
            else
            {
                printf("A soma dos quadrados eh maior ou igual a 50000. Digite novos numeros.\n");
            }
        }
        else
        {
            printf("Os numeros nao atendem aos criterios. Digite novamente.\n");
        }
    } while (1);  // Loop infinito até que os critérios sejam atendidos

    return 0;
}
#endif // ex13
#ifdef ex14
int main()
{
    int codigoProduto, qtd;
    float preco;
do{

    printf("Informe o codigo do produto(1001, 1324, 6548, 987, 7623) : ");
    scanf("%d", &codigoProduto);
    printf("Qual a quantidade comprada? ");
    scanf("%d", &qtd);


    if(codigoProduto==1001 || codigoProduto==1324 || codigoProduto==6548 || codigoProduto ==987 || codigoProduto==7623){

        if(codigoProduto==1001){
            preco=5.32*qtd;
        }
        else if(codigoProduto==1324){
            preco=6.45*qtd;
        }
        else if(codigoProduto==6548){
            preco=2.37*qtd;
        }
        else if(codigoProduto==987){
            preco=5.32*qtd;
        }
        else{
            preco=6.45*qtd;
        }
        printf("Valor da compra eh: %.2f\n",preco);
        break;
    }
    else{

        printf("Esse codigo nao existe .\n");
    }
}
while(1);
return 0;
}
#endif // ex14
#ifdef ex15
int main()
{
    int nroAluno;
    float ma,nota1,nota2,nota3,me;

    printf("informe o numero de identificacao do aluno: \n");
    scanf("%d", &nroAluno);

    printf("informe nota 1: \n");
    scanf("%f", &nota1);

    printf("informe nota 2: \n");
    scanf("%f", &nota2);

    printf("informe nota 3: \n");
    scanf("%f", &nota3);

    printf("informe a medida dos exercicios: \n");
    scanf("%f", &me);

    ma=(nota1+ nota2*2 + nota3*3 + me)/7;

    if(ma>=9){
        printf("Conceito A, aluno aprovado\n");

    }
    else if(ma>=7.5 && ma<9){
        printf("Conceito B, aluno aprovado\n");

    }
    else if(ma>=6 && ma<7.5){
        printf("Conceito C, aluno aprovado\n");

    }
    else if(ma>=4 && ma<6){
        printf("Conceito D, aluno reprovado\n");

    }
    else{
        printf("Conceito E, aluno reprovado\n");

    }

    //printf(" \n");
    printf("Numero de identificacao do aluno: %d\n",nroAluno);
    printf("Nota 1: %2.f \n",nota1);
    printf("Nota 2: %2.f \n",nota2);
    printf("Nota 3: %2.f \n",nota3);
    printf("Media de exercicios do aluno: %2.f \n",me);
    printf("Media de aproveitamento do aluno: %2.f \n",ma);
}
#endif // ex15



































//int main()
// {
//     float num1,num2,media;
//     printf("Digite dois numeros quaisquer\n");
//     scanf("%f %f",&num1,&num2);
//     media=(num1+num2)/2;
//     printf("A media entre os numeros %.2f e %.2f= %.2f ",num1,num2,media);
//  return 0;
//#endif // ex1B
//#ifdef ex1C
//int main()
// {
//     int num2;
//     float media,num1;
//     printf("Digite dois numeros quaisquer\n");
//     scanf("%f %d",&num1,&num2);
//     media=(num1+num2)/2;
//     printf("A media entre os numeros %.2f e %i= %.2f ",num1,num2,media);
//  return 0;
// }
//#endif // ex1C
//#ifdef ex1D
//int main()
//{
//     int media,num2;
//     float num1;
//     printf("Digite dois numeros quaisquer\n");
//     scanf("%f %d",&num1,&num2);
//     media=(num1+num2)/2;
//     printf("A media entre os numeros %.2f e %i= %.i ",num1,num2,media);
//  return 0;
// }
//#endif // ex1D
