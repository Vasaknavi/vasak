C PROGRAM FOR LIBRARY BOOK MANAGEMENT

PROGRAM:

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
char bk_name[30]; 
char arthur[30]; 
int pages; 
float  price;
};

int main()
{
struct library l[3]; 
char  ar_nm,bk_nm;
int i,j; 

printf ("1. Add book information\n2. Display  book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. Exit");

printf ("\n\nEnter one of the above :  ");
scanf("%d", &j);

switch (j) 
{ 
case 1:  
for    (i=0;i<3;i++)
{   

printf ("Enter book name = ");    
scanf     ("%s",&l[i].bk_name);

printf ("Enter arthur name =     ");
scanf ("%s",    &l[i].arthur);

printf ("Enter pages =     ");
scanf ("%d",    &l[i].pages);

printf ("Enter price =     ");
scanf ("%f",    &l[i].price);
}   
break;   
case   2:
printf("you have entered the following    information\n");
for(i=0;i   <3;i++)
{   
printf ("book name =     %s",l[i].bk_name);

printf ("arthur name =     %s",l[i].arthur);

printf ("pages = %d",l[i].pages);    

printf     ("price = %f",l[i].price);
}   
break;   

case 3:  
printf    ("Enter arthur name : ");
scanf ("%s",   &ar_nm);
for    (i=0;i<3;i++)
{   
if (ar_nm == l[i].arthur)    
printf ("%s %s      %d %f",l[i].bk_name,l[i].arthur,l[i].pages,l[i].price);
}   
break;   

case   4:
printf ("Enter book name : ");   
scanf ("%s",   &bk_nm);
for    (i=0;i<3;i++)
{   
if (bk_nm == l[i].bk_name)    
printf ("%s      %s %d %f",l[i].bk_name,l[i].arthur,l[i].pages,l[i].price);
}   
break;   

case   5:
for (i=0;i   <3;i++)
{   

}   
break;   
case   6:
exit (0);    


} 
return 0; 
}
