#include <stdio.h>
#define MAX_LEN_VEC 100

void avg(double vetor[], int n){
    double s = 0.0;
    double media = 0.0;

    for (int i = 0; i < n; i++){
        s += vetor[i];
    }

    media = s/n;
    
    printf("Media dos numeros fracionairos: %lf\n", media);
}

int main() {
    int n_elementos;
    printf("Quantidade de elementos do array:");
    scanf("%d\n", &n_elementos);

    long vec[MAX_LEN_VEC];

    for (int i = 0; i < n_elementos; i++){
        printf("Numero fracionario desejado:");
        scanf("%lf", &vec[i]);
    }
    
    avg(vec, n_elementos);

    return 0;
}