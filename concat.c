#include <stdlib.h>

/**
 * concat - concatenate an string to string destination.
 * @buff: tokenize the buffer.
 * @cmd: String to return.
 * @f: String to dest.
 * Return: return destination.
 */

char *concat(char *buff, char *cmd, char *f)
{
	int k;
	int i;
	int l;
	int j;
/*concatenar*/
	k = 0;
	l = 0;
	i = 0;
	j = 0;

	while (cmd[i])
		i++;
/*f = concat(buffer, cmd);*/


	while (buff[j])
		j++;

/*f = malloc(i + j + 1 * sizeof(char));*/
	while (k < j)
	{
		f[k] = buff[l];
		k++;
		l++;
	}
	f[k] = '/';
	k++;
	l = 0;

	while (k < (i + j) + 1)
	{
		f[k] = cmd[l];
		k++;
		l++;
	}
/*fin concatenar*/

	return (f);
}
