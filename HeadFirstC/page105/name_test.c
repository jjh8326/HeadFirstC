//
//  name.c
//  HeadFirstC
//
//  Created by Joe Harasz on 11/26/19.
//  Copyright © 2019 JJH. All rights reserved.
//

#include <stdio.h>

int main() {
    char first_name[20];
    char last_name[20];
    printf("Enter first and last name: ");
    scanf("%19s %19s", first_name, last_name);
    printf("First: %s Last: %s\n", first_name, last_name);
    
}
