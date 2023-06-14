#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct{
    char seguradora[20];     
} seguradora;

struct 
{
    int SUSEP, telCorretora;
    char nomeCorretora[50];   
}corretora;

struct 
{
    char nomeProponente[50];
    int cpfProponente, telProponente;
}proponente;

struct 
{
    char modeloVeic[50], placaVeic[7], chassis[17]; //toda placa tem 7 caracteres e todo chassis de veiculos apartir de 81 tem 17 
    int anoVeic;
}veículo;






int main()
{
    system("cls");
    setlocale(LC_ALL, "portuguese_brazil");
}   