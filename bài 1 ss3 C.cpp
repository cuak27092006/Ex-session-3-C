#include <stdio.h>

int main() {
    char ten[100];
    
    printf("Nh?p t�n c?a b?n: ");
    fgets(ten, sizeof(ten), stdin); 
    
    printf("Xin ch�o %s", ten);

    return 0;
}


