/*

Exercicio04 - v0.0. - 29 / 08 / 2026
Autor: Julia Camilo Neves

*/


// dependencias
#include "io.h"

/**
 Funcao para determinar se valor real pertence a intervalo fechado.
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
 Method_0411 - Ler valores reais e contar quantos estao dentro/fora de um intervalo.
*/
void method_0411(void)
{
    int quantidade = 0;
    int controle = 0;
    double inferior = 0.0;
    double superior = 0.0;
    double valor = 0.0;
    int dentro = 0;
    int fora = 0;

    IO_id("Method_0411 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    inferior = IO_readdouble("Limite inferior do intervalo: ");
    superior = IO_readdouble("Limite superior do intervalo: ");

    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readdouble(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
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

    IO_printf("%s%d\n", "Dentro do intervalo = ", dentro);
    IO_printf("%s%d\n", "Fora do intervalo = ", fora);
    IO_pause("Apertar ENTER para continuar");
} // end method_0411 ( )

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
 Method_0412 - Ler sequencia, contar e mostrar minusculas entre 'l' e 'q'.
*/
void method_0412(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    IO_id("Method_0412 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    tamanho = strlen(sequencia);

    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = sequencia[posicao];
        if (isLowerCase(simbolo) && 'l' <= simbolo && simbolo <= 'q')
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        } // end if
    } // end for

    IO_printf("\n%s%d\n", "Minusculas entre 'l' e 'q' = ", contador);
    IO_pause("Apertar ENTER para continuar");
} // end method_0412 ( )

/**
 Funcao para contar minusculas entre 'l' e 'q' em uma cadeia de caracteres.
*/
int countLowerLQ(chars cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if (isLowerCase(simbolo) && 'l' <= simbolo && simbolo <= 'q')
        {
            contador = contador + 1;
        } // end if
    } // end for
    return (contador);
} // end countLowerLQ ( )

/**
 Method_0413 - Ler sequencia, mostrar quantidade de minusculas entre 'l' e 'q', via funcao.

*/
void method_0413(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    int contador = 0;

    IO_id("Method_0413 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    contador = countLowerLQ(sequencia);

    IO_printf("%s%d\n", "Minusculas entre 'l' e 'q' = ", contador);
    IO_pause("Apertar ENTER para continuar");
} // end method_0413 ( )

/**
 Funcao para separar as minusculas entre 'l' e 'q' de uma cadeia de caracteres.
*/
chars filterLowerLQ(chars cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars resultado = IO_new_chars(STR_SIZE);
    strcpy(resultado, STR_EMPTY);

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if (isLowerCase(simbolo) && 'l' <= simbolo && simbolo <= 'q')
        {
            resultado = IO_concat(resultado, IO_toString_c(simbolo));
        } // end if
    } // end for
    return (resultado);
} // end filterLowerLQ ( )

/**
 Method_0414 - Ler sequencia, mostrar as minusculas entre 'l' e 'q', via funcao.
*/
void method_0414(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    chars minusculas = IO_new_chars(STR_SIZE);

    IO_id("Method_0414 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    minusculas = filterLowerLQ(sequencia);

    IO_printf("%s[%s]\n", "Minusculas entre 'l' e 'q' = ", minusculas);
    IO_pause("Apertar ENTER para continuar");
} // end method_0414 ( )

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
 Funcao para contar letras (maiusc./minusc.) entre 'l'/'L' e 'q'/'Q'.
*/
int countLetterLQ(const char cadeia[])
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if ((isLowerCase(simbolo) && 'l' <= simbolo && simbolo <= 'q') ||
            (isUpperCase(simbolo) && 'L' <= simbolo && simbolo <= 'Q'))
        {
            contador = contador + 1;
        } // end if
    } // end for
    return (contador);
} // end countLetterLQ ( )

/**
 Method_0415 - Ler sequencia, mostrar quantidade de letras entre 'l'/'L' e 'q'/'Q'.
*/
void method_0415(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    int contador = 0;

    IO_id("Method_0415 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    contador = countLetterLQ(sequencia);

    IO_printf("%s%d\n", "Letras entre 'l'/'L' e 'q'/'Q' = ", contador);
    IO_pause("Apertar ENTER para continuar");
} // end method_0415 ( )

/**
 Funcao para separar as letras (maiusc./minusc.) entre 'l'/'L' e 'q'/'Q'.
*/
chars filterLetterLQ(const char *cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars resultado = IO_new_chars(STR_SIZE);
    strcpy(resultado, STR_EMPTY);

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if ((isLowerCase(simbolo) && 'l' <= simbolo && simbolo <= 'q') ||
            (isUpperCase(simbolo) && 'L' <= simbolo && simbolo <= 'Q'))
        {
            resultado = IO_concat(resultado, IO_toString_c(simbolo));
        } // end if
    } // end for
    return (resultado);
} // end filterLetterLQ ( )

