#include<stdio.h>

int main ()
{
    int i,j,h,aux,c=7;
    int auxv[7]={40,31,41,124,53,64,12};
    i=1;
    j=1;
    h=1;
    aux=0;


    for(i=i;i<=c;i++){
        for(j=0;j<(c-i);j++){
            for (h=0;h<c;h++){printf("%i|",auxv[h]);}
            printf("\n %d > %d\n",auxv[j],auxv[j+1]);
            if(auxv[j]>auxv[j+1]){
                printf("si, intercambio\n");
                aux=auxv[j];
                auxv[j]=auxv[j+1];
                auxv[j+1]=aux;
            }else{printf("no, no hago nada\n");}

        }

    }
        printf("\n Numeros de manera ordenada: \n");
   for (i=0;i<c;i++){
    printf("%i|",auxv[i]);
    }

    getchar();
    return 0;
}

