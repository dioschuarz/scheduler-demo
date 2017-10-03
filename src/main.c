#include <stdio.h>

int main() {
  int a[5];
  int p[5]={1,1,1,1,1};
  int n,i;
  int imprimiu=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  
  for (i=0; i<n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
	
	if(a[0]==p[0]){
		printf("0");
		imprimiu=1;
		p[0]=0;		
	} 
	(p[0])++;
	if(a[1]==p[1]){
		printf("1");
		imprimiu=1;		
		p[1]=0;		
	} 
	(p[1])++;
	if(a[2]==p[2]){
		printf("2");
		imprimiu=1;
		p[2]=0;		
	} 
	(p[2])++;
	if(a[3]==p[3]){
		printf("3");
		imprimiu=1;
		p[3]=0;		
	} 
	(p[3])++;
	if(a[4]==p[4]){
		printf("4");
		imprimiu=1;
		p[4]=0;		
	} 
	(p[4])++;
	if (!imprimiu){
		printf("-");
	}
	imprimiu=0;	
	printf("\n");
  }

  return 0;
}