/**
 Method_0416 - Ler sequencia, mostrar as letras entre 'l'/'L' e 'q'/'Q', via funcao.
*/
void method_0416(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    chars letras = IO_new_chars(STR_SIZE);

    IO_id("Method_0416 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    letras = filterLetterLQ(sequencia);

    IO_printf("%s[%s]\n", "Letras entre 'l'/'L' e 'q'/'Q' = ", letras);
    IO_pause("Apertar ENTER para continuar");
} // end method_0416 ( )

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
 Funcao para determinar se caractere e' digito impar.
*/
bool isOddDigit(char x)
{
    bool result = false;
    if (isDigit(x) && (((int)x - '0') % 2 == 1))
    {
        result = true;
    } // end if
    return (result);
} // end isOddDigit ( )

/**
 Funcao para contar digitos impares em uma cadeia de caracteres.
*/
int countOddDigits(chars cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if (isOddDigit(simbolo))
        {
            contador = contador + 1;
        } // end if
    } // end for
    return (contador);
} // end countOddDigits ( )

/**
 Method_0417 - Ler sequencia, mostrar quantidade de digitos impares, via funcao.

*/
void method_0417(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    int contador = 0;

    IO_id("Method_0417 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    contador = countOddDigits(sequencia);

    IO_printf("%s%d\n", "Digitos impares = ", contador);
    IO_pause("Apertar ENTER para continuar");
} // end method_0417 ( )

/**
 Funcao para determinar se caractere e' letra.
*/
bool isLetter(char x)
{
    bool result = false;
    if (isLowerCase(x) || isUpperCase(x))
    {
        result = true;
    } // end if
    return (result);
} // end isLetter ( )

/**
 Funcao para separar os simbolos nao alfanumericos de uma cadeia de caracteres.
*/
chars filterNonAlnum(char *cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars resultado = IO_new_chars(STR_SIZE);
    strcpy(resultado, STR_EMPTY);

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if (!isLetter(simbolo) && !isDigit(simbolo))
        {
            resultado = IO_concat(resultado, IO_toString_c(simbolo));
        } // end if
    } // end for
    return (resultado);
} // end filterNonAlnum ( )

/**
 Method_0418 - Ler sequencia, mostrar os simbolos nao alfanumericos, via funcao.
*/
void method_0418(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    chars simbolos = IO_new_chars(STR_SIZE);

    IO_id("Method_0418 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    simbolos = filterNonAlnum(sequencia);

    IO_printf("%s[%s]\n", "Nao alfanumericos = ", simbolos);
    IO_pause("Apertar ENTER para continuar");
} // end method_0418 ( )

/**
 Funcao para determinar se caractere e' alfanumerico (letra ou digito).
*/
bool isAlnum(char x)
{
    return (isLetter(x) || isDigit(x));
} // end isAlnum ( )

/**
 Funcao para separar os simbolos alfanumericos de uma cadeia de caracteres.
*/
chars filterAlnum(char *cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars resultado = IO_new_chars(STR_SIZE);
    strcpy(resultado, STR_EMPTY);

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if (isAlnum(simbolo))
        {
            resultado = IO_concat(resultado, IO_toString_c(simbolo));
        } // end if
    } // end for
    return (resultado);
} // end filterAlnum ( )

/**
 Method_0419 - Ler sequencia, mostrar os simbolos alfanumericos, via funcao.
*/
void method_0419(void)
{
    chars sequencia = IO_new_chars(STR_SIZE);
    chars simbolos = IO_new_chars(STR_SIZE);

    IO_id("Method_0419 - v0.0");
    sequencia = IO_readstring("Entrar com uma sequencia de caracteres: ");
    simbolos = filterAlnum(sequencia);

    IO_printf("%s[%s]\n", "Alfanumericos = ", simbolos);
    IO_pause("Apertar ENTER para continuar");
} // end method_0419 ( )

/**
 Funcao para contar simbolos alfanumericos em uma cadeia de caracteres.
*/
int countAlnum(chars cadeia)
{
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;

    tamanho = strlen(cadeia);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = cadeia[posicao];
        if (isAlnum(simbolo))
        {
            contador = contador + 1;
        } // end if
    } // end for
    return (contador);
} // end countAlnum ( )

/**
 Funcao para acumular um total.
*/
int accumulate(int total, int parcela)
{
    return (total + parcela);
} // end accumulate ( )

