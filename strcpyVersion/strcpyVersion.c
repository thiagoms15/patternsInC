#include <stdio.h>
#include <stdlib.h>

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
 * @brief main function
 * @author Thiago Marques
 */
int main(void)
{
	char *myString;

	myString = malloc(11*sizeof(char));
	strcpyVersion(myString, "Hello World");
	printf("%s\n", myString);

	return 0;
}