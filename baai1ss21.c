#include <stdio.h>
#include <string.h>

int main() {
    char bt01[50];
    printf("Hay nhap chuoi bat ki v�o file : ");
    fgets(bt01, 50, stdin);
    bt01[strcspn(bt01, "\n")]='\0';
    int length = (int)strlen(bt01);
    FILE *file=fopen("bt01.txt", "w");
    for(int i =0;i<length;i++){
        fputc(bt01[i], file);
    }
    fclose(file);
    file = fopen("bt01.txt", "r");
    int c;
    while(c!=EOF){
        printf("%c\n",c);
        c=fgetc(file);
    }
    fclose(file);
    return 0;
}
