#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define tam 25
#define tam2 11
typedef struct{
        char palavra[tam];
}
dados;
void criptografa(dados *cripto);
void descriptografar(dados *cripto);

int main (){

    dados nome; 
    criptografa(&nome);
    printf("\n\n\n");
    descriptografar(&nome);

    system("pause");
    return 0;

}

void criptografa(dados *cripto){
     printf("Informe o nome: ");
     gets(cripto->palavra);


    for(int i = 0 ; i < strlen(cripto->palavra) ; i++){
          if(cripto->palavra[i] == 'z'){
                        cripto->palavra[i] = 'c';
            }
           else  if(cripto->palavra[i] == 'y'){
                          cripto->palavra[i] = 'b';
            }
            else if (cripto->palavra[i] == 'x'){
   cripto->palavra[i] = 'a';
        }
             else {
                  cripto->palavra[i] = cripto->palavra[i] + 3 ; 
                  }

            }

            for(int i = 0 ; i< strlen(cripto->palavra); i++){
             putchar(cripto->palavra[i]);
}            printf("\n\n");
             for(int i = 0 ; i < strlen(cripto->palavra); i++){
             printf(" %d ",cripto->palavra[i]);

}            

            printf("\n");

}
void descriptografar(dados *cripto){
     for(int i = 0; i < strlen(cripto->palavra); ++i){
           cripto->palavra[i] = (char)((int)cripto->palavra[i] - 3);
            printf(" %d ", (int)cripto->palavra[i]);
            }
            printf("\n");
            printf("%s ", cripto->palavra);   
            printf("\n");  
}