#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates binary tree node.
 * @parent: pointer to parent node.
 * @value: value to insert in the new node.
 *
 * Return: NULL on fail
 *				 pointer to the new node on success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
