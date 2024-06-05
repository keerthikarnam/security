#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//Vigenere Cipher

void encrypt()
{
    char plaintext[128], key[16];
    printf("Enter plaintext upto 128 characters :");
    scanf("%[^\n]",plaintext);
    getchar();
    printf("Enter key upto 16 characters :");
    scanf("%[^\n]",key);
    printf("Cipher Text :");

    for(int i =0, j = 0; i < strlen(plaintext); i++,j++)
    {
        if(j >= strlen(key))
            j=0;
        int shift = toupper(key[j]) - 'A';
        char encryptedChar= (toupper(plaintext[i]) - 'A' + shift) % 26 + 'A';
        printf("%c",encryptedChar);
    }
    printf("\n");
}

void decrypt()
{
    char ciphertext[128],key[16];
    printf("Enter the Cipheetext upto 128 characters : ");
    scanf("%[^\n]",ciphertext);
    getchar();
    printf("Enter the key upto 16 characters :");
    scanf("%[^\n]",key);
    printf("Deciphered Text :");

    for(int i = 0,j = 0; i< strlen(ciphertext); i++, j++)
    {
        if(j >= strlen(key))
            j=0;
        int shift = toupper(key[j]) - 'A';
        char decryptedChar = ((toupper(ciphertext[i])-'A'- shift+26)%26)+'A';
        printf("%c",decryptedChar);
    }
    printf("\n");
}

int main()
{
    int option;
    while(1)
    {
        printf("1. ENCRYPT \n");
        printf("2. DECRYPT \n");
        printf("3. EXIT \n");
        scanf("%d",&option);
        getchar();
        switch(option)
        {
            case 1 : encrypt();
                     break;
            case 2 : decrypt();
                     break;
            case 3 : exit(0);
            default : printf("\n Invalid Selection! Try Again");
                      break;
        }
    }
    return 0;
}
