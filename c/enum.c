#include <stdio.h>


typedef enum weekdays{Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, a, b, c}weekdays_t;


int main(){
	weekdays_t weekday1 = Monday;
	printf("%d %d %ld\n",weekday1, Friday, sizeof(weekdays_t));
	return 0;
}
