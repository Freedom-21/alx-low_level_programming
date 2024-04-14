#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "key 2", "dram");
    hash_table_set(ht, "key 1", "vivency");
    hash_table_set(ht, "key 3", "redescribed");
    hash_table_set(ht, "key 4", "urites");

    return (EXIT_SUCCESS);
}
