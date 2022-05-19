#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define PI 3.141592

int main()
{
    // 01. Faça um programa que leia um número inteiro e o imprima.
    /*
    int x;
    printf("Digite um numero inteiro, por favor!\n");
    scanf("%d",&x);
    printf("O valor de x e: %d", x);
    return 0;
    */

    // 02. Faça um programa que leia um número real e o imprima.
    /*
    float x;
    printf("Digite um numero real, por favor!\n");
    scanf("%f",&x);
    printf("O valor de x e: %f", x);
    return 0;
    */

    // 03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
    /*
    int x, y, z, soma;
    printf("Digite tres valores inteiros, por favor!\n");
    scanf("%d %d %d", &x, &y,&z);
    soma = x+y+z;
    printf("A soma dos valores informados sao = %d", soma);
    return 0;
    */

    // 04. Leia um número real e imprima o resultado do quadrado desse número.
    /*
    float x;
    printf("Entre com um numero!\n");
    scanf("%f",&x);
    x *= x;
    printf("O quadra do numero informado e: %f\n", x);
    return 0;
    */

    // 05. Leia um número real e imprima a quinta parte deste número.
    /*
    float x, quintaParte;
    printf("Entre com um numero: \n");
    scanf("%f", &x);
    quintaParte = x * 1/5;
    printf("A quinta parte de %f e: %f", x, quintaParte);
    return 0;
    */

    // 06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
    //     formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
    //     temperatura em Celsius
    /*
    float c, f;
    printf("Entre com uma temperatura em Celsius: \n");
    scanf("%f", &c);
    f = c * (9.0/5.0)+32.0;
    printf("A temperatura de %f Celsius em Fahrenheit e: %f", c, f);
    return 0;
    */

    // 07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
    // fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
    // temperatura em Fahrenheit.
    /*
    float c, f;
    printf("Entre com uma temperatura em Fahrenheit: \n");
    scanf("%f", &f);
    c = 5.0 * (f - 32.0) /9.0;
    printf("A temperatura de %f Fahrenheit em Celsius e: %f", f,c);
    return 0;
    */

    // 08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
    // de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
    /*
    float k, c;
    printf("Entre com uma temperatura em Kelvin: \n");
    scanf("%f", &k);
    c = k - 273.15;
    printf("A temperatura de %f Kelvin em Celsius e: %f", k,c);
    return 0;
    */

    // 09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
    // de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
    /*
    float k, c;
    printf("Entre com uma temperatura em Celsius: \n");
    scanf("%f", &c);
    k = c + 273.15;
    printf("A temperatura de %f Celsius em Kelvin e: %f", c,k);
    return 0;
    */

    // 10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
    // (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
    // em m/s.
    /*
    float k, m;
    printf("Entre com uma velocidade qualquer:\n");
    scanf("%f", &k);
    m = k/3.6;
    printf("A velocidade de %f km/h em m/s e: %f", k,m);
    return 0;
    */

    // 11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
    // (quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
    // M em m/s.
    /*
    float k, m;
    printf("Entre com uma velocidade qualquer:\n");
    scanf("%f", &m);
    k = m*3.6;
    printf("A velocidade de %f m/s em km/h e: %f", m,k);
    return 0;
    */

    // 12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
    // conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.
    /*
    float k, m;
    printf("Entre com uma distancia qualquer:\n");
    scanf("%f", &m);
    k = 1.61*m;
    printf("A distancia de %f milhas em quilometro e: %f", m,k);
    return 0;
    */

    // 13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
    // conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
    /*
    float k, m;
    printf("Entre com uma distancia qualquer:\n");
    scanf("%f", &k);
    m = k/1.61;
    printf("A distancia de %f quilometro em milhas e: %f", k,m);
    return 0;
    */

    // 14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
    // R = G*/180, sendo G o ângulo em graus e R em radianos e  = 3.141592.
    /*
    float graus, radianos;
    printf("Entre com um angulo em graus:\n");
    scanf("%f",&graus);
    radianos = graus * PI/180;
    printf("O angulo em graus de %f convertidos em radianos e: %f", graus, radianos);
    return 0;
    */

    // 15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
    // G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592.
    /*
    float graus, radianos;
    printf("Entre com um angulo em radianos:\n");
    scanf("%f",&radianos);
    graus = radianos*180/PI;
    printf("O angulo em radianos de %f convertidos em graus e: %f", radianos, graus);
    return 0;
    */

    // 16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
    // fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
    /*
    float polegadas, centimentros;
    printf("Entre com um comprimento:\n");
    scanf("%f", &polegadas);
    centimentros = polegadas*2.54;
    printf("O comprimento de %f polegadas conververtido em centimentros e: %f", polegadas, centimentros);
    return 0;
    */

    // 17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
    // fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
    /*
    float polegadas, centimentros;
    printf("Entre com um comprimento:\n");
    scanf("%f", &centimentros);
    polegadas = centimentros/2.54;
    printf("O comprimento de %f centimentros conververtido em polegadas e: %f", centimentros,polegadas);
    return 0;
    */

    // 18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
    // fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros cúbicos
    /*
    float metrosCubicos, litros;
    printf("Entre com um valor de volume:\n");
    scanf("%f", &metrosCubicos);
    litros = 1000*metrosCubicos;
    printf("O volume de %f metros cubicos conververtido em litros e: %f", metrosCubicos,litros);
    return 0;
    */

    // 19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
    // fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros cúbicos.
    /*
    float metrosCubicos, litros;
    printf("Entre com um valor de volume:\n");
    scanf("%f", &litros);
    metrosCubicos = litros/1000;
    printf("O volume de %f litros conververtido em metros cubicos e: %f", litros, metrosCubicos);
    return 0;
    */

    // 20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
    // conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
    /*
    float quilograma, libras;
    printf("Entre com um valor de massa:\n");
    scanf("%f", &quilograma);
    libras = quilograma/0.45;
    printf("O valor de %f quilogramas conververtido em libras e: %f", quilograma, libras);
    return 0;
    */

    // 21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
    // conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
    /*
    float quilograma, libras;
    printf("Entre com um valor de massa:\n");
    scanf("%f", &libras);
    quilograma = libras*0.45;
    printf("O valor de %f libras conververtido em quilogramas e: %f", libras,quilograma);
    return 0;
    */

    //22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
    // conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
    /*
    float jardas, metros;
    printf("Entre com um valor de comprimento:\n");
    scanf("%f", &jardas);
    metros = 0.91*jardas;
    printf("O valor de %f jardas conververtido em metros e: %f", jardas,metros);
    return 0;
    */

    //23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
    // conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
    /*
    float jardas, metros;
    printf("Entre com um valor de comprimento:\n");
    scanf("%f", &jardas);
    metros = 0.91*jardas;
    printf("O valor de %f jardas conververtido em metros e: %f", jardas,metros);
    return 0;
    */

    //24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
    // fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em acres.
    /*
    float metrosQuadrados, acres;
    printf("Entre com um valor de area:\n");
    scanf("%f", &metrosQuadrados);
    acres = metrosQuadrados*0.000247;
    printf("O valor de %f metros quadrados conververtido em acres sao: %f", metrosQuadrados,acres);
    return 0;
    */

    //25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A
    // fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em acres.
    /*
    float acres, metrosQuadrados;
    printf("Entre com um valor de area:\n");
    scanf("%f", &acres);
    metrosQuadrados = acres*4048.58;
    printf("O valor de %f acres conververtido em metros quadrados sao: %f", acres,metrosQuadrados);
    return 0;
    */

    //26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
    // fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em hectares.
    /*
    float metrosQuadrados, hectares;
    printf("Entre com um valor de area:\n");
    scanf("%f", &metrosQuadrados);
    hectares = metrosQuadrados*0.0001;
    printf("O valor de %f metros quadrados conververtido em hectares e: %f", metrosQuadrados, hectares);
    return 0;
    */

    //27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A
    //fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em hectares.
    /*
    float hectares, metrosQuadrados;
    printf("Entre com um valor de area:\n");
    scanf("%f", &hectares);
    metrosQuadrados = hectares*10000;
    printf("O valor de %f hectares conververtido em metros quadrados e: %f", hectares,metrosQuadrados);
    return 0;
    */

    //28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.
    /*
    float a, b, c, resultado;
    printf("Entre com o valor de A:\n");
    scanf("%f", &a);

    printf("Entre com o valor de B:\n");
    scanf("%f", &b);

    printf("Entre com o valor de C:\n");
    scanf("%f", &c);

    resultado = a*a + b*b + c*c;
    printf("A soma dos quadrados dos tres valores sao: %f", resultado);
    return 0;
    */

    //29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
    /*
    float nota1, nota2, nota3, nota4, resultado;
    printf("Entre com a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota:\n");
    scanf("%f", &nota3);
    printf("Entre com a quarta nota:\n");
    scanf("%f", &nota4);

    resultado = (nota1+nota2+nota3+nota4)/4;
    printf("A media aritmetica das notas sao:%f", resultado);
    return 0;
    */

    //30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
    /*
    float valorReal, valorDolar;
    printf("Digite o valor em real:\n");
    scanf("%f", &valorReal);
    valorDolar = valorReal * 4.94;
    printf("O valor em dolar e: %f", valorDolar);
    return 0;
    */

    //31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
    /*
    int numero, antecessor, sucessor;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero +1;
    printf("O antecessor de %d e: %d\n", numero, antecessor);
    printf("O sucessor de %d e: %d", numero, sucessor);
    return 0;
    */

    // 32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
    /*
    int numero, antecessor, sucessor, soma;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);
    antecessor = (numero - 1) * 2;
    sucessor = (numero +1) * 3;
    soma = antecessor+sucessor;
    printf("O dobro do antecessor de %d e: %d\n", numero, antecessor);
    printf("O triplo do sucessor de %d e: %d\n", numero, sucessor);
    printf("A soma do antecessor e sucessor e: %d", soma);
    return 0;
    */

    // 33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
    /*
    float lado, area;
    printf("Entre com o tamanho da lado de um quadrado: \n");
    scanf("%f", &lado);

    area = lado*lado;
    printf("A area e: %f", area);
    return 0;
    */

    //34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
    // área do círculo é *raio2, considere  = 3.141592.
    /*
    float raio, area;
    printf("Entre com o valor do raio:\n");
    scanf("%f", &raio);

    area = PI*(raio*raio);
    printf("A area do circulo e: %f", area);
    return 0;
    */

    //35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎
    // 2 + b 2. Faça um programa que receba os valores de a e b e calcule o valor da
    // hipotenusa através da equação. Imprima o resultado dessa operação.
    /*
    int a, b, hipotenusa;
    printf("Entre com dois valores: \n");
    scanf("%d\n", &a,&b);
    hipotenusa = sqrt((a*a)+(b*b));
    printf("A hipotenusa dos valores e: %d", hipotenusa);
    return 0;
    */

    // 36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
    // cilindro circular é calculado por meio da seguinte fórmula: V =  * raio2 * altura, onde  = 3.141592.
    /*
    int altura, raio, volume;
    printf("Entre com a altura e o raio de um cilindro circular:\n");
    scanf("%d", &altura);
    scanf("%d", &raio);

    volume = PI * (raio*altura);

    printf("O Volume do Cilindro e: %d", volume);
    return 0;
    */

    //37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
    // em vista que o desconto foi de 12%.
    /*
    float valorProduto, desconto, valorFinal;
    printf("Entre com o valor do produto:\n");
    scanf("%f",&valorProduto);

    desconto = valorProduto * 0.12;
    valorFinal = valorProduto - desconto;

    printf("O valor com desconto e: %f", valorFinal);
    return 0;
    */

    //38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
    // recebeu um aumento de 25%.
    /*
    float salarioAtual, novoSalario, aumento;
    printf("Entre com o valor do salario atual:\n");
    scanf("%f",&salarioAtual);

    aumento = salarioAtual * 0.25;
    novoSalario = aumento + salarioAtual;

    printf("O valor do novo salario e: %f", novoSalario);
    return 0;
    */

    //39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
    // que da quantia total:
    // - O primeiro ganhador receberá 46%;
    // - O segundo receberá 32%;
    // - O terceiro receberá o restante; Calcule e imprima a quantia ganha por cada um dos ganhadores.
    /*
    const float qtdeTotal = 780.000;
    float primeiroGanhador, segundoGanhador, terceiroGanhador, aux;

    primeiroGanhador = qtdeTotal * 0.46;
    //printf("Porcentagem: %f", primeiroGanhador);
    segundoGanhador = qtdeTotal * 0.32;
    //printf("Porcentagem: %f", segundoGanhador);
    aux = primeiroGanhador + segundoGanhador;
    terceiroGanhador = qtdeTotal - aux;

    printf("Premio do primeiro ganhador e: %f\n", primeiroGanhador);
    printf("Premio do segundo ganhador e: %f\n", segundoGanhador);
    printf("Premio do terceiro ganhador e: %f\n", terceiroGanhador);

    return 0;
    */

    //40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
    // número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
    // sabendo-se que são descontados 8% para imposto de renda.
    /*
    const float diaria = 30.00;
    float numDiasTrabalhados, totalSerPago, aux;
    printf("Entre com o numero de dias trabalhados:\n");
    scanf("%f",&numDiasTrabalhados);

    aux = diaria * 0.08;
    totalSerPago = diaria - aux;
    totalSerPago *= numDiasTrabalhados;

    printf("Valor liquido a ser pago e: %f", totalSerPago);
    return 0;
    */

    //41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
    // trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.
    /*
    float horaDia = 5.50;
    float horaPorMes, horasTrabalhadas, bonus, salarioFim;
    //printf("Voce recebe por hora: R$ %.2f ", horaDia);
    printf("Quantas horas trabalhou esse mes:\n");
    scanf("%f", &horaPorMes);

    horasTrabalhadas = horaDia * horaPorMes;
    bonus = horasTrabalhadas * 0.10;
    salarioFim = horasTrabalhadas + bonus;

    printf("Salario a ser recebido e: R$ %.2f", salarioFim);
    return 0;
    */

    //42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
    // que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
    // de imposto sobre o salário-base.
    /*
    float salarioBase, gratificacao, imposto, salarioTotal;
    printf("Entre com salario base: R$ ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    salarioTotal = salarioBase + gratificacao - imposto;

    printf("Salario a receber e: R$ %.2f ", salarioTotal);
    return 0;
    */

    // 43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
    // - o total a pagar com desconto de 10%;
    // - o valor de cada parcela, no parcelamento de 3% sem juros;
    // - a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
    // - a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
    /*
    float valorTotal, descontoDe10, valorAPagar, parcelamento3Vezes, comissao, comissao2;
    printf("Entre com o valor total:\n");
    scanf("%f", &valorTotal);

    descontoDe10 = valorTotal * 0.10;
    valorAPagar = valorTotal - descontoDe10;

    parcelamento3Vezes = valorTotal / 3;
    comissao= valorAPagar * 0.05;
    comissao2= valorTotal * 0.05;


    printf("Total a pagar com desconto de 10%: R$%.2f\n" , valorAPagar);
    printf("Total do parcelamento em 3x sem juros: R$%.2f\n", parcelamento3Vezes);
    printf("Comissao venda a vista: R$%.2f\n", comissao);
    printf("Comissao venda parcelada: R$%.2f\n", comissao2);
    return 0;
    */

    // 44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
    // a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
    /*
    float degrau, altura, quatidade;
    printf("Insira a altura do degrau em centimentros:\n");
    scanf("%f", &degrau);

    printf("Insira a altura que deseja alcancar em metros:\n");
    scanf("%f", &altura);

    quatidade = (degrau*100) / altura;
    printf("A quantidade de degraus para alcancar a altura e:%.0f ", quatidade);
    return 0;
    */

    // 45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
    // ASCII para resolver o problema.
    /*
    char letra;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);
    letra = toupper(letra);
    printf("Letra em minuscula: %c \n" , letra);
    return 0;
    */

    // 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
    // outro número formado pelos dígitos invertidos do número lido. Exemplo:
    // numero_lido = 123, numero_gerado = 321
    /*
    int num, num1, num2, num3;
    printf("Entre com um numero inteiro de 3 digitos positivo:\n");
    scanf("%d", &num);
    if (num > 10) {
        num1 = num%10;
        num = num/10;
        num2 = num%10;
        num = num/10;
        num3 = num%10;
        num = num/10;
    }
    printf("%d%d%d\n", num1, num2, num3);
    return 0;
    */

    // 47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
    /*
    int num1, num2, num3, num4;
    printf("Entre com um numero inteiro de 4 digito: ");
    scanf("%1d%1d%1d%1d", &num1,&num2,&num3,&num4);

    printf("\n%d\n%d\n%d\n%d\n", num1, num2, num3,num4);
    return 0;
    */

    // 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
    /*
    int horas, minutos, segundos;
    printf("Entre com um valor em segundos:\n");
    scanf("%d", &segundos);

    horas = segundos/3600;
    minutos = (segundos-(horas*3600))/60;
    segundos -=(horas*3600)-(minutos*60);

    printf("%dh: %dm: %ds: ", horas,minutos,segundos);
    return 0;
    */

    // 49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
    // segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
    // minuto e segundo) do termino da mesma.


    // 50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
    // idade e do ano atual.
    /*
    int idade, anoAtual, anoNascimento;
    printf("Entre com uma idade: \n");
    scanf("%d", &idade);
    printf("Entre com o ano em que estamos: \n");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Voce nasceu em: %d", anoNascimento);
    return 0;
    */

    // 51. Escreva um programa que leia as coordenadas x e y de pontos no R
    // 2 e calcule sua distância da origem (0, 0).
    /*
    float x, y, r;
    printf("Entre com a coordenada de X:\n");
    scanf("%f", &x);
    printf("Entre com a coordenada de Y:\n");
    scanf("%f", &y);

    r = sqrt (pow(x,2) + pow(y,2));

    printf("A distancia e: %.2f", r);
    return 0;
    */

    // 52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
    // proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
    // leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
    // prêmio com base no valor investido.
    /*
    float amg1, amg2, amg3, valorArrecadado;
    float premio = 980.000;
    float pct1, pct2, pct3;
    printf("Valor aposta amigo 1: ");
    scanf("%f", &amg1);
    printf("\nValor aposta amigo 2: ");
    scanf("%f", &amg2);
    printf("\nValor aposta amigo 3: ");
    scanf("%f", &amg3);

    valorArrecadado = amg1 + amg2 + amg3;
    printf("\nValor arrecadado para aposta: %.2f" , valorArrecadado);
    printf("\nO valor do premio eh: %.3f" , premio);
    pct1 = (amg1 * 100)/valorArrecadado;
    pct2 = (amg2 * 100)/valorArrecadado;
    pct3 = (amg3 * 100)/valorArrecadado;

    printf("\nAmigo 1 apostou: %.2f porcento do total arrecadado.", pct1);
    printf("\nAmigo 2 apostou: %.2f porcento do total arrecadado.", pct2);
    printf("\nAmigo 3 apostou: %.2f porcento do total arrecadado.", pct3);
    printf("\nAmigo 1 recebera: R$%.2f.", premio * pct1/100);
    printf("\nAmigo 2 recebera: R$%.2f.", premio * pct2/100);
    printf("\nAmigo 3 recebera: R$%.2f.", premio * pct3/100);
    return 0;
    */

    // 53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
    // como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/
    /*
    float largura, comprimento, preco, total;
    printf("Qual a largura do terreno: ");
    scanf("%f", &largura);
    printf("\nQual o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("\nQual o preco do terreno: R$");
    scanf("%f", &preco);
    total = (comprimento * largura * preco);
    printf("\nVoce gastara para cercar o terreno: R$%.2f", total);
    return 0;
    */
}
