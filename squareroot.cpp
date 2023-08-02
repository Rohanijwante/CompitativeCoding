#include<stdio.h>
main()
{
	int i,l,k,j,count1=0;
	printf("Please enter number of which u want to find square root");
	scanf("%d",&i);
	
	for( int j=2;j<i;j++)
	{
		if(i%j==0 && i/j==j)
		{
			printf("if statement is executes");
			printf("Square root is %d\n",j);
			count1++;
			if(count1==1)
			{
				
				goto row;
			}
			break;
		}
		}//end of for
	
	if(!(j*j==i)){
			for( k=i-1;k>=1;k--)
			{
				for( l=2;l<=k;l++)
				{
					if(k%l==0 && k/l==l)
					{
						printf("%d\n is nearest square root to number\n",l);
					goto row1;
						//printf("*%d\n is nearest square",k);
					
					}
					
					
				}
				
				
			}
			row1:
				float diff=i-l*l;
		float divisor=2*l;
		float ans = l+(diff/divisor);
		printf("%f",ans);
		
		
	}
		row:
			printf("i got ans");
		//printf("%d",l);
		
	
		
	
		
	
}













//end of main


//	for(int k=i-1;k>=2;k--)
//			{
//				for(int l=2;l<=k;l++)
//				{
//					if(k%l==0 && k/l==l)
//					{
//						printf("%d",l);
//					
//					}
//					
//				}
//			}

//	for(int k=i-1;k>=2;k--)
//			{
//				int l=2;
//				while(k%l!=0 && k/l!=l)
//				{
//					l++;
//					printf("%d\n",l);
//				}
//				printf("%d",k);
//			}//end of for
//		
			

		
