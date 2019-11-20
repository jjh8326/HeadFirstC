//
//  compass.c
//  HeadFirstC
//

#include <stdio.h>

// *obj for passing and updating the memory it points to
// int because the address is an int
void go_south_east(int *lat, int *lon) {
    //*lat can read the old value and set the new value
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    
    //pass the address of the variable so that the function can update it
    go_south_east(&latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}
