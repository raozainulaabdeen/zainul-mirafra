#include <stdio.h>

void *my_memmove(void *dest, const void *src, size_t size);

void *my_memmove(void *dest, const void *src, size_t size){
	unsigned char *p1 = (unsigned char *)dest;
	const unsigned char *p2 = (const unsigned char *)src;
	
	p2 = p2 + size;

	//check for overlaping
	while(p2 != src && --p2 != dest);

	if(p2 != src){
		//overlaping is there
		p2 = (const unsigned char *)src;
		p2 = p2 + size;
		p1 = p1 + size;

		while(size-- != 0){
			*--p1 = *--p2;
		}
	}

	else{
		while(size-- != 0){
			*p1++ = *p2++;
		}
	}




}
