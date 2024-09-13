#include <stdio.h>
#include <math.h>
 int main(){
 	int n,t;
 	scanf("%d\n",&s);
 	for(int i=1 ; i <= s ; i++){
 		scanf("%d",&t);
 		if((t%400==0)||(t%4==0 && t%100!=0)){
 			printf("Yes\n");
 		}else{
 			printf("No\n");
 		}
 	}
 	return 0;
}
