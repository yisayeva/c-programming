#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fInput, *fOutput;
    const char *FILE_INPUT = "c2_3_1.txt";
    const char *FILE_OUTPUT = "pary.txt";
    
    int fInputLen;
    char para1[3], para2[3];
	
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

	fseek(fInput, 0, SEEK_END);
	long size = ftell(fInput);
	fseek(fInput, 0, SEEK_SET);
	
	int ilePar = size - 1;
	char *pary[ilePar];
	int cnt[ilePar];
	
	long curpos;	
	int i = 0;
    while(fgets(para1, sizeof(para1), fInput) != NULL){
        pary[i] = para1;
        curpos = ftell(fInput);
		printf("Position: %d, Para: \%s\n", curpos, pary[i]);
		if(curpos < size) fseek(fInput, -1, SEEK_CUR);
		i++;
    }
    
	fclose(fInput);
	
	int k, j;
    for(k = 0; k < ilePar; k++) {
    	strcpy(para1, pary[k]);
    	if(para1 != '\0') {
			for(j = k + 1; j < ilePar; j++) {
	    		strcpy(para2, pary[j]);
	    		if(strncmp(para1, para2, 3) == 0)  {
	    			// equal pair
	    			cnt[k] = cnt[k] + 1;
	    			pary[j] = '\0';
				}
			}
		}
	}
	
	// output pairs to the file
	for(k = 0; k < ilePar; k++) {
		if(pary[k] != '\0') {
	        fprintf(fOutput, "%s = %d\n" , pary[k], cnt[k]);
		}
    }

	fclose(fOutput);

    return 0;
}
