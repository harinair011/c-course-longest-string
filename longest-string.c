#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *longestString = "";
	if (argc > 1) {
		int longestStringIndex = 1;;
		for (int currentStringIndex = 2; currentStringIndex < argc; currentStringIndex++) {
			int longestStringLength = strlen(argv[longestStringIndex]);
			int currentStringLength = strlen(argv[currentStringIndex]);
			if (currentStringLength > longestStringLength) {
				longestStringIndex = currentStringIndex;
			}
		}
		longestString = argv[longestStringIndex];
	}
	puts(longestString);
	return EXIT_SUCCESS;
}