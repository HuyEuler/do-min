#include<stdio.h>
#include<math.h>
int a[20][20] = {},b[20][20] = {}, x[40] = {},m,n,d=0; 
int Try(int i){
	int k,l;
	if(i == m+n){
		for(k=1;k<=m;k++)	b[1][k] = x[k];
		for(k=2;k<=n;k++)	b[k][1] = x[m+k-1];
		for(l = 2;l<= n;l++){
			for(k = 2;k<= m;k++){
				if(a[l-1][k-1]-b[l-2][k-2]-b[l-2][k-1]-b[l-2][k]-b[l][k-2]-b[l-1][k]-b[l-1][k-2]-b[l][k-1] == 0||a[l-1][k-1]-b[l-2][k-2]-b[l-2][k-1]-b[l-2][k]-b[l][k-2]-b[l-1][k]-b[l-1][k-2]-b[l][k-1] == 1){
					b[l][k] = a[l-1][k-1]-b[l-2][k-2]-b[l-2][k-1]-b[l-2][k]-b[l][k-2]-b[l-1][k]-b[l-1][k-2]-b[l][k-1];
				}
				else	return 726;	
			}
		}
		for(k=1;k<=n;k++){
			if(a[k][m]-b[k-1][m-1]-b[k-1][m]-b[k-1][m+1]-b[k][m-1]-b[k][m+1]-b[k+1][m-1]-b[k+1][m]-b[k+1][m+1]!=0 ){
//				printf("%d\n",k);
				return 2;
			}
				
		}
		for(k=1;k<=m-1;k++){
			if(a[n][k]-b[n-1][k-1]-b[n-1][k]-b[n-1][k+1]-b[n][k-1]-b[n][k+1]-b[n+1][k-1]-b[n+1][k]-b[n+1][k+1]!=0 ){
//				printf("%d**",k);
				return 1;
			}
				
		} 
		printf("\nBan do danh dau la \n");
		for(l=1;l<= n;l++){
			for(k=1;k<= m;k++){
				printf("%d ",b[l][k]);
			}
			printf("\n");
		} 
	}
	else{
		for(x[i]=0;x[i]<=1;x[i]++)		Try(i+1);
	}
		
}
int main(){
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<= n;i++){
		for(j=1;j<= m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int t = Try(1);
	printf("Hello %d",t);
	return 0;
}
