//
//  monte.c
//  HeadFirstC
//
//  Created by Joe Harasz on 11/27/19.
//  Copyright © 2019 JJH. All rights reserved.
//

#include <stdio.h>

int main116() {
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;
}
