#include <stdio.h>


//in this example, i am unable to change the value of latitude and logitude in Main because i am copying the values into a different address

void south_east(int lat, int lon)
{
	lat = lat -1;
	lon = lon +1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	//when called it copies the value of the longitude variable to the lon argument	
	south_east(latitude, longitude);
	printf("%i, %i\n", latitude, longitude);

}
