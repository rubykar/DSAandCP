// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     FILE *f1,*f2;
//     char f1name[100],f2name[100],,c,ch[1000];
//     printf("Enter the filename to open : ");
//     scanf("%s",f1name);
//     f1 = fopen(f1name,"r");
//     if(f1 == NULL){
//         printf("FILE CANNOT OPEN NO CONTENT");
//         exit(0);
//     }
//     printf("Enter the filename to open for writing : ");
//     scanf("%s",f2name);
//     f2 = fopen(f2name,"w");
//     if(f2 == NULL){
//         printf("CANNOT OPEN FILE");
//         exit(0);
//     }

//     c = fgetc(f1);
//     while(c!=EOF){
//         fputc(c,f2);
//         c =  fgetc(f1);
//     }
//     f1 = fopen(f1name,"r");
//     while(fgets(ch,1000,f1)){
//         printf(ch);
//     }
//     fclose(f1);
//     fclose(f2);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fold1, *fold2, *fnew;
	char ch, fname1[20], fname2[20], fname3[30];

	printf("\n\n Merge two files and write it in a new file :\n");
	printf("-------------------------------------------------\n"); 	
	
	printf(" Input the 1st file name : ");
	scanf("%s",fname1);
	printf(" Input the 2nd file name : ");
	scanf("%s",fname2);
	printf(" Input the new file name where to merge the above two files : ");
	scanf("%s",fname3);
	fold1=fopen(fname1, "r");
	fold2=fopen(fname2, "r");
	if(fold1==NULL || fold2==NULL)
	{

		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	fnew=fopen(fname3, "w");
	if(fnew==NULL)
	{

		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	while((ch=fgetc(fold1))!=EOF)
	{
		printf("%c",ch);
		fputc(ch, fnew);
	}
	while((ch=fgetc(fold2))!=EOF)
	{
		printf("%c",ch);
		fputc(ch, fnew);
	}
	printf(" The two files merged into %s file successfully..!!\n\n", fname3);
	fclose(fold1);
	fclose(fold2);
	fclose(fnew);


    return 0;
}