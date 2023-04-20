#include<stdio.h> 
#include<math.h>
int main()
{
	float weight, height, bmi,c; 
	scanf("%f",&weight);
	scanf("%f",&height);
	c=height/100; 
	bmi=weight/pow(c,2);
	if(bmi<18.5)
	{
		printf("You are underweight.Have an apple daily");
	}
	else if(bmi>18.5&&bmi<=24.9) 
	{
		printf("You are normal.Go walking daily and maintain it.");
	}
	else if(bmi>=25 && bmi<=29.9)
	{
		printf("You are overweight.Go to gym daily");
	}
	else
	{
		printf("You are obese.Go to doctor");
	}
return 0;
}
