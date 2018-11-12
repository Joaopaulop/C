#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//função para criptografar
void cifrar(char mensagem[] , char chave[]){

	int i, k;
    int tamChave;
    int tamMens;
    char resultado[80];
    int num;
    static int j;

	//funcao para pegar o tamanho da string
    tamMens = strlen(mensagem);
    tamChave = strlen(chave);


    for (i=0 ; i < tamMens; i++,j++)
    {
    		// pulando os espacos
    		if(mensagem[i]==' '){
    			chave[j] = ' ';
    			continue;
    		}

			num = (int)mensagem[i] + (int)chave[i];

			// para caso o número esteja fora do valor de 33 ao 126
            while(num>126){
                num = (num-126)+33;
            }

			mensagem[i] = num;
			(char)mensagem[i];

    }
		//mensagem criptografada
		printf("%s", mensagem);

}

//função para descriptografar
void decifrar(char mensagem[] , char chave[]){

	int i, k;
    int tamChave;
    int tamMens;
    char resultado[80];
    int num;
    static int j;

	//funcao para pegar o tamanho da string
    tamMens = strlen(mensagem);
    tamChave = strlen(chave);


    for (i=0 ; i < tamMens; i++)
    {
    		//pulando os espaços
    		if(mensagem[i]==' '){
    			chave[j] = ' ';
    			continue;
    		}

			num = (int)mensagem[i] - (int)chave[j];

            while(num<33){
                num = (num+126)-33;
            }

			mensagem[i] = num;

		j++;

    }

		printf("%s", mensagem);

}


int main(){

    char mensagem[80];
    char chave[80];
    int escolha;

        scanf("%d%*c", &escolha);

        printf("Digite a chave: ");

        fgets(chave,80,stdin);
        chave[strlen(chave)-1] = '\0';


        switch(escolha)
        {
            case 0:

            	//EOF para ler até o final do arquivo

                while(mensagem != EOF){

                    printf("Digite a mensagem: ");
                    fgets(mensagem,80,stdin);
                    //para retirar o /0 do final da mensagem
                    chave[strlen(mensagem)-1] = '\0';
                    cifrar(mensagem, chave);

                }

            break;

            case 1:

				//EOF para ler até o final do arquivo

				while(mensagem != EOF){

                    printf("Digite a mensagem: ");
                    fgets(mensagem,80,stdin);
                    //para retirar o /0 do final da mensagem
                    chave[strlen(mensagem)-1] = '\0';
                    decifrar(mensagem, chave);

                }
            break;

            default:
                printf("Opcao invalida");
            break;
        }

}
