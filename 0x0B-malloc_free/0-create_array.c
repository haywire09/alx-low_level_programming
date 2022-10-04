#inlude "main.h"

/**
 * create_array - create an array of chars and
 * initialize it with a specific char.
 * @size: size of the array.
 * @c: character to be insert.
 * Return: NULL if the size is 0 or if it fails,
 * pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c);
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;

return (array);
}
