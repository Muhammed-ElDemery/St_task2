#include <stdio.h>
#include <string.h>



int main () {

    unsigned char word[50];
    unsigned char Exit[5] = "Exit";
    int Test;

    while(Test != 0){
        printf("Al-salam alaykom ya habeeb > ");
        fgets(word, sizeof(word), stdin);
        if(word[strlen(word) - 1] == '\n')
            word[strlen(word) - 1] = 0;
        Test = strcmp(Exit, word);
        if (!Test){
            printf("Good Bye:) \n");
            break;
        }
        printf("you said: %s\n", word);
    }
    return 0;
}
