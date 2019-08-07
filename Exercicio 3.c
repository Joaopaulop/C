#include <stdio.h>


int main(void){
    int ensolarado, nublado, chuvoso, perspectiva, umidade, vento;

        printf("\n Informe como esta o clima hoje:(Ensolarado = 1, nublado = 2, chuvoso = 3");
        scanf("%d",&perspectiva);

    if(perspectiva == 1){

            printf("\n O dia está ensolarado, como está a umidadde:(Alta = 0, Normal = 1, Baixa = 0)");
            scanf("%d",&umidade);
                if(umidade == 1){
                    printf("\n Hoje é dia de jogo !!!");
                else{
                    printf("\n Hoje não vai ter jogo !!!");
        }
    }
}

    if(perspectiva == 2){
        printf("\n O dia está nublado, Hoje é dia de jogo !!!");
}

    if(perspectiva == 3){
        printf("\n O dia está chuvoso, como está o vento: (Forte = 0, Fraco = 1)");
        scanf("%d",&vento);
        if(vento == 1){
            printf("\n Hoje é dia de jogo !!!");
        else{
            printf("\n Hoje não vai ter jogo !!!");
        }
    }
}
}
