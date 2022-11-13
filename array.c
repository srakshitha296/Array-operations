#include<stdio.h>
#include<stdlib.h>

int n,a[50],i,loc;

void read()
 {
 printf("Enter array size : ");
 scanf("%d",&n);
 printf("Enter array elements : ");
 for(i=0;i<n;i++)
 {
scanf("%d",&a[i]);
 }
}
//-------------------------------------
void display()
{
    for(i=0;i<n;i++)
    {
        printf("Element %d is at index %d\n ",a[i],i);
    }
}
//-------------------------------------
void insert()
{
    int ele;
    printf("Position : ");
    scanf("%d",&loc);
    printf("Element :");
    scanf("%d",&ele);
    if(loc>n) 
        printf("Invalid position !");
        else
        {
          for(i=n-1;i>=loc-1;i--)
               a[i+1]=a[i];
               a[loc-1]=ele;
        }
}
//-------------------------------------
void delete()
{
    printf("Positin : ");
    scanf("%d",&loc);
    if(loc>n) 
        printf("Invalid position !");
        else
        {
            for(i=loc-1;i<n;i++)
                a[i]=a[i+1];
        }
}

int main()
{
 int choice;
  printf("\nPress 1 : Enter Elements.\n");
  printf("Press 2 : Display Elements.\n");
  printf("Press 3 : Insert Elements.\n");
  printf("Press 4 : Delete Elements.\n");
  printf("Press 0 : Exit\n");

  while(1) {
  printf("\nEnter the choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: read();
    break;
    case 2 : display();
    break;
    case 3: insert();
    break;
    case 4: delete();
    break;
    case 0:exit(0);
    break;
    defautlt :printf("Invalid choice!!");
  }
  }
  return 0;
}
