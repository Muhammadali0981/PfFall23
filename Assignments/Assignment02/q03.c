#include<stdio.h>

int main(){
    int a[5][5]={
    {1,1,300,0,999},
    {2,1,320,1,310},
    {3,0,999,1,280},
    {4,1,380,0,999},
    {5,1,375,1,400}
    };
    
    char TimeChoice;
    int MinPrice=10000, Day, MinPriceDay;
    
    printf("which day would you like to travel on (1-5):");
    scanf("%d",&Day);
    int j=0;
    
    printf("what time do you prefer for flying select e for evening m for morning");
    scanf(" %c", &TimeChoice);
    switch(TimeChoice){
        case 'e':
        
            for(int i = 0; i < 5; i++){
                if(a[i][4]<MinPrice){
                    MinPrice=a[i][4];
                    MinPriceDay=a[i][0];
                }
            }
        
        case 'm':
          
            for(int i = 0; i < 5; i++){
                if(a[i][2]<MinPrice){
                    MinPrice=a[i][4];
                    MinPriceDay=a[i][0];
                }
            }  
                 
    }
    
    //outputs (should have really made sperate functions for this)
    if(a[Day-1][j+1]==0 && a[Day-1][j+3]==1){
        printf("flight available in evening costing %d", a[Day-1][j+4]);
        }
    else if(a[Day-1][j+3]==0 && a[Day-1][j+1]==1){
        printf("flight available in morning costing %d", a[Day-1][j+2]);
        }
        
    else{
        printf("no flights available on this day");
        }
    if(TimeChoice==m){
        printf("");
    }
}
