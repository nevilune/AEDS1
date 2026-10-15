/*

Exemplo0400 - v0.0. - 29 / 08 / 2026
Autor: Julia Camilo Neves

*/


// dependencias
#include "io.h"

/**
Method_01 - Repeticao para ler certa quantidade de valores.
*/
void method_01()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;

    IO_id("Method 01 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        IO_printf("\n%s%d", "valor = ", valor);

        controle = controle + 1;
    } // end while

    IO_pause("Apertar ENTER para continuar");
} // end method_01 ( )

/**
Funcao para determinar se valor inteiro e' positivo.
*/
bool positive(int x)
{
    bool result = false;

    if (x > 0)
    {
        result = true;
    } // end if

    return (result);
} // end positive ( )

/**
Method_02 - Ler valores e contar positivos.
*/
void method_02()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    IO_id("Method02 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (positive(valor))
        {
            contador = contador + 1;
        } // end if

        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Positivos = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_02 ( )

/**
Funcao para determinar se valor inteiro pertence a intervalo aberto.
*/
bool belongsTo(int x, int inferior, int superior)
{
    bool result = false;

    if (inferior < x && x < superior)
    {
        result = true;
    } // end if

    return (result);
} // end belongsTo ( )

/**
Method_03 - Ler valores e contar positivos menores que 100.
*/
void method_03()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    IO_id("Method_03 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (belongsTo(valor, 0, 100))
        {
            contador = contador + 1;
        } // end if

        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Positivos menores que 100 = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_03 ( )

/**
Funcao para determinar se valor inteiro e' par.
*/
bool even(int x)
{
    bool result = false;

    if (x % 2 == 0)
    {
        result = true;
    } // end if

    return (result);
} // end even ( )

/**
Method_04 - Ler valores e contar positivos menores que 100 e pares.
*/
void method_04()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;

    IO_id("Method_04 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (belongsTo(valor, 0, 100) && even(valor))
        {
            contador = contador + 1;
        } // end if

        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_04 ( )

/**
Method_05 - Combinar funcoes.
*/
void method_05()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    bool ok = false;

    IO_id("EXEMPLO0405 - Method05 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        ok = belongsTo(valor, 0, 100);
        ok = ok && even(valor);

        if (ok)
        {
            contador = contador + 1;
        } // end if

        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_05 ( )

/**
Funcao para determinar se caractere e' letra minuscula.
*/
bool isLowerCase(char x)
{
    bool result = false;

    if ('a' <= x && x <= 'z')
    {
        result = true;
    } // end if

    return (result);
} // end isLowerCase ( )

/**
Method_06 - Ler palavra e contar letras minusculas.
*/
void method_06()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method06 - v0.0");

    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        } // end if
    } // end for

    IO_printf("%s%d\n", "Minusculas = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_06 ( )

/**
Method_07 - Ler palavra, contar e mostrar letras minusculas.
*/
void method_07()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method07 - v0.0");

    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isLowerCase(simbolo))
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        } // end if
    } // end for

    IO_printf("\n%s%d\n", "Minusculas = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_07 ( )

/**
Method_08 - Ler palavra, contar e mostrar letras minusculas (alternativo).
*/
void method_08()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    chars minusculas = IO_new_chars(STR_SIZE);

    strcpy(minusculas, STR_EMPTY);

    IO_id("Method08 - v0.0");

    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isLowerCase(simbolo))
        {
            minusculas = IO_concat(minusculas, IO_toString_c(simbolo));
            contador = contador + 1;
        } // end if
    } // end for

    IO_printf("\n%s%d [%s]\n", "Minusculas = ", contador, minusculas);

    IO_pause("Apertar ENTER para continuar");
} // end method_08 ( )

/**
Funcao para determinar se caractere e' digito.
*/
bool isDigit(char x)
{
    bool result = false;

    if ('0' <= x && x <= '9')
    {
        result = true;
    } // end if

    return (result);
} // end isDigit ( )

/**
Method_09 - Ler palavra e contar os algarismos.
*/
void method_09()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method09 - v0.0");

    palavra = IO_readstring("Entrar com caracteres: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isDigit(simbolo))
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        } // end if
    } // end for

    IO_printf("\n%s%d\n", "Algarismos = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_09 ( )

/**
Funcao alternativa para determinar se caractere e' digito.
*/
bool isADigit(char x)
{
    return ('0' <= x && x <= '9');
} // end isADigit ( )

/**
Funcao para concatenar uma cadeia de caracteres mais um digito.
*/
chars concatADigit(chars string, char digit)
{
    return (IO_concat(string, IO_toString_c(digit)));
} // end concatADigit ( )

/**
Method_10 - Ler palavra e separar os algarismos.
*/
void method_10()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars digitos = IO_new_chars(STR_SIZE);

    strcpy(digitos, STR_EMPTY);

    IO_id("Method_10 - v0.0");

    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];

        if (isADigit(simbolo))
        {
            digitos = concatADigit(digitos, simbolo);
        } // end if
    } // end for

    IO_printf("\n%s%d [%s]\n", "Algarismos = ", strlen(digitos), digitos);

    IO_pause("Apertar ENTER para continuar");
} // end method_10 ( )

