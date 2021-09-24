#include<stdio.h>
main()
{
   FILE *f1, *f2;
   char ch;
   f1 = fopen ("test.txt", "r");
   f2 = fopen ("test2.txt","w");

   do
   {
       ch = fgetc(f1);
       if (ch!=EOF)
       {
           fputc(ch,f2);
       }

   }while(ch!=EOF);

   fclose(f1);
   fclose(f2);
   printf("File copied!!");
}
