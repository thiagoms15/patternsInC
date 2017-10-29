#include <stdio.h>
#include "customer.h"

/**
 * @brief Function to copy a string
 *
 * @param dest String where will be storered
 * @param src String source
 *
 * @author Thiago Marques
 * @date 2017/10
 */
void strcpyVersion (char *dest, char *src)
{
	while((*dest++ = *src++));
}

/**
 * @brief      Main function
 */
int main(void)
{
	char *myName;
	struct Customer *myCustumer;
	Address myAddress;

	myName           = malloc(4*sizeof(char));
	myAddress.city   = malloc(4*sizeof(char));
	myAddress.street = malloc(4*sizeof(char));

	strcpyVersion(myName, "NAME");
	strcpyVersion(myAddress.city, "CITY");
	strcpyVersion(myAddress.street, "XXXX");

	myCustumer = createCustomer(myName, myAddress);

	printf("Name   = %s\n", myCustumer->name);
	printf("City   = %s\n", myCustumer->address.city);
	printf("Street = %s\n", myCustumer->address.street);
	destroyCustomer(myCustumer);
	return 0;
}