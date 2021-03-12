/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 Implement strcat.
 
 First : "abcd xy"
 Second : "pqr 21"
 
 Updated Second : "pqr 21 abcd xy"
 */
 
 #include<stdio.h>
 
 void StrConcate(char *Src, char *Dest)
 {
   
   while(*Dest != '\0')
   {
      Dest++;
   }
   
   while(*Src != '\0')
   {
      *Dest = *Src;
	  Src++;
	  Dest++;
   }
   
   *Dest = '\0';
 
 }
 
 int main()
 {
   char arr[30];
   char brr[30];
   
   printf("Enter the first string \n");
   scanf("%[^'\n']s",arr);
   printf("Enter the second string \n");
   scanf(" %[^'\n']s",brr);
   
   StrConcate(arr,brr);
   
   printf("String after concatination : %s",brr);
   
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\StringConcatination>myexe
Enter the first string
day
Enter the second string
good
String after concatination : goodday
D:\ProgramTopicWise\LB\4ProblemsOnString\StringConcatination>myexe
Enter the first string
Nikita
Enter the second string
Raut
String after concatination : RautNikita

*/