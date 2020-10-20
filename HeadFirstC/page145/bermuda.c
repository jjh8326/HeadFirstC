//
//  bermuda.c
//  HeadFirstC
//
//  Created by Joe Harasz on 10/20/20.
//  Copyright © 2020 JJH. All rights reserved.
//

#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if ((latitude > 26) && (latitude < 34)) {
            if ((longitude > -76) && (longitude < -64)) {
                printf("%f,%f,%s\n", latitude, longitude, info);
            }
        }
    }
    
    return 0;
}
