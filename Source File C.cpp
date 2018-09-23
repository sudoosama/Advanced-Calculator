#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int bin2dec();
int hex2bin();
int dec2bin();
int eq();
int bin2hex();

main()
{
	char ag;
	do
	{
	int a;
	printf("\n\n\t\t*********ADVANCED CALCULATOR***********");
	printf("\n\t\t\t   Easy to Perform \n    Binary2Decimal / Decimal2Binary / Hexa2Binary / Binary2Hexa /Equation");
	printf("\n\nPress (1) Binary to Decimal: \nPress (2) Hexa to Binary:\nPress (3) Decimal to Binary:\nPress (4) Equation:\nPress (5) Binary to Hexa:\t\n");
	scanf("%d",&a);
	if(a>0&&a<6)
	{
	switch(a)
	{
		case 1:
			bin2dec();
			break;
		case 2:
			hex2bin();
			break;
		case 3:
			dec2bin();
			break;
		case 4:
			eq();
			break;
		case 5:
			bin2hex();
			break;
	}
}
	else{
		printf("\nInvalid Input");
	}
	printf("\nPress (y) to perform operation again or (ANY OTHER KEY TO EXIT):");
	ag=getche();
}
while(ag=='y');
}
int bin2dec()
{
	long int i,n,x=0,a;
    printf("Enter any binary number: ");
    scanf("%ld",&n);
    printf("\nThe decimal conversion of %ld is ",n);
    
    for(i=0;n!=0;++i)
    {
        a=n%10;
        x=(a)*(pow(2,i))+x;
        n=n/10;
    }
    printf("%ld",x);
}
int hex2bin()
{long int i=0;
	char binnum[100], hexdec[100];
	printf("Enter any hexadecimal number : ");
	scanf("%s",hexdec);
	printf("\nEquivalent Binary value is : ");
	while(hexdec[i])
	{
		switch(hexdec[i])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid hexadecimal digit %c",hexdec[i]);
		}
		i++;
	}
	
}
int dec2bin()
{
	
int d,n,i,j,a[50];
    printf("Enter a number:");
    scanf("%d",&n);
    
    if(n==0)
        printf("\nThe binary conversion of 0 is 0");
    else
    {
        printf("\nThe binary conversion of %d is 1",n);
        for(i=1;n!=1;++i)
        {
            d=n%2;
            a[i]=d;
            n=n/2;
        }
        for(j=i-1;j>0;--j)
        printf("%d",a[j]);
    }
}
int eq()
{
	int i,ans,x,n;
	printf("Enter Value how many numbers you want: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nWhen f(x) is %d=",i);
				scanf("\n%d",&x);
				ans = x*x + x;
				printf("\n %d",ans);	
	}
}
int bin2hex()
{
	char hex[20],c;
    int n;
    printf("Instructions:\n");
    printf("Enter convert binary to hexadecimal:\n");
        printf("Enter binary number: ");
        scanf("%d",&n);
{
    int i=0,decimal=0, rem;
    while (n!=0)
    {
        decimal += (n%10)*pow(2,i);
        n/=10;
        ++i;
    }
	 i=0;
    while (decimal!=0)
    {
        rem=decimal%16;
        switch(rem)
        {
            case 10:
              hex[i]='A';
              break;
            case 11:
              hex[i]='B';
              break;
            case 12:
              hex[i]='C';
              break;
            case 13:
              hex[i]='D';
              break;
            case 14:
              hex[i]='E';
              break;
            case 15:
              hex[i]='F';
              break;
            default:
              hex[i]=rem+'0';
              break;
        }
        ++i;
        decimal/=16;
    }
    hex[i]='\0';
    strrev(hex);    
	        printf("Hexadecimal number: %s",hex);
}
}


