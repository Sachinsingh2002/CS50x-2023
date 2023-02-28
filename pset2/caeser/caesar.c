#include <cs50.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>



int main(int argc, string argv[])

{

    if (argc != 2)   //to check if command line argument is not equal to 2

    {

        printf("Usage: ./caesar key\n"); //print  "Usage: ./caesar key if not equal to 2"

        return 1;

    }

    int arg_length = strlen(argv[1]);    //to get the length of string in command line argument

    for (int i = 0; i < arg_length; i++)  //iterate through the length of the argv[1]

    {

        if (!isdigit(argv[1][i]))  //to check if character  in argv[1] is not digit

        {

            printf("Usage: ./caesar key");  //if not print this //

            return 1;

        }

    }



    int key = atoi(argv[1]); //convert string to integer

    string plaintext = get_string("plaintext: ");  //get plaintext to encipher  from user

    printf("ciphertext: ");     //print the encipher text here

    int plaintext_length = strlen(plaintext);  //to check the length of plaintext
    for (int i = 0; i < plaintext_length; i++)  //iterate through the length of plaintext

    {

        if (isupper(plaintext[i]))   // if plaintext character is Upper case.......encipher it with this calculation

        {

            printf("%c", (((plaintext[i] - 65) + key) % 26) + 65);   // encipher the text with the calculation

        }

        else if (islower(plaintext[i]))  //if plaintext character is lower case.....encipher with the below calculation

        {

            printf("%c", (((plaintext[i] - 97) + key) % 26) + 97);  //enciper the text with the calculation

        }

        else                       //if not Uppercase or Lowercase, print the character like that

        {

            printf("%c", plaintext[i]);

        }



    }

    printf("\n");  //then new line

}