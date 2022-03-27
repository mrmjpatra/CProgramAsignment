/*Write a program that copies the content of one file to another, where the file names are supplied to the program on command line. */
#include<stdio.h>
#include<stdlib.h>


void main(int argc,char *argv[])
{
 
 FILE *source,*target;
 char c;
 source=fopen(argv[1],"r");

 if (source==NULL)
 {
     printf("\nFile can't be opened in reading mode\n");
     exit(0);
 }
 else{
     printf("\n file succesfull opened\n");
 }
 if (ferror(source))
 {
     printf("Error Ocuured\n");
 }
  target=fopen(argv[2],"w");

 if (target==NULL)
 {
     printf("\nFile can't be opened in reading mode\n");
     exit(0);
 }
 else{
     printf("\n file succesfull opened\n");
 }
 if (ferror(target))
 {
     printf("Error Ocuured\n");
 }
    
while ((c=fgetc(source))!=EOF)
{
    fputc(c,target);
}
fclose(source);
fclose(target);
    


}