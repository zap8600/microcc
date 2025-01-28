#include <stdio.h>

char *pos; // Pointer to current position in code
int token; // Current token

void next() {
    while(token = *pos) {
        pos++;
        
        if(token == '#') {
            // Skip includes and defines
            while(*pos != 0 && *p != '\n') pos++;
        }
    }
}

int main(int argc, char *argv[]) {
}
