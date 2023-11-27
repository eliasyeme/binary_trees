#include "binary_trees.h"

/**
	* binary_tree_insert_left - incert node as left child.
	* @parent: parent of child node to be incerted.
	* @value: value to be stored in the child node.
	*
	* Return: NULL on fail
	*					pointer to the child node
	*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
