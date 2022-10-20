#include <stdio.h>
#include <stdlib.h>

void zadanie9(){
    int n,m;
    srand(time(NULL));
    printf("podaj ilosc liczb losowych: ");
    scanf("%d", &n);
    printf("\npodaj zakres: ");
    scanf("%d", &m);
    m=m+1;
    for(int i = n; i>0; i--){
        int result = rand() % m;
        printf("%d \n", result);
    }
}
void zadanie10(){
    int n;
    printf("podaj liczbe w zakresie 1-10: ");
    srand(time(NULL));
    scanf("%d", &n);
    if(n>10||n<1){
        printf("zla wartosc");
        return;
    }
    int count = 0;
    for(int i = 0; i<10; i++){
        int res = (rand()%10)+1;
        if(res == n){
            count++;
        }
    }
    printf("ilosc: %d", count);
}

int main() {
    zadanie9();
    zadanie10();
    return 0;
}
