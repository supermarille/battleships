#include <stdio.h>
#include <stdlib.h>

char** setTable(void);

int main(int argc, char* argv[]){
    setTable();
	return 0;
}


/* A battleships table goes from 1(left) to 10 horizontaly
 * and A(up) to J verticaly.
 * +2("10"=2chars)+1 lines to print the numbers and letters.
 */
char** setTable(void){
    int i,j;
    char k[2],l;
    char** tab;
    //malloc 12 because "10" = 2chars
    tab = (char**) malloc(12*sizeof(char*));
    for(i=0; i<12; i++){
        //malloc 11 because "0" from "10" doesn't count
        tab[i] = (char*) malloc(11*sizeof(char));
    }
    
    for(i=1; i<11; i++){
        //int sprintf(char *str, const char* format, ...);
        sprintf(k, "%d", i);
        if(i==10){
            tab[i][0]=k[0];
            tab[i+1][0]=k[1];
            printf("| %c%c", tab[10][0], tab[11][0]);
        }else{
            tab[i][0]=k[0];
            printf("| %c ", tab[i][0]);
        }
    }

    for(j=1; j<12; j++){
        l = (char)j+'A'-1;
        tab[0][j]=l;
        printf("\n%c", tab[0][j]);
    }

    return tab;
}
