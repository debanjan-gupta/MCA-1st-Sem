#include<stdio.h>
#include<stdlib.h>

void pattern1(int n) {					//tringle
    int i, j;						// *
    for(i = 0; i < n; i++) 			// * *
	{								// * * *
        for(j = 0; j <= i; j++)		// * * * *
            printf("* ");			//  ....so on
        printf("\n");
    }
}

void pattern2(int n){					//Square

	int i,j;
	for(i=0;i<n;i++)			// * * * *
	{							// * * * *
		for(j=0;j<n;j++)		// * * * *
		{						// * * * *
			printf("* ");
		}
	printf("\n");
	}
}

void pattern3(int n){					//inverted triangle
	int row,col;						// * * * * *
	for(row=1;row<=n;row++)				// * * * *
	{									// * * *
		for(col=1;col<=n-row+1;col++)	// * *
		{								// *
		printf("* ");
		}
		printf("\n");
	}	
}

void pattern4(int n){					//triangle number
	int row,col;						// 1
	for(row=1;row<=n;row++)				// 1 2 
	{									// 1 2 3
		for(col=1;col<=row;col++)		// 1 2 3 4
		{								// 1 2 3 4 5
		printf("%d ",col);
		}
		printf("\n");
	}	
}

void pattern5(int n){					//tiangle + inverted triangle
	int row,col;						
	for(row=-n+1;row<=n-1;row++)			// -4 *
	{										// -3 * *
		for(col=1;col<=n-abs(row);col++)	// -2 * * *
		{									// -1 * * * *
		printf("* ");						//  0 * * * * *
		}									//  1 * * * *
		printf("\n");						//  2 * * * 
	}										//  3 * *
}											//  4 *

void pattern6(int n){					//tiangle started with space 1
	int row,col;						//    *
	for(row=1;row<=n;row++)				//   **
	{									//  ***
		for(col=1;col<=n-row;col++)		// ****
		{								//*****
		printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("*");				
		}								
		printf("\n");					 
	}									
}

