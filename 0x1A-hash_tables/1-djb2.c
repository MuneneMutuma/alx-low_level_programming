/**
 * hash_dbj2 - dbj2 hashing algorithm
 *
 * @str: string to be hashed
 *
 * Return: hash value
 */
unsigned long int hash_dbj2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
