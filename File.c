#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char array[100];

    // Create input.txt and write user input to it
    printf("Enter some text: ");
    fgets(array, sizeof(array), stdin);
    inputFile = fopen("C:\\Users\\kidsa\\Searches\\dsac\\ICS2371\\input.txt", "w");
    if (inputFile == NULL) {
        printf("Error creating input.txt\n");
        return 1;
    }
    fputs(array, inputFile);
    fclose(inputFile);

    // Open input.txt for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    // Open output.txt for appending
    outputFile = fopen("C:\\Users\\kidsa\\Searches\\dsac\\ICS2371\\output.txt", "a");
    if (outputFile == NULL) {
        printf("Error creating/output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input file and append to output file
    while (fgets(array, sizeof(array), inputFile) != NULL) {
        fputs(array,outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File appended successfully.\n");
    return 0;
}