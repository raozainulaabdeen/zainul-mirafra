#include <stdio.h>
#include <stdint.h>

int main(){
	uint8_t data = 0x12;  //0110 1000 1010 0001 1000 0101 0001 0110 
	uint8_t i = 0, j = 7;       //0110 1000 1010 0001 1000 0101 0001 0110
	uint8_t i_bit = 0, j_bit = 0;

	while(i < j){
		i_bit = ((data & (1 << i)) >> i);
		j_bit = ((data & (1 << j)) >> (j - i));
		
		
		if(i_bit != j_bit){
			data = data ^ (1 << i);
			data = data ^ (1 << j);
		}	

		i++;
		j--;
	}

	printf("0X%x\n", data);
	return 0;
}
