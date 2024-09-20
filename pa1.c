#include <stdio.h>
#include <string.h>

#define LB_TO_KG 0.45359237
#define BUFFER_SIZE 256

typedef enum {

    G, 
    KG,
    T,
    OZ,
    LB, 
    TN,
    UNSUPPORTED

} Unit;

double convert(double value, Unit from, Unit to) {

    return 0.0;

}

int main() {
    printf("Please enter a mass quantity to convert, in the form <number> <input-unit> <output-unit>.\n");
    printf("Enter any letter to quit.\n");
    printf("Allowable units: g kg t oz lb tn\n");

    char buffer[BUFFER_SIZE];
    double value;
    char input_unit_string[BUFFER_SIZE] = { '\0' };
    char output_unit_string[BUFFER_SIZE] = { '\0' };

    fgets(buffer, BUFFER_SIZE, stdin);

    while (sscanf(buffer, "%lf %s %s", &value, input_unit_string, output_unit_string) == 3) {
        printf("You entered: %f %s %s\n", value, input_unit_string, output_unit_string);

        printf("> ");
        fgets(buffer, BUFFER_SIZE, stdin);
    }

    return 0;

}


