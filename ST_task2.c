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
/*
    test@linux-test:~/task2$ ./a.out
    Al-salam alaykom ya habeeb > ST microelectronics training
    you said: ST microelectronics training
    Al-salam alaykom ya habeeb > linux programming training
    you said: linux programming training
    Al-salam alaykom ya habeeb > now we will try to exit
    you said: now we will try to exit
    Al-salam alaykom ya habeeb > Exit
    Good Bye:)
    test@linux-test:~/task2$

*/
