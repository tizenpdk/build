#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/utsname.h>

int main(void) {

	struct utsname buffer;

	errno = 0;
	if (uname(&buffer) != 0) {
		perror("uname");
		exit(EXIT_FAILURE);
	}

	printf("%s\n", buffer.machine);

	return EXIT_SUCCESS;
}

