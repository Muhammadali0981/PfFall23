/* Programmer:Muhammad Ali 23K-0052
* Date: 10/10/23
* Descrption:checks if matrix is symmetric
*/

#include<stdio.h>
int main(){
	int arr[100][100];
	int i,j,a,ans;
	printf("enter dimensions of array i j=");
	scanf("%d %d", &i, &j);
	int u, p;
	for( u=0;u<i;u++) {
		for( p = 0;p<j;p++) {
				printf("enter element=");
				scanf("%d", &ans);
				arr[u][p]=ans;
		}
	}
	int m;
	for (m=0; m<i; m++){
		int n;
		for(n=0; n<j; n++){
			if (arr[m][n]!=arr[n][m])
			a++;
			break;
		}
	}
	if (a==0){
		printf("symetrical");
	}
	else{
		printf("not symetrical");
	}
		
return 0;
}
