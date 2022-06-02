#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// 1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
// números maiores que 0.
    /*
    int num=0,i;

    for (i = 1;i <= 5;i++){

        num += 3;

        printf("%d ",num);
    }

    return 0;*/

// 2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
// deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
    /*
    int num=0, i, j=1, num2=0, k=1, num3=0;

    for(i=1; i<=100; i++){
        num+=1;
        printf("%d ", num);
    }

    printf("\n");

    while(j<=100){
        num2+=1;
        j++;
        printf("%d ", num2);
    }

    do{
        num3+=1
        k++;
    }while(k<=100);
    printf("%d ", num3);

    return 0;*/

// 3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
// iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
    /*
    int contagem=10;

    while(contagem>=0){
        printf("%d\n ", contagem);
        contagem-=1;
    }
    printf("FIM!");
    return 0;*/

// 4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
// 1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).
    /*
    int num;

    for(num = 0; num <= 100000; num+= 1000){
        printf("%d\n",num);
    }
    return 0;*/

// 5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
    /*
    int valor, soma=0, i;

    for(i=0; i < 10; i++){
        printf("Digite o %d valor: \n", i+1);
        scanf("%d", &valor);

        soma += valor;
    }

    printf("A soma dos valores sao: %d", soma);
    return 0;*/

// 6. Faça um programa que leia 10 inteiros e imprima sua média.
    /*
    int valor, soma=0, i;
    float media=0;

    for(i=0; i < 10; i++){
        printf("Digite o %d valor: \n", i+1);
        scanf("%d", &valor);

        soma += valor;
    }

    printf("A soma dos valores sao: %d\n", soma);

    media = soma/10;

    printf("A media dos valores sao: %f", media);

    return 0;*/

// 7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
    /*
    int num, soma=0, i;
    float media=0;

    for(i=0; i <10; i++){
        printf("Digite o %d numero inteiro positivo: \n", i+1);
        scanf("%d", &num);

        while(num <= 0){
            printf("Numero nao positivo! Digite novamente \n %d", i);
            scanf("%d", &num);
        }

        soma += num;
    }

    media = soma/10;
    printf("media dos numeros %.2f", media);

    return 0;*/

// 8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
    /*
    int num, i, numMaior, numMenor;

    for(i=0; i < 10; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &num);

        if(num > numMaior){
            numMaior = num;

        }else if(num < numMenor){
            numMenor = num;
        }
    }
    printf("O maior numero digitado foi: %d", numMaior);
    printf("O menor numero digitado foi: %d", numMenor);
    return 0;*/

// 9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
// naturais ímpares.
    /*
    int num, numImpar = 1, i;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    for(i=1; i <= num; i++){
        printf("%d\n", numImpar);
        numImpar += 2;
    }
    return 0;*/

// 10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
    /*
    int cont=0, soma=0;

    while(cont < 50){
        cont +=1;
        soma += cont*2;
    }
    printf("A soma dos 50 primeiros numeros sao: %d", soma);
    return 0;*/

// 11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
// naturais de 0 até N em ordem crescente.
    /*
    int i, auxiliar =1 ;

    while( auxiliar ) {
        printf("Digite um numero qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        if (auxiliar) {
            for (i=auxiliar;i>=0;i--){
              printf("%i\n",i);
            };
        }
        else {
             printf("entrada terminada pelo usuario \n");
        }

    };
    return 0;*/

// 12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
// desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
// 6 + 11 + 22 + 33 = 78
    /*
    int numero, soma=1;
    printf("Informe um numero inteiro");
    scanf("%d",&numero);


    for (int i=2 ; i <= (numero/2.0+1) ; i++ ) {
        if ( numero % i == 0 ) {
            printf("%d - ",i);
            soma += i;
        }
    }
    printf("A soma dos divisores de %d (exceto ele mesmo) e: %d\n",numero,soma);
    return 0;*/


// 13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
    /*
    int soma = 0, i;

    for(i=0; i < 1000; i++) {

        if (i % 3 == 0){

            soma += i;

        }else if (i % 5 == 0){

            soma += i;
        }
    }

    printf("%d", soma);
    return 0;*/

// 14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
// saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.


// 15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
// escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
// de dados com um valor negativo ou zero.
    /*
    int nInput;
    float nQuadrado, nCubo, nRaiz;
    printf("\nInforme zero ou negativo para sair ");
    printf("\n------------------------------------------------------------");
    nInput = 1;

    while (nInput > 0){
    printf("\n Digite um numero: ");
    scanf("%i", &nInput);

        if (nInput > 0) {
            nQuadrado = pow(nInput,2);
            nCubo = pow(nInput,3);
            nRaiz = sqrt(nInput);
            printf("\n QUADRADO: %.2f ", nQuadrado);
            printf("\n CUBO: %.2f ", nCubo);
            printf("\n RAIZ: %.2f ", nRaiz);
        }
        printf("\n\n Exercicio de Calculo - Informe zero ou negativo para sair ");
        printf("\n------------------------------------------------------------");
    }
    return 0;*/


