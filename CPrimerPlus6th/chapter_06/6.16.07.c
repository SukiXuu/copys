/*Write a program that reads a single word into a character array and then prints the word
backward. Hint: Use strlen() ( Chapter 4) to compute the index of the last character in
the array.*/

#include<stdio.h>
#include<string.h>      //strlen()所需头文件

int main(void)
{
    char word[20];
    int index;
    int i;
    printf("Enter a single word: ");
    scanf("%s",word);
    index = strlen(word);
    for(i = 0; i <= index;index--)  //减法计数
    {
        printf("%c",word[index]);
    }
    printf("\n");
    return 0;
}