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
   
   *Dest = ' ';
   
   Dest++;
   
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
 
 Enter the first string
nikita
Enter the second string
raut
String after concatination : raut nikita

*/