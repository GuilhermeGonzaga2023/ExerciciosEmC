#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ex8

#ifdef ex1
int main()
{

}
#endif // ex1
#ifdef ex2
int main()
{

}
#endif // ex2
#ifdef ex3
int main()
{
float nr1,nr2,nr3;
    do
    {

        printf("Informe o primeiro numero: ");
        scanf("%f", &nr1);

        printf("Informe o segundo numero: ");
        scanf("%f", &nr2);

        printf("Informe o terceiro numero: ");
        scanf("%f", &nr3);
        if(nr1>nr2 && nr1>nr3)
        {
            printf("o primeiro numero eh o maior !\n");
            break;
        }
        else if(nr2>nr1 && nr2>nr3)
        {
            printf("o segundo numero eh o maior !\n");
            break;
        }
        else if(nr3>nr1 && nr3>nr2)
        {
            printf("o terceiro numero eh o maior !\n");
            break;
        }
        else
        {
            printf("todos os numeros sao iguais, digite novamente\n");
        }
    }
    while(1);
return 0;
}
#endif // ex3
#ifdef ex4
int main()
{
float lado1,lado2,lado3;
    printf("Informe o lado 1 do triangulo em cm: ");
    scanf("%f", &lado1);

    printf("Informe o lado 2 do triangulo em cm: ");
    scanf("%f", &lado2);

    printf("Informe o lado 3 do triangulo em cm: ");
    scanf("%f", &lado3);

    if(lado1==lado2==lado3)
    {
        printf("triangulo eh equilatero");
    }
    else if(lado1==lado2 || lado1==lado3 || lado2==lado3)
    {
        printf("triangulo eh isosceles");
    }
    else
    {
        printf("triangulo eh escaleno");
    }
}
#endif // ex4
#ifdef ex5
int main()
{
float horaTrab, salarioBruto, salarioLiq;
    printf("Informe a quantidade de horas trabalhada no dia: ");
    scanf("%f",&horaTrab);

    salarioBruto=(horaTrab*21)*660;

    salarioLiq=salarioBruto-(salarioBruto*0.03);

    printf("O salario liquido do mes eh: %.2f",salarioLiq);
}
#endif // ex5
#ifdef ex6
int main()
{

}
#endif // ex6
#ifdef ex7
int main()
{
float altura, peso,imc;

    printf("Informe seu peso (usando ponto): ");
    scanf("%f",&peso);

    printf("Informe sua altura (usando ponto): ");
    scanf("%f",&altura);

    imc=peso/(altura*altura);

    if(imc<17)
    {
        printf("Muito abaixo do peso !!\n");
    }
    else if(imc>=17 && imc<18.5)
    {
        printf("Abaixo do peso !!\n");
    }
    else if(imc>=18.5 && imc<25)
    {
        printf("Peso Normal !!\n");
    }
    else if(imc>=25 && imc<30)
    {
        printf("Acima do peso !!\n");
    }
    else if(imc>=30 && imc<35)
    {
        printf("Obesidade 1 !!\n");
    }
    else if(imc>=35 && imc<39.99)
    {
        printf("Obesidade 2 (severa) !!\n");
    }
    else
    {
        printf("Obesidade 3 (morbida) !!\n");
    }
    printf("Seu IMC eh: %.2f:",imc);
}
#endif // ex7
#ifdef ex8
int main()
{
float altura, peso;

    printf("Informe seu peso (usando ponto): ");
    scanf("%f",&peso);

    printf("Informe sua altura (usando ponto): ");
    scanf("%f",&altura);

    if(altura<1.20 && peso<60)
    {
        printf("Classificacao A !!\n");
    }
    else if(altura<1.20 && peso>=60 && peso<90)
    {
        printf("Classificacao D !!\n");
    }
    else if(altura<1.20 && peso>=90)
    {
        printf("Classificacao G !!\n");
    }
    else if(altura>=1.20 && altura<1.70 && peso<60)
    {
        printf("Classificacao B !!\n");
    }
    else if(altura>=1.20 && altura<1.70 && peso>=60 && peso<90)
    {
        printf("Classificacao E !!\n");
    }
    else if(altura>=1.20 && altura<1.70 && peso>=90)
    {
        printf("Classificacao H \n");
    }
    else if(altura>=1.70 && peso<60)
    {
        printf("Classificacao C \n");
    }
    else if(altura>=1.70 && peso>=60 && peso<90)
    {
        printf("Classificacao F \n");
    }
    else
    {
        printf("Classificacao I !!\n");

    }

}
#endif // ex8
#ifdef ex9
int main()
{
int idade,sexo;
float salario,newSalario;
    printf("Informe sua idade: ");
    scanf("%i",&idade);

    printf("Digite 1 para masculino e 2 para feminino: ");
    scanf("%i",&sexo);

    printf("Informe seu salario fixo: ");
    scanf("%f",&salario);

    if(sexo==1)
    {
        printf("seu sexo eh masculino\n");
        printf("sua idade eh: %i\n",idade);
        if(idade>=30)
        {
            newSalario=salario+200;
            printf("Seu salario novo apos o abono eh: %.2f",newSalario);
        }
        else
        {
            newSalario=salario+120;
            printf("Seu salario novo apos o abono eh: %.2f",newSalario);
        }
    }
    else if(sexo==2)
    {
        printf("seu sexo eh feminino\n");
        printf("sua idade eh: %i\n",idade);
        if(idade>=30)
        {
            newSalario=salario+220;
            printf("Seu salario novo apos o abono eh: %.2f",newSalario);
        }
        else
        {
            newSalario=salario+130;
            printf("Seu salario novo apos o abono eh: %.2f",newSalario);
        }
    }
    else
    {
        printf("Escolha 1 ou 2 para o sexo! ");
    }
}
#endif // ex9
