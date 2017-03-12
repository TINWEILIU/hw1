#include <stdio.h>
	int main(){
	FILE* HW1; 
	HW1 = fopen("hw1.txt","w");
	int x;
	int y;
	int z;
		for(x = 1;x<=9;x++){
			for(y = 1;y<=9;y++){

		z = x*y ;
			fprintf(HW1," %d*%d = %d \n",x,y,z);
			}
}
		fclose(HW1);
}
