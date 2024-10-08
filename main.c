#include <stdio.h>

int main() {
    int numero_prodotto;
    int i;
    float costo;
    float prezzo;
    printf("inserisci il numero dei prodotti: ");
    scanf("%d",&numero_prodotto);
    while(i<numero_prodotto){
        printf("inseirsci il prezzo dei prodotto %d: ",i);
        scanf("%f",&prezzo);
        i++;
        costo+=prezzo;
    }
    printf("%f\n",costo);
    return 0;
}
