#include<stdio.h>
#define SIZE 20

void read(int);
void display(int);
int maximum_Moons(int);

struct planet
{
	char name[20];
	float distance;
	int moons; 
};

struct planet p[SIZE];
int i;

void main()
{
	int n;
	int pos;
	printf("Enter the number of planets in Solar System\n");
	scanf("%d",&n);

	read(n);
	display(n);
	
	pos = maximum_Moons(n);
	
	printf("%s has maximum number of Moons\n",p[pos].name);

}


void read(int n)
{
	printf("Enter the details for the planets\n");
	for (i = 0; i < n; i++)
	{
		printf("-------------------------------------------------\n");
		printf("Name of Planet %d : ",i+1);
		scanf("%s",&p[i].name);
		printf("Distance of %s from Sun in miles : ",p[i].name);
		scanf("%f",&p[i].distance);
		printf("Number of Moons %s has : ",p[i].name);
		scanf("%d",&p[i].moons);	
	}
	printf("-------------------------------------------------\n");
	printf("-------------------------------------------------\n");


}

void display(int n)
{	
	printf("Planets in the Solar System are \n");
	for (i = 0; i < n; i++)
	{
		printf("-------------------------------------------------\n");
		printf("Planet Name : %s \nDistance of %s from Sun in miles : %f \nNumber of Moons %s has : %d\n",p[i].name,p[i].name,p[i].distance,p[i].name,p[i].moons);
	}
	printf("-------------------------------------------------\n");
	printf("-------------------------------------------------\n");

}

int maximum_Moons(int n)
{
	int pos = p[0].moons;
	for(i = 0; i < n; i++)
	{	
		if(p[i].moons > p[pos].moons)
			pos = i;
	}
	return pos;
}