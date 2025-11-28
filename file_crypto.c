#include <stdio.h>
#include <stdlib.h>

void encryptFile(char *input, char *output) {
    FILE *fin = fopen(input, "r");
    FILE *fout = fopen(output, "w");
    char ch;

    if (!fin || !fout) {
        printf("Error opening file!\n");
        return;
    }

    while ((ch = fgetc(fin)) != EOF) {
        ch = ch + 3;
        fputc(ch, fout);
    }

    printf("File Encrypted Successfully!\n");
    fclose(fin);
    fclose(fout);
}

void decryptFile(char *input, char *output) {
    FILE *fin = fopen(input, "r");
    FILE *fout = fopen(output, "w");
    char ch;

    if (!fin || !fout) {
        printf("Error opening file!\n");
        return;
    }

    while ((ch = fgetc(fin)) != EOF) {
        ch = ch - 3;
        fputc(ch, fout);
    }

    printf("File Decrypted Successfully!\n");
    fclose(fin);
    fclose(fout);
}

int main() {
    int choice;
    char input[100], output[100];

    printf("===== FILE ENCRYPTION - DECRYPTION TOOL =====\n");
    printf("1. Encrypt File\n");
    printf("2. Decrypt File\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter input file name: ");
    scanf("%s", input);
    printf("Enter output file name: ");
    scanf("%s", output);

    if (choice == 1)
        encryptFile(input, output);
    else if (choice == 2)
        decryptFile(input, output);
    else
        printf("Invalid Choice!\n");

    return 0;
}