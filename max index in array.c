#include<stdio.h>
int main()
{
    // program for largest number in array
    int arr[100]; // c mian size empyty nahin rahk sake 100 is max size 
    int size,i,maximum;
    printf("enter the size of an array : \n");
    scanf("%d",&size);   //we can limit the size apni marzi se
    printf("enter value in array : \n");
    for(i=0;i<size;i++)
    {
          scanf("%d",&arr[i]);  // array i mian value input lein ga hum
    }
   maximum =0;   // array ki zeero position wala variable hum max main store kr dein ga

   for(i=0;i<size;i++)
   {
        if(arr[i]>arr[maximum])  

        {
             maximum = i;  // index i ki value is mian store kr dein ga       
   }
   
}
    printf("maximum value is %d ",maximum);   

}