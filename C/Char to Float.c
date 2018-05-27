#include <stdio.h>

float strtof(char* S);
void ctod(char* S);

int main() {

    char S[10];
    float F;

    printf("Digite um Numero: ");
    scanf("%s", &S);

    ctod(S);
    F = strtof(S);

    printf("Numero: %f", F);

    return 0;
}

float strtof(char* S) {
    float F = 0, Faux = 0, Liar;
    int i, j, Aux[2] = {};

    for(i = 0, j = 0; S[i] != '\0'; i++) {
        if(S[i] == '.') {
            j++;
        }
        if(j == 0) {
            Aux[0]++;
        } else {
            Aux[1]++;
        }
    }
    
    for(i = 0; S[i] != '.' && S[i] != '\0' ;  i++) {
        Liar = S[i] - 48;
        j = 1;
        while(j < Aux[0]) {
            Liar *= 10;
            j++;
        }
        Aux[0]--;
        F += Liar;
        printf("%f\n", F);
    }

    if(Aux[1] > 0) {
        for(i = Aux[0] + 1; i < Aux[0] + Aux[1]; i++) {
            Liar = S[i] - 48;
            j = 1;
            while(j < Aux[1]) {
                Liar *= 10;
                j++;
            }
            Aux[1]--;
            Faux += Liar;
            printf("%f\n", Faux);
        }
        i = 0;
        j = 10;
        while(i < Aux[1]) {
            j *= 10;
            i++;
        }
        Faux /= j;
        printf("%f\n", Faux);
    }

    F += Faux;

    return F;
}

void ctod(char* S) {
  int i;

  for(i = 0; S[i] != '\0'; i++) {
    if(S[i] == ',') {
      S[i] = '.';
    }
  }
}