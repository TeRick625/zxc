#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char arr;
    int pozition;
    scanf("%c", &arr);
    scanf("%d", &pozition);
    int first_ind, last_ind;
    int count;
    int flag;
    for (int i = 0; i < strlen(arr); i++){
        if (pozition == 1){
            while (arr[i] != ' ') {
                printf("%s", arr[i]);
            }
            flag = 1;
        }
        if (flag == 1){
            break;
        }
    }
    printf("%s %d",&arr, pozition);

}