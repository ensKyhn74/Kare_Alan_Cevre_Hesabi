#include <stdio.h>
// Klavyeden girilen kenara göre karenin çevresini ve alanını hesaplar

int main() 

{

 int kenar;
 
 printf("karenin bir kenar uzunlugunu girin: ");
 scanf("%d",&kenar);
 
 int cevre = 4 * kenar;
 int alan = kenar * kenar;
 printf("karenin cevresi: %d\tkarenin alani: %d",cevre,alan);

 return 0;

}