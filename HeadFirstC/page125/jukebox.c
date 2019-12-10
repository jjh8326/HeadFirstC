//
//  jukebox.c
//  HeadFirstC
//
//  Created by Joe Harasz on 11/27/19.
//  Copyright © 2019 JJH. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[]) {
    int i;
    for (i = 0; i < 5; i++) {
        //If tracks[i] contains search_for
        if (strstr(tracks[i], search_for)) {
            printf("Track %i: '%s'\n", i, tracks[i]);
        }
    }
}

int main125() {
    char search_for[80];
    //printf("Search for: ");
    //fgets(search_for, 80, stdin);
    //-Code has a bug! The code searches for STRING/n
    //find_track(search_for);
    find_track("Jima");
    return 0;
}


