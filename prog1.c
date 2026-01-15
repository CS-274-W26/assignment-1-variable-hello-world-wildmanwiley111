#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>
// TODO Other includes


int main() {

    srand(time(NULL));
    int myrand = rand() % 11;
    if ( myrand<= 4 ) {
        printf("Eat more beef, kick less cats\n");
        } else if (myrand > 5 && myrand <= 9) {
            printf("FRODO LIVES\n");
        } else {printf("Larn is a goated roguelike!\n");
                }
    printf("Random number is %d\n", myrand);

}
