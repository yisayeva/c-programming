#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpwe, *fpwy;
    char we[100];
    char wy[100];

    char findString[1000];



    printf("podaj nazwe kopiowanego pliku ");
    scanf("%s", we);
    fpwe=fopen(we, "rb");

    printf("podaj co ma wyszukac ");
    scanf("%s",findString);

    if(fpwe==NULL){
        printf("nie mozna otworzyc pliku %s", we);
        return 1;
    }

   // printf("podaj nazwe kopii ");
   // scanf("%s", wy);
    fpwy=fopen("kopie.txt", "wb");

    if(fpwy==NULL){
        printf("nie mozna otworzyc pliku %s", wy);
        return 1;
    }

    int k;
    for(k=0; findString[k] != '\0';k++ );

    char str[1000];
    int nrLine = 1;
    while(fgets( str, 999, fpwe) != NULL){

        int j=0;
        for(int i=0; i<100 ; i++)
        {

            if(str[i]==findString[j])j++;
            else j=0;

            if(j>=k)
            {
                fprintf(fpwy,"%d",nrLine);
                printf("%d\n",nrLine);
                break;
            }

        }

    nrLine++;


    }


    return 0;
}
