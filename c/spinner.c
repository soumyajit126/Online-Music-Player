#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Array containing the 5 inputs
    const char *inputs[] = {
        "ANALOG Theory",
        "Dsa thoeory",
        "computer organisation theory",
        "math thoery",
        "economics thoery",
        "dsa lab",
        "it workshop",
        "analog thoery",
        "computer organisation theory"
    };

    // Generate a random index to select an input
    int randomIndex = rand() % 9;

    // Display the randomly selected input
    printf("Randomly selected input: %s\n", inputs[randomIndex]);

    return 0;
}