//16. Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre dois números:
//  Adição (opção 1)
//  Subtração (opção 2)
//  Multiplicação (opção 3)
//  Divisão (opção 4).
//  Saída (opção 5)
// O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
// e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída(opção 5).
/*
    int opcao, num1, num2;

    do{
        printf("-- MENU--\n");
        printf("(1) - Soma\n");
        printf("(2) - Subtracao\n");
        printf("(3) - Multiplicacao\n");
        printf("(4) - Divisao\n");
        printf("(5) - Sair\n\n");
        printf("Digite a opcao\n");
        scanf("%d", &opcao);
        printf("------------------------\n");

        if(opcao > 0 && opcao < 5){
            printf("Digite dois valores:\n");
            scanf("%d%d", &num1, &num2);
        }

        switch(opcao){
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        case 4:
            printf("Divisao: %d\n", num1 / num2);
            break;
        case 5:
            printf("Sair: %d\n");
            break;
        case 6:
            while(num2 == 0){
                printf("Nao existe divisao por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("Divisao: %d\n", num1 / num2);
            break;

        default:
            printf("Opcao invalida.\nDigite outra opcao: ");
        }
    }while(opcao != 0);

    return 0;*/


// 17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
// 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
// necessários para que Zé seja maior que Chico.
    /*
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze){
        chico += 0.02;
        ze += 0.03;
        ano++;
        printf("Chico: %.2f\tZe: %.2f\tAno: %d\n", chico, ze, ano);
    }
    printf("Sao necessario %d anos!\n\n", ano);
    return 0;*/

// 18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
// recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
// ano anterior. Faça programa que determine o salário atual do funcionário.
    /*
    int i, ano_atual;
    float salario, novo_salario, percentual;
    printf("Digite o ano atual: ");
    scanf("%d",&ano_atual);
    salario = 2000;
    percentual = 0.015;
    novo_salario = salario + (percentual * salario);
    i = 1997;

    while (i <= ano_atual){
        percentual *= 2;
        novo_salario = novo_salario + (percentual * novo_salario);
        i = i + 1;
    }
    printf("\nNovo salario = %.2f", novo_salario);


    return 0;*/


// 19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
// um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
// a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
    /*
    int valor=1, nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, nota1=0;
    printf("Digite o valor do saque:");
    scanf("%d", &valor);

    do{
        if(valor > 1000){
            printf("Valor Invalido");
        }else if(valor>=100){
            nota100++;
            valor -=100;
        }else if(valor>=50){
            nota50++;
            valor -=50;
        }else if(valor>=20){
            nota20++;
            valor -=20;
        }else if(valor>=10){
            nota10++;
            valor -=10;
        }else if(valor>=5){
            nota5++;
            valor -=5;
        }else if(valor>=2){
            nota2++;
            valor -=2;
        }else if(valor>=1){
            nota1++;
            valor -=1;
        }
    }while(valor > 0);
    printf("Total de notas: %d, %d, %d, %d, %d, %d, %d", nota100, nota50, nota20, nota10, nota2, nota1);
    return 0;*/


// 20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
    /*
    int i, j, somaPrim = 2, raizQuad, primo;

    for (i = 3; i <= 2000000; i += 2) {
        primo = 1;
        raizQuad = (int)sqrt(i);
        for (j = 3; j <= raizQuad; j += 2) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            somaPrim += i;
        }
    }

    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %d\n\n", somaPrim);

    system("pause");
    return 0;*/

// 21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
// números informados pelo usuário.
/*
    int a, b, div=0;
    printf("Digite o numero a:\n");
    scanf("%d",&a);
    printf("Digite o numero b:\n");
    scanf("%d",&b);

    if (a>=0 && a<=100){
        printf("Numero a esta entre 0 e 100\n",a);
    }else{
        printf("Nao esta entre 0 e 100, digite novamente:\n", a);
        while(a>100){
            printf("Numero ivalido, digite novamente: \n");
            scanf("%d", &a);
        }
    }



    if (b>=0 && b<=100){
        printf("Numero b esta entre 0 e 100\n",b);
    }else{
        printf("Nao estao entre 0 e 100, digite novamente:\n",b);
        while(b>100){
            printf("Numero invalido, digite novamente: \n");
            scanf("%d",&b);
        }
    }

    for(int i=a+1;i<b;i++){
        if(div%i==0){
            div++;
            printf("%d\n",i);
        }
    }
    if(div==2){
    printf("Sem numeros primos no intervalo");
    }*/

//22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois
//números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois
//dígitos é 9009 = 91*99.
    /*
    int num1, num2, prod, numInverso = 0, temp, quantDig = 0, cifra, maiorPalindromo = 0, fatorMaior1, fatorMaior2;

    for (num1 = 999; num1 >= 100; num1--) {
        for (num2 = num1; num2 >= 100; num2--) {
            prod = num1 * num2;

            if (prod > maiorPalindromo) {
                // Contagem de digitos do produto
                temp = prod;
                while (temp != 0) {
                    quantDig++;
                    temp /= 10;
                }

                // Inversao do produto
                temp = prod;
                numInverso = 0;
                while(temp != 0) {
                    cifra = temp % 10;
                    numInverso += cifra * pow(10, quantDig - 1);
                    temp /= 10;
                    quantDig--;
                }

                if (prod == numInverso) {
                    maiorPalindromo = numInverso;
                    fatorMaior1 = num1;
                    fatorMaior2 = num2;
                }
            }
        }
    }

    printf("O maior palindromo e formado pela multiplicacao de %d x %d = %d\n\n", fatorMaior1, fatorMaior2, maiorPalindromo);

    return 0;*/

//23. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas
//do chamado Triangulo de Floyd. Para n = 6, temos:
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//16 17 18 19 20 21*/
    /*
    int n, i,j, c=0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    for(i=1; i <=n; i++){
        for(j=1; j <= i; j++){
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;*/
}