/**
Funcao para testar se valor real pertence a intervalo fechado.
*/
bool belongsToClosed(double x, double inferior, double superior)
{
    bool result = false;

    if (inferior <= x && x <= superior)
    {
        result = true;
    } // end if

    return (result);
} // end belongsToClosed ( )

/**
Method_11 (0411) - Ler valores reais e contar dentro e fora
de um intervalo fechado.
*/
void method_11()
{
    int quantidade = 0;
    int controle = 0;
    int dentro = 0;
    int fora = 0;
    double inferior = 0.0;
    double superior = 0.0;
    double valor = 0.0;

    IO_id("Method_11 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade: ");
    inferior = IO_readdouble("Entrar com o limite inferior: ");
    superior = IO_readdouble("Entrar com o limite superior: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readdouble(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        if (belongsToClosed(valor, inferior, superior))
        {
            dentro = dentro + 1;
        }
        else
        {
            fora = fora + 1;
        } // end if

        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Dentro = ", dentro);
    IO_printf("%s%d\n", "Fora = ", fora);

    IO_pause("Apertar ENTER para continuar");
} // end method_11 ( )

/**
Funcao para testar se caractere e' letra minuscula entre 'l' e 'q'.
*/
bool isLowerLQ(char x)
{
    return (isLowerCase(x) && 'l' <= x && x <= 'q');
} // end isLowerLQ ( )

/**
Method_12 (0412) - Contar letras minusculas entre l e q.
*/
void method_12()
{
    chars cadeia = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    int contador = 0;

    IO_id("Method_12 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");
    tamanho = strlen(cadeia);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLowerLQ(cadeia[posicao]))
        {
            contador = contador + 1;
        } // end if
    } // end for

    IO_printf("%s%d\n", "Minusculas entre l e q = ", contador);

    IO_pause("Apertar ENTER para continuar");
} // end method_12 ( )

/**
Funcao para contar letras minusculas entre l e q.
*/
int countLowerLQ(const char cadeia[])
{
    int tamanho = strlen(cadeia);
    int posicao = 0;
    int contador = 0;

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLowerLQ(cadeia[posicao]))
        {
            contador = contador + 1;
        } // end if
    } // end for

    return (contador);
} // end countLowerLQ ( )

/**
Method_13 (0413) - Contar por meio de funcao.
*/
void method_13()
{
    chars cadeia = IO_new_chars(STR_SIZE);

    IO_id("Method_13 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");

    IO_printf("%s%d\n", "Minusculas entre l e q = ",
              countLowerLQ(cadeia));

    IO_pause("Apertar ENTER para continuar");
} // end method_13 ( )

/**
Funcao para separar letras minusculas entre l e q.
*/
chars separateLowerLQ(const char cadeia[])
{
    chars resultado = IO_new_chars(STR_SIZE);
    int tamanho = strlen(cadeia);
    int posicao = 0;

    strcpy(resultado, STR_EMPTY);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLowerLQ(cadeia[posicao]))
        {
            resultado = IO_concat(resultado, IO_toString_c(cadeia[posicao]));
        } // end if
    } // end for

    return (resultado);
} // end separateLowerLQ ( )

/**
Method_14 (0414) - Separar letras minusculas entre l e q.
*/
void method_14()
{
    chars cadeia = IO_new_chars(STR_SIZE);
    chars resultado = IO_new_chars(STR_SIZE);

    IO_id("Method_14 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");
    resultado = separateLowerLQ(cadeia);

    IO_printf("%s%s\n", "Minusculas entre l e q = ", resultado);

    IO_pause("Apertar ENTER para continuar");
} // end method_14 ( )

/**
Funcao para determinar se caractere e' letra maiuscula.
*/
bool isUpperCase(char x)
{
    bool result = false;

    if ('A' <= x && x <= 'Z')
    {
        result = true;
    } // end if

    return (result);
} // end isUpperCase ( )

