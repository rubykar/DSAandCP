// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     FILE *f1,*f2,*f3;
//     char f1name[100],f2name[100],f3name[100],c;
//     printf("Enter the filename to Student info file : ");
//     scanf("%s",f1name);
//     f1 = fopen(f1name,"r");
//     if(f1 == NULL){
//         printf("FILE CANNOT OPEN NO CONTENT");
//         exit(0);
//     }
//     printf("Enter the filename to Marks info file : ");
//     scanf("%s",f2name);
//     f2 = fopen(f2name,"r");
//     if(f2 == NULL){
//         printf("FILE CANNOT OPEN NO CONTENT");
//         exit(0);
//     }
//     printf("Enter the filename to open for writing : ");
//     scanf("%s",f3name);
//     f3 = fopen(f3name,"w");
//     if(f3 == NULL){
//         printf("CANNOT OPEN FILE");
//         exit(0);
//     }
//     while((c = fgetc(f1))!=EOF){
//         fputc(c,f3);
//     }
//     while((c = fgetc(f2))!=EOF){
//         fputc(c,f3);
//     }
//     printf("THE MERGE WAS A SUCCESS");
//     // f1 = fopen(f1name,"r");
//     // while(fgets(ch,1000,f1)){
//     //     printf(ch);
//     // }
    
//     fclose(f1);
//     fclose(f2);
//     fclose(f3);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];

    char ch;

    
    printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    
    sourceFile  = fopen(sourcePath, "r");
    destFile    = fopen(destPath,   "w");

    
    if (sourceFile == NULL || destFile == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }


    
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
       
        fputc(ch, destFile);
        printf("%c",ch);
        ch = fgetc(sourceFile);
    }


    printf("\nFiles copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}