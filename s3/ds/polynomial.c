#include<stdio.h>
void main(){
int hdeg,ldeg,temp,i;
printf("Enter the degree of the first polynomial: ");
scanf("%d",&hdeg);
printf("Enter the degree of the second polynomial: ");
scanf("%d",&ldeg);

if(hdeg < ldeg){
temp = hdeg;
hdeg = ldeg;
ldeg = temp;

}

int a[hdeg],b[hdeg];

printf("\n First Polynomial \n");
for(i = hdeg; i >= 0; i--){
	printf("Enter the coeff of variable with the power %d: ",i);
	scanf("%d",&a[i]);

}
printf("\n Second Polynomial \n");
for(i = ldeg; i >= 0; i--){
	printf("Enter the coeff of variable with the power %d: ",i);
	scanf("%d",&b[i]);

}

printf("\n First polynomial \n");
for(i = hdeg; i >= 0; i--){
	if(a[i] == 0){
	continue;
	}
	else{
	printf("+(%dX ^ %d)",a[i],i);
	}

}

printf("\n Second polynomial \n");
for(i = ldeg; i >= 0; i--){
	if(a[i] == 0){
	continue;
	}
	else{
	printf("+(%dX ^ %d)",b[i],i);
	}

}

int ans[hdeg];

printf("\nAddition \n");



	for(i = ldeg; i >= 0; i--){
		ans[i] = a[i] + b [i];
	}
	
	if(hdeg > ldeg){
	for(i = hdeg; i > ldeg; i--){
	
		if(a[i] == 0){
	continue;
	}
		ans[i] = a[i] + b [i];
	}
	
	}
	
	
	printf("\n Answer polynomial \n");
for(i = hdeg; i >= 0; i--){
	if(ans[i] == 0){
	continue;
	}
	else{
	printf("+(%dx^%d)",ans[i],i);
	}


}
printf("\n");
	

	
printf("\nSubraction \n");
	

	 	for(i = ldeg; i >= 0; i--){
		ans[i] = a[i] - b [i];
	}
	
	if(hdeg > ldeg){
	for(i = hdeg; i > ldeg; i--){
	
		if(a[i] == 0){
	continue;
	}
		ans[i] = a[i] - b [i];
	}
	
	}

	
	




	





printf("\n Answer polynomial \n");
for(i = hdeg; i >= 0; i--){
	if(ans[i] == 0){
	continue;
	}
	else{
	printf("+(%dx^%d)",ans[i],i);
	}


}
printf("\n");
}













