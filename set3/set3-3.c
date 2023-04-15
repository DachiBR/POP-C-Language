#include <stdio.h>
#include <stdlib.h>

char* ParseText(int i, int size, char input[], char revalf[]) {
    char *restmp = malloc(sizeof(char)*100000); 
    for ( i = 0; i < size; i++){
    switch(input[i]){
        case ('A'): 
            case ('a'): 
                restmp[i] = revalf[0]; break;
        case ('B'): 
            case ('b'): 
                restmp[i] = revalf[1]; break;
        case ('C'): 
            case ('c'): 
                restmp[i] = revalf[2]; break;
        case ('D'): 
            case ('d'): 
                restmp[i] = revalf[3]; break;
        case ('E'): 
            case ('e'): 
                restmp[i] = revalf[4]; break;
        case ('F'): 
            case ('f'): 
                restmp[i] = revalf[5]; break;
        case ('G'): 
            case ('g'): 
                restmp[i] = revalf[6]; break;
        case ('H'): 
            case ('h'): 
                restmp[i] = revalf[7]; break;
        case ('I'): 
                case ('i'): 
                    restmp[i] = revalf[8]; break;
            case ('J'): 
                case ('j'): 
                    restmp[i] = revalf[9]; break;
            case ('K'): 
                case ('k'): 
                    restmp[i] = revalf[10]; break;
            case ('L'): 
                case ('l'): 
                    restmp[i] = revalf[11]; break;
            case ('M'): 
                case ('m'): 
                    restmp[i] = revalf[12]; break;
            case ('N'): 
                case ('n'): 
                    restmp[i] = revalf[13]; break;
            case ('O'): 
                case ('o'): 
                    restmp[i] = revalf[14]; break; 
            case ('P'): 
                case ('p'): 
                    restmp[i] = revalf[15]; break; 
            case ('Q'): 
                case ('q'): 
                    restmp[i] = revalf[16]; break;
            case ('R'): 
                case ('r'): 
                    restmp[i] = revalf[17]; break;
            case ('S'): 
                case ('s'): 
                    restmp[i] = revalf[18]; break;
            case ('T'): 
                case ('t'): 
                    restmp[i] = revalf[19]; break;
            case ('U'): 
                case ('u'): 
                    restmp[i] = revalf[20]; break;
            case ('V'): 
                case ('v'): 
                    restmp[i] = revalf[21]; break;
            case ('W'): 
                case ('w'): 
                    restmp[i] = revalf[22]; break;
            case ('X'): 
                case ('x'): 
                    restmp[i] = revalf[23]; break;
            case ('Y'): 
                case ('y'): 
                    restmp[i] = revalf[24]; break;
            case ('Z'): 
                case ('z'): 
                    restmp[i] = revalf[25]; break;
            default: restmp[i] = input[i]; break;
        }
    }

    return restmp;
}

int main(void) {
    char res[100000]; // result
    char revalf[100000]; // reverse alphabet
    char input[100000];
    
    int size; // input size
    char c;
    int i = 0;
    
    while (1) {
        c = getchar();
        if ( i == 26) break;
        revalf[i] = c;
        i++;
    }
    
    i = 0;
    while (1) {
        c = getchar();
        if(c == EOF) break;
        input[i] = c;
        i++;
    }
    
    size = i; // define size

    strcpy(res, ParseText(i, size, input, revalf));
    
    for (i = 0; i < size; i++){
        printf("%c", res[i]);
    }
    
    return 0;
}