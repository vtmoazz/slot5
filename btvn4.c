#include <stdio.h>
#include <stdlib.h>


int checkISBN(long long m);

int main(){
	long long n;
	printf("ISBN Validator============== ");
 	do{
		printf("ISBN (0 to quit): ");
 		scanf("%d", &n);
 		if(n!=0)
 			if(checkISBN(n)==1)
				printf("This is a valid ISBN\n",n);
		else printf("This is not a valid ISBN\n",n);
		else printf("Have a Nice Day!");
 	}while (n!=0);
 return 0;
}


int checkISBN(long long m){
	int result=0;
 	int l[11],s[11];
 	int c[9]={10,9,8,7,6,5,4,3,2};
 	int sum=0;
 	int i;
 	if(m>=1000000){
 		
 		for(i=10;i>0;i--){
			l[i]=m%10;
 			m=m/10;
		}
 		sum=sum+l[10];
 	
 		for( i=1;i<10;i++){
 			s[i]=c[i-1]*l[i];
 			sum=sum+s[i];
 		}
 		if(sum%11==0)
			result=1;
 	}
 return result;
}
