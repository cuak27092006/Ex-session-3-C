#include <stdio.h>

int main() {
   float dodaicanh, chieucao, dientich;

   printf("nh?p dodaicanh : ");
   scanf("%f", &dodaicanh);
   printf("nh?p chieucao : ");
   scanf("%f", &chieucao);
   
   dientich=(dodaicanh*chieucao)/2;
   
   printf("dien tich c?a tam giác là: %.3f\n",dientich);
   return 0;
}


