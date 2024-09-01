#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char randchar() {
    char alphabet[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int random = rand() % 26;
    return(alphabet[random]); 
}