/**
 Method_0420 - Ler varias sequencias, mostrar/contar alfanumericos de cada uma
 e acumular o total.
*/
void method_0420(void)
{
    int quantidade = 0;
    int controle = 0;
    chars palavra = IO_new_chars(STR_SIZE);
    int contador = 0;
    int total = 0;

    IO_id("Method_0420 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade de sequencias: ");

    controle = 1;
    while (controle <= quantidade)
    {
        palavra = IO_readstring(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        contador = countAlnum(palavra);
        IO_printf("%s%d\n", "Alfanumericos = ", contador);
        total = accumulate(total, contador);
        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Total acumulado = ", total);
    IO_pause("Apertar ENTER para continuar");
} // end method_0420 ( )

/**
 Method_04E1 - Ler varias sequencias (com espacos), contar alfanumericos de cada uma
 e acumular o total apenas das que tiverem mais de 3 simbolos alfanumericos.
*/
void method_04E1(void)
{
    int quantidade = 0;
    int controle = 0;
    chars linha = IO_new_chars(STR_SIZE);
    int contador = 0;
    int total = 0;

    IO_id("Method_04E1 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade de sequencias: ");

    controle = 1;
    while (controle <= quantidade)
    {
        linha = IO_readln("Entrar com uma sequencia de caracteres: ");
        contador = countAlnum(linha);
        IO_printf("%s%d\n", "Alfanumericos = ", contador);
        if (contador > 3)
        {
            total = accumulate(total, contador);
        } // end if
        controle = controle + 1;
    } // end while

    IO_printf("%s%d\n", "Total (sequencias com mais de 3 simbolos) = ", total);
    IO_pause("Apertar ENTER para continuar");
} // end method_04E1 ( )

/**
 Funcao para determinar qual das duas cadeias de caracteres possui
 menor quantidade de digitos.
*/
chars fewerDigits(chars a, chars b)
{
    int tamanho = 0;
    int posicao = 0;
    int digitos_a = 0;
    int digitos_b = 0;

    tamanho = strlen(a);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isDigit(a[posicao]))
        {
            digitos_a = digitos_a + 1;
        } // end if
    } // end for

    tamanho = strlen(b);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        if (isDigit(b[posicao]))
        {
            digitos_b = digitos_b + 1;
        } // end if
    } // end for

    if (digitos_a < digitos_b)
    {
        return (a);
    }
    else if (digitos_b < digitos_a)
    {
        return (b);
    } // end if
    return (STR_EMPTY);
} // end fewerDigits ( )

/**
 Method_04E2 - Ler duas sequencias e mostrar qual possui menor quantidade de digitos.
*/
void method_04E2(void)
{
    chars sequencia1 = IO_new_chars(STR_SIZE);
    chars sequencia2 = IO_new_chars(STR_SIZE);
    chars menor = IO_new_chars(STR_SIZE);

    IO_id("Method_04E2 - v0.0");
    sequencia1 = IO_readstring("Entrar com a primeira sequencia: ");
    sequencia2 = IO_readstring("Entrar com a segunda sequencia: ");
    menor = fewerDigits(sequencia1, sequencia2);

    if (strlen(menor) == 0)
    {
        IO_println("As duas sequencias possuem a mesma quantidade de digitos.");
    }
    else
    {
        IO_printf("%s[%s]\n", "Sequencia com menos digitos = ", menor);
    } // end if

    IO_pause("Apertar ENTER para continuar");
} // end method_04E2 ( )

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    int x = 0;

    do
    {
        IO_id("EXERCICIOS04 - Programa - v0.0");
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println("11 - Method_0411");
        IO_println("12 - Method_0412");
        IO_println("13 - Method_0413");
        IO_println("14 - Method_0414");
        IO_println("15 - Method_0415");
        IO_println("16 - Method_0416");
        IO_println("17 - Method_0417");
        IO_println("18 - Method_0418");
        IO_println("19 - Method_0419");
        IO_println("20 - Method_0420");
        IO_println("21 - Method_04E1");
        IO_println("22 - Method_04E2");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        switch (x)
        {
        case 11: method_0411(); break;
        case 12: method_0412(); break;
        case 13: method_0413(); break;
        case 14: method_0414(); break;
        case 15: method_0415(); break;
        case 16: method_0416(); break;
        case 17: method_0417(); break;
        case 18: method_0418(); break;
        case 19: method_0419(); break;
        case 20: method_0420(); break;
        case 21: method_04E1(); break;
        case 22: method_04E2(); break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes previstas (",
                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);

    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )

/*
  ---------------------------------------------- previsao de testes

  Method_0411
  a.) n = 10 e [ 6.3 : 24.5 ] com { 5.1, 10.5, 12.4, 14.2, 15.3, 18.3, 20.4, 21.7, 23.1, 24.2 }

  Method_0412 a Method_0416
  a.) sequencia = AaKkLmM0*Nx

  Method_0417
  a.) sequencia = A1b2C3d4E5f6

  Method_0418 e Method_0419
  a.) sequencia = (A1b2+C3d4)*E5f6

  Method_0420
  a.) sequencias = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S], (a<b&&b<c) }

  Method_04E1
  a.) sequencia = (A1b21 + C3d45) * E5f67

  Method_04E2
  a.) sequencias = { A1b2, C3d4E5 }


*/
