/*
 * Example code from page 48
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }
        
    if (val >= 3 && val <= 6) {
        puts("Count has gone up");
    } else if (val == 10) {
        puts("Cont has gone down");
    }
    
    return 0;
}
