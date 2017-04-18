/**
Zadanie 3.2 
Napisac program wyszukujacy w pliku dziesiec najdluszych zdañ 
(przyjmujemy, ¿e zdania koñcz¹ siê kropkami, znakami zapytania lub wykrzyknikami) 
i zapisac je w innym pliku w kolejnosci od najdluzszego do najkrotszego.

Write a program that searches the ten longest sentences in the file 
(we assume that sentences end with periods, question marks or exclamation marks) 
and save them in another file in order from the longest to the shortest.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fInput, *fOutput;
    const char *FILE_INPUT = "c2_3_2_in.txt";
    const char *FILE_OUTPUT = "c2_3_2_out.txt";

    fInput = fopen(FILE_INPUT, "rb");
    if(fInput == NULL){
        printf("Nie mozna otworzyc pliku %s\n\a", FILE_INPUT);
        return 1;
    }

    fOutput = fopen(FILE_OUTPUT, "wb");
    if(fOutput == NULL){
        printf("Nie mozna otworzyc pliku %s\n\a", FILE_OUTPUT);
        fclose(fInput);
        return 1;
    }
    
    // TODO: 
    /** 
    Read input file sentence by sentence. 
    Check the end of sentence by ".", "!" or "?"
    Save found sentences into array.
    Sort array by the length of sentence.
    Print sorted array to the output file.
    */
    
    fclose(fInput);
    fclose(fOutput);        
    return 0;
}
