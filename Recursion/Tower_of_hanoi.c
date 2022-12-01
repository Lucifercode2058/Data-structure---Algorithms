#include <stdio.h>
void toh(int n, char from, char temp, char dis)
{
   if (n==0)
   {
    printf("Invalid choice");
   }
   else{
    
     toh(n-1,from,dis,temp);
     printf("%c %c",from,dis);
        toh(1,from,temp,dis);
        toh(n-1,temp,from,dis);
       
   }
   
}
int main()
{
    int disk;
    printf("ENter number of disk\n");
    scanf("%d", &disk);
    toh(disk, 'R', 'L', 'C');
    return 0;
}