/**
Funcao para determinar se caractere e' letra entre l/L e q/Q.
*/
bool isLetterLQ(char x)
{
    return ((isLowerCase(x) && 'l' <= x && x <= 'q') ||
            (isUpperCase(x) && 'L' <= x && x <= 'Q'));
} // end isLetterLQ ( )

/**
Funcao para contar letras entre l/L e q/Q.
*/
int countLetterLQ(const char cadeia[])
{
    int tamanho = strlen(cadeia);
    int posicao = 0;
    int contador = 0;

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLetterLQ(cadeia[posicao]))
        {
            contador = contador + 1;
        } // end if
    } // end for

    return (contador);
} // end countLetterLQ ( )

/**
Method_15 (0415) - Contar letras entre l/L e q/Q.
*/
void method_15()
{
    chars cadeia = IO_new_chars(STR_SIZE);

    IO_id("Method_15 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");

    IO_printf("%s%d\n", "Letras entre l/L e q/Q = ",
              countLetterLQ(cadeia));

    IO_pause("Apertar ENTER para continuar");
} // end method_15 ( )

/**
Funcao para separar letras entre l/L e q/Q.
*/
chars separateLetterLQ(const char *cadeia)
{
    chars resultado = IO_new_chars(STR_SIZE);
    int tamanho = strlen(cadeia);
    int posicao = 0;

    strcpy(resultado, STR_EMPTY);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLetterLQ(cadeia[posicao]))
        {
            resultado = IO_concat(resultado, IO_toString_c(cadeia[posicao]));
        } // end if
    } // end for

    return (resultado);
} // end separateLetterLQ ( )

/**
Method_16 (0416) - Separar letras entre l/L e q/Q.
*/
void method_16()
{
    chars cadeia = IO_new_chars(STR_SIZE);
    chars resultado = IO_new_chars(STR_SIZE);

    IO_id("Method_16 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");
    resultado = separateLetterLQ(cadeia);

    IO_printf("%s%s\n", "Letras entre l/L e q/Q = ", resultado);

    IO_pause("Apertar ENTER para continuar");
} // end method_16 ( )

/**
Funcao para contar digitos impares em uma cadeia.
*/
int countOddDigits(const char cadeia[])
{
    int tamanho = strlen(cadeia);
    int posicao = 0;
    int contador = 0;
    int codigo = 0;

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isDigit(cadeia[posicao]))
        {
            codigo = (int)cadeia[posicao] - (int)'0';

            if (codigo % 2 != 0)
            {
                contador = contador + 1;
            } // end if
        } // end if
    } // end for

    return (contador);
} // end countOddDigits ( )

/**
Method_17 (0417) - Contar digitos impares.
*/
void method_17()
{
    chars cadeia = IO_new_chars(STR_SIZE);

    IO_id("Method_17 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");

    IO_printf("%s%d\n", "Digitos impares = ", countOddDigits(cadeia));

    IO_pause("Apertar ENTER para continuar");
} // end method_17 ( )

/**
Funcao para determinar se caractere e' letra.
*/
bool isLetter(char x)
{
    return (isLowerCase(x) || isUpperCase(x));
} // end isLetter ( )

/**
Funcao para determinar se caractere e' alfanumerico.
*/
bool isAlphaNumeric(char x)
{
    return (isLetter(x) || isDigit(x));
} // end isAlphaNumeric ( )

/**
Funcao para separar simbolos nao alfanumericos.
*/
chars separateNonAlphanumeric(char *cadeia)
{
    chars resultado = IO_new_chars(STR_SIZE);
    int tamanho = strlen(cadeia);
    int posicao = 0;

    strcpy(resultado, STR_EMPTY);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (!isAlphaNumeric(cadeia[posicao]))
        {
            resultado = IO_concat(resultado, IO_toString_c(cadeia[posicao]));
        } // end if
    } // end for

    return (resultado);
} // end separateNonAlphanumeric ( )

/**
Method_18 (0418) - Mostrar simbolos nao alfanumericos.
*/
void method_18()
{
    chars cadeia = IO_new_chars(STR_SIZE);
    chars resultado = IO_new_chars(STR_SIZE);

    IO_id("Method_18 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");
    resultado = separateNonAlphanumeric(cadeia);

    IO_printf("%s%s\n", "Nao alfanumericos = ", resultado);

    IO_pause("Apertar ENTER para continuar");
} // end method_18 ( )

