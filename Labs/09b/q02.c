/* Programmer:Muhammad Ali 23K-0052
* Date: 31/10/23
* Descrption:multiplication using function without operator for multiplication
*/

#include <stdio.h>
int mul(int n,int b,int ans) {
	if (b > 0) {
	return mul(n, b-1, ans+n); 
	}
	else{
		return ans;
	}
}

int main() {
	int x,y;
	int ans = 0;
	printf("Enter 1 number:");
	scanf("%d",&x);
	printf("Enter 2 number:");
	scanf("%d",&y);
	printf("%d",mul(x,y,ans));
	return 0;
}
