#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<locale.h>
#include<math.h>
#define ex1a

#ifdef ex1a
int main()
{
int num=0,cont,k;
do
{
    printf("Digite a quantidade de termos desejada: ");
    scanf("%i",&k);
    if(k<=0)
    {
        printf("Quantidade invalida\n");
    }
}
while(k<=0);
for(cont=1;cont<=k;cont++)
{
    num=num+3;
    printf("%d\n",num);
}
system("pause");
return 0;
}

#endif // ex1a
#ifdef ex1b
int main()
{
int num=0,cont,k;
do
{
    printf("Digite a quantidade de termos desejada: ");
    scanf("%i",&k);
    if(k<=0)
    {
        printf("Quantidade invalida\n");
    }
}
while(k<=0);
for(cont=1;cont<=k;cont++)
{
    num=num+4;
    printf("1/%d \n",num);
}
system("pause");
return 0;
}
#endif // ex1
#ifdef ex2a
int main()
{
int num1=0,num2=0,cont,k;
do
{
    printf("Digite a quantidade de termos desejada: ");
    scanf("%i",&k);
    if(k<=0)
    {
        printf("Quantidade invalida\n");
    }
}
while(k<=0);
for(cont=1;cont<=k;cont++)
{
    num1=num1+2;
    num2=num2+5;
    printf("%d/%d \n",num1,num2);
}
system("pause");
return 0;
}

#endif // ex2a
#ifdef ex2b
int main()
{
int num1=0,num2=0,cont,k,resultado=2;
do
{
    printf("Digite a quantidade de termos desejada: ");
    scanf("%i",&k);
    if(k<=0)
    {
        printf("Quantidade invalida\n");
    }
}
while(k<=0);
for(cont=1;cont<=k;cont++)
{
    num1=pow(resultado,2);
    resultado+=2;
    num2+=8;
    if (num1%num2==0)
    {
        printf("%d \n",num1/num2);

    }
    else
    {
        printf("%d/%d \n",num1,num2);
    }
}
system("pause");
return 0;
}
#endif // ex2b
#ifdef ex3
int main()
{
int resultado=0,cont,k=0,idade;
while(k<=0);
{
    printf("Digite a quantidade de pessoas\n");
    scanf("%i",&k);
    if(k<=0)
    {
        printf("Quantidade menor que zero\n");
    }
}
for(cont=1;cont<=k;cont++)
{
    do
    {
        printf("Informe cada idade\n");
        scanf("%i",idade);
        if(idade<=0)
        {
            printf("Idade invalida\n");
        }
    }
    while(idade<=0);
    resultado=resultado+idade;
}
    printf("o somatorio de todas as idades eh: %d\n",resultado);
system("pause");
return 0;
}

#endif // ex3
#ifdef ex3nadia
 int main ()
 {

 int idade,cont,k=0, soma=0;
    while(k<=0)
    {
        printf("Digite a quantidade de termos desejada\n");
        scanf("%i",&k);
        if(k<=0)
        {
            printf("Quantidade Inválida\n");
        }
     }
    for(cont=1;cont<=k;cont++)
    {
        do
        {
            printf("Digite a idade\n");
            scanf("%d",&idade);
            if (idade<=0)
            {
                printf("Idade Inválida\n");
            }
        }
        while (idade<=0);
         soma=soma+idade;
    }
        printf("A soma das idades eh %d\n",soma);

    system("pause");
    return 0;
 }

#endif // ex3nadia
#ifdef ex4

#endif // ex4
#ifdef ex5

#endif // ex5
#ifdef ex6

#endif // ex6
#ifdef ex7

#endif // ex7
#ifdef ex8

#endif // ex8
