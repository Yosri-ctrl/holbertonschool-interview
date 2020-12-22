#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creat a binary tree
 * @parent: pointer to the parent node
 * @value: the value to put in the new node
 * Return: The pointer to the new node || NULL in case of failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(binary_tree_t);
    if (!new)
        return (NULL)
    
    if (parent->n > value)
        parent->left = new;
    else
        parent->right = new;

    new->n = value;
    new->parent = parent;
    new->right = NULL;
    new->left = NULL;
    return (new);
}
