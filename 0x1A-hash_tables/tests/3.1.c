#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "name", "munene");
    hash_table_set(ht, "age", "20");
    hash_table_set(ht, "help", "man");
    hash_table_set(ht, "collision1", "hetairas");
    hash_table_set(ht, "collision2", "mentioner");
    hash_table_set(ht, "c2.1", "stylist");
    hash_table_set(ht, "c2.2", "subgenera");
    hash_table_set(ht, "c3.1", "joyful");
    hash_table_set(ht, "c3.2", "synaphea");
    return (EXIT_SUCCESS);
}
