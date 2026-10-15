/*
 Exercicio0500 - v0.0. - 04 / 09 / 2026
 Author: Julia Camilo Neves
 */ 

// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h>
#include "io.h"

/**
 Method_11a 
 @param x - quantidade de valores a serem mostrados
*/

int method_11a ( int x )
{
 return ( 4 * x );
}


void method_11 ( )
{
 int n = 0;
 int y = 1;
 IO_id ( "Method_11 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 while ( y <= n )
 {
 IO_printf ( "%d: %d\n", y, method_11a(y) );
 y = y + 1;
 }
 IO_pause ( "Apertar ENTER para continuar" );
}


int method_12a ( int x )
{
 return ( 6 * x );
}


void method_12 ( )
{
 int n = 0;
 int y = 1;
 IO_id ( "Method_12 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 while ( y <= n )
 {
 IO_printf ( "%d: %d\n", y, method_12a(y) );
 y = y + 1;
 }
 IO_pause ( "Apertar ENTER para continuar" );
}


int method_13a ( int x )
{
 return ( (int)pow(4, x) );
}


void method_13 ( )
{
 int n = 0;
 int y = 0;
 IO_id ( "Method_13 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 for ( y = n; y >= 1; y = y - 1 )
 {
 IO_printf ( "%d: %d\n", y, method_13a(y) );
 }
 IO_pause ( "Apertar ENTER para continuar" );
}


int method_14a ( int x )
{
 return ( 4 * x );
}


void method_14 ( )
{
 int n = 0;
 int y = 1;
 IO_id ( "Method_14 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 while ( y <= n )
 {
 IO_printf ( "%d: 1/%d = %lf\n",
 y, method_14a(y),
 1.0 / method_14a(y) );
 y = y + 1;
 }
 IO_pause ( "Apertar ENTER para continuar" );
}


double method_15a ( double x, int y )
{
 return ( 1.0 / pow(x, y) );
}


void method_15 ( )
{
 double x = 0.0;
 int n = 0;
 int y = 0;
 int expoente = 1;
 IO_id ( "Method_15 - v0.0" );
 x = IO_readdouble ( "Valor de x: " );
 n = IO_readint ( "Quantidade: " );
 for ( y = 1; y <= n; y = y + 1 )
 {
 if ( y == 1 )
 {
 IO_printf ( "%d: 1\n", y );
 }
 else
 {
 expoente = 2 * y - 1;
 IO_printf ( "%d: 1/%lf^%d = %lf\n",
 y, x, expoente,
 method_15a(x, expoente) );
 }
 }
 IO_pause ( "Apertar ENTER para continuar" );
}


int method_16a ( int x )
{
 int soma = 0;
 int valor = 4;
 int contador = 0;
 while ( contador < x )
 {
 if ( valor % 2 == 0 && valor % 3 != 0 )
 {
 soma = soma + valor;
 contador = contador + 1;
 }
 valor = valor + 1;
 }
 return ( soma );
}


void method_16 ( )
{ int n = 0;
 int soma = 0;
 IO_id ( "Method_16 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 soma = method_16a(n);
 IO_printf ( "soma = %d\n", soma );
 IO_pause ( "Apertar ENTER para continuar" );
}


double method_17a ( int x )
{
 double soma = 0.0;
 int valor = 3;
 int contador = 0;
 while ( contador < x )
 {
 if ( valor % 3 == 0 && valor % 5 != 0 )
 {
 soma = soma + 1.0 / valor;
 contador = contador + 1;
 }
 valor = valor + 3;
 }
 return ( soma );
}


void method_17 ( )
{
 int n = 0;
 double soma = 0.0;
 IO_id ( "Method_17 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 soma = method_17a(n);
 IO_printf ( "soma = %lf\n", soma );
 IO_pause ( "Apertar ENTER para continuar" );
}


int method_18a ( int x )
{
 int soma = 0;
 int valor = 3;
 int incremento = 1;
 int contador = 0;
 while ( contador <= x )
 {
 soma = soma + valor;
 valor = valor + incremento;
 incremento = incremento + 1;
 contador = contador + 1;
 }
 return ( soma );
}


void method_18 ( )
{
 int n = 0;
 int soma = 0;
 IO_id ( "Method_18 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 soma = method_18a(n);
 IO_printf ( "soma = %d\n", soma );
 IO_pause ( "Apertar ENTER para continuar" );
}


int method_19a ( int x ) {
 int soma = 0;
 int valor = 2;
 int contador = 0;
 while ( contador < x )
 {
 soma = soma + valor * valor;
 valor = valor + 1;
 contador = contador + 1;
 }
 return ( soma );
}


void method_19 ( )
{
 int n = 0;
 int soma = 0;
 IO_id ( "Method_19 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 soma = method_19a(n);
 IO_printf ( "soma = %d\n", soma );
 IO_pause ( "Apertar ENTER para continuar" );
}


double method_20a ( int x )
{
 double soma = 0.0;
 int denominador = 14;
 int decremento = 4;
 int contador = 0;
 while ( contador < x && denominador >= 4 )
 {
 soma = soma + 1.0 / denominador;
 denominador = denominador - decremento;
 if ( decremento > 1 )
 {
 decremento = decremento - 1;
 }
 contador = contador + 1;
 }
 return ( soma );
}


void method_20 ( )
{
 int n = 0;
 double soma = 0.0;
 IO_id ( "Method_20 - v0.0" );
 n = IO_readint ( "Quantidade: " );
 soma = method_20a(n);
 IO_printf ( "soma = %lf\n", soma );
 IO_pause ( "Apertar ENTER para continuar" );
}

/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/

    int main ( int argc, char* argv [ ] )
{
// definir dado

 int opcao = 0;

// identificar
 printf ( "%s\n", "Exercicio0500 - Programa = v0.0" );
 printf ( "%s\n", "Autor:  Julia Camilo Neves " );
 printf ( "\n" ); // mudar de linha

// acoes

// repetir
 do
 {
 // para mostrar opcoes
 printf ( "\n%s\n", "Opcoes:" );
 printf ( "\n%s" , " 0 - Terminar" );
 printf ( "\n%s" , " 11 - Method_11" );
 printf ( "\n%s" , " 12 - Method_12" );
 printf ( "\n%s" , " 13 - Method_13" );
 printf ( "\n%s" , " 14 - Method_14" );
 printf ( "\n%s" , " 15 - Method_15" );
 printf ( "\n%s" , " 16 - Method_16" );
 printf ( "\n%s" , " 17 - Method_17" );
 printf ( "\n%s" , " 18 - Method_18" );
 printf ( "\n%s" , " 19 - Method_19" );
 printf ( "\n%s" , "20 - Method 20" );
 printf ( "\n" );

 // ler a opcao do teclado
 printf ( "\n%s", "Opcao = " );
 scanf ( "%d", &opcao );
 getchar( ); // para limpar a entrada de dados

 // para mostrar a opcao lida
 printf ( "\n%s%d", "Opcao = ", opcao );

// escolher acao dependente da opcao
 switch ( opcao )
 {
 case 0: /* nao fazer nada */ break;
 case 1: method_11 ( ); break;
 case 2: method_12 ( ); break;
 case 3: method_13 ( ); break;
 case 4: method_14 ( ); break;
 case 5: method_15 ( ); break;
 case 6: method_16 ( ); break;
 case 7: method_17 ( ); break;
 case 8: method_18 ( ); break;
 case 9: method_19 ( ); break;
 case 10: method_20 ( ); break;
 default: // comportamento padrao
 printf ( "\nERRO: Opcao invalida.\n" );
 break;
 } // end switch

 }

while ( opcao != 0 );

// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )