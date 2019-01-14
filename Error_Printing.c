// This program demonstate standard error codes and its 
// error message printing by using strerror message.

// For getting all the standard error code visit below link
// http://publib.boulder.ibm.com/infocenter/iseries/v5r4/index.jsp?topic=%2Fapis%2Funix14.htm

#include <errno.h>
#include <stdio.h>

int main( )
{

	fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
	fprintf(stderr, "EACCES: %s\n", strerror(EIO));
	fprintf(stderr, "EACCES: %s\n", strerror(ENOTDIR));

	return 0;
}
