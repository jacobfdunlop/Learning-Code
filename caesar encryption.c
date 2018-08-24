#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)

{ int k;

do {
    k = get_int("Please enter your cypher key: ");
}

while (k <= 0);




if (k > 26)

k=(k%26);





string m = get_string("Enter message: ");



printf("ciphered: ");

for (int i = 0; i < strlen(m); i++){
    if (isalpha(m[i])){
        if (isupper(m[i])) {
            char letter = m[i] - 65;
            char encrypt = ((letter + k) % 26) + 65;
            printf("%c", encrypt);
        }
        else if (islower(m[i])){
            char letters = m[i] - 98;
            char encrypted = ((letters + k) % 26) + 98;
            printf("%c", encrypted);
        }
    else {
        printf("%c", m[i]);
    }
}
}
printf("\n");
return 0;

sb
}
