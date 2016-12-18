  #include<stdio.h>
   int FindSonWz(char *str,char *sonstr)
   {
     char *p = str,*q = sonstr,*r;
     while(*p)
     {
       r = p;
       while(*q&&*p==*q)
       {
	 p++;
	 q++;
       }
       if(*q=='\0')
	 return r - str;
       else
       {
	 p = r + 1;
	 q = sonstr;
       }
     }
     return -1;
   }
   int main()
   {
     char a[100],b[20];
     int num;
     printf("\nPlease input a:");
     gets(a);
     printf("\nPlease input b:");
     gets(b);
     num = FindSonWz(a,b);
     printf("\nNum of sonstring:%d",num);
   }
