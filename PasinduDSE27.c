#include<stdio.h>
float find_avg(int maths,int science,int it){
	int total;
	float avg;
	total=maths+science+it;
	avg=total/3;
	return avg;
}
void find_grade(float avg){
	
	if(avg>=60){
		printf("Final Grade is A\n");
	}else if(avg>=45){
		printf("Final Grade is B\n");
	}else{
		printf("Final Grade is F\n");
	}

}

int main(){
	int maths;
	int science;
	int it;
	
	printf("Enter the Maths Mark:");
	scanf("%d",&maths);
	printf("Enter the science Mark:");
	scanf("%d",&science);
	printf("Enter the it Mark:");
	scanf("%d",&it);
	
	float avg=find_avg(maths,science,it);
	find_grade(avg);
	
	return 0;
	
	
}