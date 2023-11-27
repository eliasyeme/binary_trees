#include "binary_trees.h"

/**
	* binary_tree_is_leaf - checks if a node is a leaf.
	*	@node: pointer to the node to be check.
	*
	*	Return: 1 if node is leaf
	*					0 otherwise
	*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
