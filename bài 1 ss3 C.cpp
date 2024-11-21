#include <stdio.h>

int main() {
    char ten[100];
    
    printf("Nh?p tên c?a b?n: ");
    fgets(ten, sizeof(ten), stdin); 
    
    printf("Xin chào %s", ten);

    return 0;
}


