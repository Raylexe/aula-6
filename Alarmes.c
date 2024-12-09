#include <stdio.h>
int main(void) {

int x, y, t;

printf("Insira o valor de x:");
scanf("%d", &x);
printf("Insira o valor de y:");
scanf("%d", &y);
while(t%x!=0||t%y!=0){
    t++;
}
printf("2 alarmes");
}