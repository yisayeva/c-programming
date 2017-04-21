//c2_4_1

#include <stdio.h>


int main(int argc, char **argv)
{
	FILE *fin, *fout;
	if(argc < 3) {
		printf("dodaj wiecej argumentow");
		return 1;
	}
	fout = fopen(argv[argc-1], "wb");

    if(fout == NULL){
        printf("Nie mozna otworzyc pliku %s\n\a", argv[argc-1]);
        
        return 1;
    }
    
    
	int k;
	char c;
	for(k=1; k<argc-1; ++k) //printf("%s\n", argv[k]);
	{
		fin=fopen(argv[k], "rb");
		if(fin == NULL){
        	printf("Nie mozna otworzyc pliku %s\n\a", argv[k]);
    	}
        else {
        	printf("Dodanie pliku %s\n", argv[k]);
        	while((c=fgetc(fin))!=EOF){
        		fputc(c, fout);
			}
			fclose(fin);
		}
	}
	
	fclose(fout);
	return 0;
}
