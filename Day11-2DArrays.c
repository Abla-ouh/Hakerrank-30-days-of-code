#include<stdio.h>
int main(){

   int maxsum=-64;  
   int hoursum;

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        hoursum=arr[i+1][j+1];    
        for(int k=0;k<3;k++){                   
            hoursum = hoursum + arr[i][j+k] + arr[i+2][j+k]; 
        }             
        if(hoursum > maxsum)         
         maxsum = hoursum;       
    }      
}     
printf("%d",maxsum);
return 0;}
