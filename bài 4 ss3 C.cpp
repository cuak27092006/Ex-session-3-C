#include <stdio.h>

int main() {
   float toan, van, anh, tongdiem, diemtrungbinh;

   printf("nh?p ?i?m toan (r): ");
   scanf("%f", &toan);
   printf("nh?p ?i?m van (r): ");
   scanf("%f", &van);
   printf("nh?p ?i?m anh (r): ");
   scanf("%f", &anh);
   
   tongdiem = toan + van + anh;
   diemtrungbinh = tongdiem / 3;
   
   printf("t?ng di?m là: %.2f\n", tongdiem);
   printf("ddiemr trung bình là: %.2f\n", diemtrungbinh);
   return 0;
}
