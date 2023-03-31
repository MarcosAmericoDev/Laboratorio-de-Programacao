#include <stdio.h>
#include <string.h>

#define TAM 20

int main() {
    char string1[TAM], string2[TAM];

    // Entrada

    puts("Digite a primeira string: ");
    fgets(string1, TAM, stdin);
    puts("Digite a segunda string: ");
    fgets(string2, TAM, stdin);

    //Processamento

    /*
    if (strcmp(string1, string2))
    {
        puts("São diferentes!");
    }
    else
    {
        puts("São iguais!");
    }
    */
   
    int i = 0;
    int iguais = 1;

    if(strlen(string1) > strlen(string2)) 
    {
        while (string1[i] != '\0') 
        {
            if(string1[i] != string2[i]) 
            {
                iguais = 0;
                break;
            }
            i++;
        }
    }
    else 
    {
        while (string2[i] != '\0') 
        {
            if(string2[i] != string1[i]) 
            {
                iguais = 0;
                break;
            }
            i++;
        }
    }
    
    if (iguais)
    {
        puts("São iguais!");
    }
    else
    {
        puts("São diferentes");
    }
    
    
    
    
    

    return 0;
}