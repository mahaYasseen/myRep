/*
 * main.c
 *
 *  Created on: Jan 13, 2016
 *      Author: LENOVO
 */
unsigned char func(unsigned char * arr[3]){
	printf("%d\n",arr[1][2]);

}

void main(void){
	unsigned char ar[2][3]={{1,2,3},{4,5,6}};
	printf("%d\n",ar[1][2]);
	func(ar);
return;

}
