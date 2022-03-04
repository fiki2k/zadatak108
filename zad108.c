//Program treba naci i ispisat parne elemente matrice velicine matrice koju korisnik zada. 

#include<stdio.h>
int main()

{
	int i,j;
	int m,n;
	int M[50][50];
	printf("Unesi broj redaka i stupaca:");
	scanf("%d %d",&m,&n);
	printf("Unesi elemnete matrice:\n");
for(i=0;i<m;i++){    
for(j=0;j<n;j++)    
{    
	scanf("%d",&M[i][j]);    
}    
}   

for(i=0;i<m;i++){

for(j=0;j<n;j++){

if(M[i][j]%2 == 0){

	printf("%d ",M[i][j]);
}
}
	printf("\n");
}

return 0;
}