/**
Funcao para separar simbolos alfanumericos.
*/
chars separateAlphanumeric(const char cadeia[])
{
    chars resultado = IO_new_chars(STR_SIZE);
    int tamanho = strlen(cadeia);
    int posicao = 0;

    strcpy(resultado, STR_EMPTY);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLetter(cadeia[posicao]) || isDigit(cadeia[posicao]))
        {
            resultado = IO_concat(resultado, IO_toString_c(cadeia[posicao]));
        } // end if
    } // end for

    return (resultado);
} // end separateAlphanumeric ( )

/**
Method_19 (0419) - Mostrar simbolos alfanumericos.
*/
void method_19()
{
    chars cadeia = IO_new_chars(STR_SIZE);
    chars resultado = IO_new_chars(STR_SIZE);

    IO_id("Method_19 - v0.0");

    cadeia = IO_readstring("Entrar com uma sequencia: ");
    resultado = separateAlphanumeric(cadeia);

    IO_printf("%s%s\n", "Alfanumericos = ", resultado);

    IO_pause("Apertar ENTER para continuar");
} // end method_19 ( )

/**
Funcao para contar simbolos alfanumericos.
*/
int countAlphanumeric(const char cadeia[])
{
    int tamanho = strlen(cadeia);
    int posicao = 0;
    int contador = 0;

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isLetter(cadeia[posicao]) || isDigit(cadeia[posicao]))
        {
            contador = contador + 1;
        } // end if
    } // end for

    return (contador);
} // end countAlphanumeric ( )

/**
Method_20 (0420) - Ler cadeias, contar alfanumericos e acumular.
*/
void method_20()
{
    chars cadeia = IO_new_chars(STR_SIZE);
    int quantidade = 0;
    int controle = 0;
    int contador = 0;
    int total = 0;

    IO_id("Method_20 - v0.0");

    quantidade = IO_readint("Entrar com uma quantidade de cadeias: ");

    controle = 1;
    while (controle <= quantidade)
    {
        cadeia = IO_readstring(IO_concat(
            IO_concat("", IO_toString_d(controle)),
            ": "));

        contador = countAlphanumeric(cadeia);
        total = total + contador;

        IO_printf("%s%d\n", "Alfanumericos = ", contador);

        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Total acumulado = ", total);

    IO_pause("Apertar ENTER para continuar");
} // end method_20 ( )

/*
Funcao principal.
*/
int main()
{
    int x = 0;

    do
    {
        IO_id("Exemplo0400 - Programa - v0.0");

        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Method01");
        IO_println(" 2 - Method02");
        IO_println(" 3 - Method03");
        IO_println(" 4 - Method04");
        IO_println(" 5 - Method05");
        IO_println(" 6 - Method06");
        IO_println(" 7 - Method07");
        IO_println(" 8 - Method08");
        IO_println(" 9 - Method09");
        IO_println("10 - Method10");
        IO_println("11 - Method11");
        IO_println("12 - Method12");
        IO_println("13 - Method13");
        IO_println("14 - Method14");
        IO_println("15 - Method15");
        IO_println("16 - Method16");
        IO_println("17 - Method17");
        IO_println("18 - Method18");
        IO_println("19 - Method19");
        IO_println("20 - Method20");
        IO_println("");

        x = IO_readint("Entrar com uma opcao: ");

        switch (x)
        {
        case 0: break;
        case 1: method_01(); break;
        case 2: method_02(); break;
        case 3: method_03(); break;
        case 4: method_04(); break;
        case 5: method_05(); break;
        case 6: method_06(); break;
        case 7: method_07(); break;
        case 8: method_08(); break;
        case 9: method_09(); break;
        case 10: method_10(); break;
        case 11: method_11(); break;
        case 12: method_12(); break;
        case 13: method_13(); break;
        case 14: method_14(); break;
        case 15: method_15(); break;
        case 16: method_16(); break;
        case 17: method_17(); break;
        case 18: method_18(); break;
        case 19: method_19(); break;
        case 20: method_20(); break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,20] (",
                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);

    IO_pause("Apertar ENTER para terminar");

    return (0);
} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- previsao de testes

01.) n = 10 e [6.3:24.5] com
{5.1,10.5,12.4,14.2,15.3,18.3,20.4,21.7,23.1,24.2}
02.) AaKkLmM0*Nx
03.) AaKkLmM0*Nx
04.) AaKkLmM0*Nx
05.) AaKkLmM0*Nx
06.) AaKkLmM0*Nx
07.) A1b2C3d4E5f6
08.) (A1b2+C3d4)*E5f6
09.) (A1b2+C3d4)*E5f6
10.) {(A1b2+C3d4)*E5f6,[P&&Q]||[R&&!S],(a<b&&b<c)}

---------------------------------------------- historico
Versao Data Modificacao
0.1

*/

