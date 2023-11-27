#include "binary_trees.h"

/**
	* binary_tree_insert_right - insert node as right child.
	* @parent: parent of child node to be inserted.
	* @value: value to be stored in the child node.
	*
	* Return: NULL on fail
	*					pointer to the child node
	*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
