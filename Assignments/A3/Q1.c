/* Programmer:Muhammad Ali 23K-0052
* Date: 06/12/23
* Descrption:checking max number in a square matrix an printing sub matrix with max values using filing
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//max intialization
	int n;
	int max=-10000;

	if (argc != 2)
	{
		printf("please enter file name\n");
		return 0;
	}


	FILE *fp=fopen(argv[1],"r");

	printf("------------------------\nName:Muhammad Ali\nRoll Name:23K-0052\n------------------------\n");

	printf("enter dimesion of square matrix even value:");
	scanf("%d", &n);

	int mat[n][n];
	int sub[n/2][n/2];
	int subrow=0,subcol =0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			fscanf(fp,"%d,",&mat[i][j]);
			
		}

	}

	for (int i = 0; i < n ; i+=2)
	{
		subcol=0;

		for(int j = 0; j < n; j+=2)
		{
			max=-10000;
			for (int row = i; row < i+2; ++row)
			{
				for (int col = j; col < j+2; ++col)
				{
					if(mat[row][col]>max){

						max=mat[row][col];

					}
				}
			}
			sub[subrow][subcol]=max;
		subcol++;
		}
	subrow++;
	}

	for (int i = 0; i < n/2; ++i)
	{
		for (int j = 0; j < n/2; ++j)
		{
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}











	return 0;

}
