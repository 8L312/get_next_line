#include <stdio.h>
#include "get_next_line.h"

int	main()
{
	char *str;
	int fd = open("livre.txt", O_RDONLY);
	str = "1";
	while (str)
	{
		str = get_next_line(fd);
		printf("%s", str);
	}
	return (0);
}
