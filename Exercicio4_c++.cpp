#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define delay for(resp=0;resp<50000000;resp++);



//não consegui deixar so sim e não para retorno
int rotina(char S[]){
    if(strcmp(S,"NAO")==0){
        return 0;
    }
    else
        if(strcmp(S,"SIM")==0){
          return 1;
        }
        else
            if(strcmp(S,"SAIR")==0){
                return 2;
            }
}
int main(){
    char str[4];
    int resp;
    do{
        scanf("%s",str);
        for(resp=0;resp<strlen(str);resp++)
            str[resp] = toupper(str[resp]);
        resp = rotina(str);
        printf("Retornou %d\n",resp);
    }while( resp != 2 );
    printf("\n\n      Tecle !\n\n\a");
    while( ! kbhit()){
        printf("        | \r"   );delay;
        printf("        - \r"   );delay;
        printf("        / \r"   );delay;
        printf("        %c\r",92);delay;
    }
    printf("\n\n\n");
    return 0;
}