void pattern7(int n){					//triangle started with space 2
	int row,col;						// *****
	for(row=1;row<=n;row++)				//  ****
	{									//   ***
		for(col=1;col<=row-1;col++)		//    **
		{								//     *
			printf(" ");
		}
		for(col=1;col<=n-row+1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern8(int n){					//pyramid
	int row,col;						//    *
	for(row=1;row<=n;row++)				//   ***
	{									//  *****
		for(col=1;col<=n-row;col++)		// *******
		{								//*********
			printf(" ");
		}
		for(col=1;col<=2*row-1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern9(int n){					//ineverted pyramid
	int row,col;						//*********
	for(row=1;row<=n;row++)				// *******
	{									//  *****
		for(col=1;col<=row-1;col++)		//   ***
		{								//    *
			printf(" ");
		}
		for(col=1;col<=2*(n-row)+1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

void pattern10(int n){					// pyramid with space
	int row,col;						//    * 
	for(row=1;row<=n;row++)				//   * * 
	{									//  * * * 
		for(col=1;col<=n-row;col++)		// * * * * 
		{								//* * * * * 
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pattern11(int n){					//inverted pyramid with space
	int row,col;						//* * * * * 
	for(row=1;row<=n;row++)				// * * * * 
	{									//  * * * 
		for(col=1;col<=row-1;col++)		//   * * 
		{								//    *
			printf(" ");
		}
		for(col=1;col<=n-row+1;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}

void pattern12(int n){					//pyramid + inverted pyramid
	int row,col;						// -4* * * * * 
	for(row=-n+1;row<=n-1;row++)		// -3 * * * * 
	{									// -2  * * * 
		for(col=1;col<=n-abs(row);col++)// -1   * * 
		{								//  0    *
			printf(" ");				//	1   * * 
		}								//  2  * * * 
		for(col=1;col<=abs(row)+1;col++)//  3 * * * * 
		{								//  4* * * * * 
			printf("* ");
		}
		printf("\n");
	}
}

void pattern13(int n){					//dimond of stars
	int row,col;						//-4    * 
	for(row=-n+1;row<=n-1;row++)		//-3   * * 
	{									//-2  * * * 
		for(col=1;col<=abs(row);col++)	//-1 * * * * 
		{								// 0* * * * * 
			printf(" ");				// 1 * * * * 
		}								// 2  * * * 
		for(col=1;col<=n-abs(row);col++)// 3   * * 
		{								// 4    *
			printf("* ");
		}
		printf("\n");
	}
	
}										

void pattern14(int n){   				//hollow dimond
	int row,col;								//-4    *
	for(row=-n+1;row<=n-1;row++)				//-3   * * 
	{											//-2  *   * 
		for(col=1;col<=abs(row);col++)			//-1 *     * 
		{										// 0*       * 
			printf(" ");						// 1 *     * 
		}										// 2  *   * 
		for(col=1;col<=2*(n-abs(row))-1;col++)	// 3   * * 
		{										// 4    * 
			if(col==1 || col==2*(n-abs(row))-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}										
										
void pattern15(int n){					//hollow dimond covered outside
	int row,col;										//-7**************
	for(row=-n;row<=n;row++)							//-6******  ******
	{	if(row!=0){										//-5*****    *****
		for(col=1;col<=2*n;col++)						//-4****      ****
		{												//-3***        ***
			if(col==abs(row) || col==2*n-abs(row)+1)	//-2**          **
				printf("*");							//-1*            *
			else if(col<abs(row) || col>2*n-abs(row)+1)	// 1*            *
				printf("*");  							// 2**          **
		  	else										// 3***        ***	
				printf(" ");							// 4****      ****
		}												// 5*****    *****
		printf("\n");									// 6******  ******
		}												// 7**************
	}
}

void pattern16(int n){					//hollo rectangle
	int row,col;										//****
	for(row=1;row<=n;row++)								//*  *
	{													//*  *
		for(col=1;col<=n-1;col++)						//*  *
			if (row==1 || row==n || col==1 || col==n-1)	//****
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
	}												
}

void pattern17(int n){       			//hollow parallalogram
	int row,col;						//    *****
	for(row=1;row<=n;row++)				//   *   *
	{									//  *   *
		for(col=1;col<=n-row;col++)		// *   *
		{								//*****
			printf(" ");
		}								
		for(col=1;col<=n;col++)								
		{
			if(row==1 || row==n || col==1 || col==n)							
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
	
void pattern18(int n){					//pascal's triangle (undone)
	int row,col;						//    1
	for(row=1;row<=n;row++)				//   1 1
	{									//  1 2 1
		for(col=1;col<=n-row;col++)		// 1 3 3 1
		{								//1 4 6 4 1
			printf(" ");	
		}
	//	for(col=1;col<=n)
		
    }
}

void pattern19(int n){    				//dimond of palindromic numbers
	int row,col;											//    1
	for(row=1-n;row<=n-1;row++)								//   212
	{														//	32123
		for(col=1;col<=abs(row);col++)						// 4321234
		{													//543212345
			printf(" ");									// 4321234
		}													//  32123
		for(col=-(n-abs(row)-1);col<=(n-abs(row)-1);col++)	//   212
		{													//    1
			printf("%d",abs(col)+1);
		}
		printf("\n");
	}
}
	
void pattern20(int n){					//triange of natural number
	int row,col;						// 1
	int num=1;							// 2  3
	for(row=1;row<=n;row++){			// 4  5  6
		for(col=1;col<=row;col++){		// 7  8  9  10
			printf("%d ",num);			// 11 12 13 14 15
			num++;
		}
		printf("\n");
	}
}

void pattern21(int n){					//triangle of binary number
	int row,col;						//1
	for(row=1;row<=n;row++)				//0 1
	{									//1 0 1
		for(col=1;col<=row;col++)		//0 1 0 1
		{// odd rows start with 1, even rows start with 0
			printf("%d ",(row+col)%2);
		}
		printf("\n");
	}
}

void pattern22(int n){					//inverted triange of row number
	int row,col;						// 1 1 1 1 1 1
	for(row=1;row<=n;row++)				// 2 2 2 2 2
	{									// 3 3 3 3
		for(col=1;col<=n-row+1;col++)	// 4 4 4
		{								// 5 5
			printf("%d ",row);			// 6
		}								
		printf("\n");
	}
}

void pattern23(int n){					//number hourglass / diamond split pattern
	int row,col,left=1,right=n*(n+1);	//1 2 3 4  17 18 19 20
	for(row=1;row<=n;row++)				//  5 6 7  14 15 16
	{	//leading space					//    8 9  12 13
		for(col=1;col<=row-1;col++)		//	    10 11
		{								//
			printf("  ");				//
		}
		//left numbers
		for(col=1;col<=n-row+1;col++)
		{
			printf("%d ",left++);
		}
		//right numbers
		for(col=1;col<=n-row+1;col++)
		{
			printf("%d ",right--);
		}
		printf("\n");
	}
	
}

void pattern24(int n){					//palindrome pyramid
	int row,col;								//        1
	for(row = 1; row <= n; row++)				//      2 1 2
    {											//    3 2 1 2 3
        for(col = 1 - n; col <= n - 1; col++)	//  4 3 2 1 2 3 4
        {										//5 4 3 2 1 2 3 4 5
            if (abs(col) <= row - 1)       		
                printf("%d ", abs(col) + 1);
            else
                printf("  ");
        }
        printf("\n");
	}
}

void pattern25(int n){					//square number pattern 1
	int row,col;										//4 4 4 4 4 4 4
	for(row=1-n;row<=n-1;row++)							//4 3 3 3 3 3 4
	{													//4 3 2 2 2 3 4
		for(col=1-n;col<=n-1;col++)						//4 3 2 1 2 3 4
		{												//4 3 2 2 2 3 4 
int value=(abs(row)>abs(col) ? abs(row) : abs(col)) + 1;//4 3 3 3 3 3 4
			printf("%d ",value);						//4 4 4 4 4 4 4
		}												
		printf("\n");
	}
}




























int main() {
    int p_no, n;

    // Array of function pointers
    void (*patterns[])(int) = {pattern1,pattern2,pattern3,pattern4,pattern5,pattern6,
								pattern7,pattern8,pattern9,pattern10,pattern11,pattern12,
								pattern13,pattern14,pattern15,pattern16,pattern17,
								pattern18,pattern19,pattern20,pattern21,pattern22,
								pattern23,pattern24,pattern25};

    printf("Pattern No: ");
    scanf("%d", &p_no);

    printf("\nInput: ");
    scanf("%d", &n);
    printf("\n");

    // Check if count is valid
    if(p_no >= 1 && p_no <= 30) {
        patterns[p_no-1](n);  // Call the right function
    } else {
        printf("Invalid pattern number!\n");
    }

    return 0;
}
