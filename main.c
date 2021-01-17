#include <stdlib.h>
#include "linearsearch.c"
#include "binarysearch.c"
#include <stdio.h>
#include <string.h>
typedef struct Players{
    char username[10];
}
Player;
int main()
{
    // int *array = NULL;
    // int len, key;
    // printf("array length? ");
    // scanf("%d", &len);
    // //printf("\n")
    // array = (int*)malloc(len*sizeof(int));
    // for(int i=0;i<len;i++)
    // {
    //     scanf("%d", &array[i]);
    // }
    // printf("what number do you want to find? ");
    // scanf("%d", &key);

    // printf("%d was found at index %d \n",key, linear_search(array, key, 0, len-1));

   
    //Player * f  = (f *) malloc(sizeof(f));
    Player f;
    char name[5] = "jack";
    strcpy(f.username, name);
    printf("\n%s", name);
}
