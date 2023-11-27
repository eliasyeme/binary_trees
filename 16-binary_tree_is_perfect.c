#include "binary_trees.h"

/**
 * get_leaf - gets pointer to a leaf.
 * @tree: pointer to the root node to get leaf from.
 *
 * Return: pointer to the first leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree) == 1)
		return (tree);
	if (tree->left)
		return (get_leaf(tree->left));
	else
		return (get_leaf(tree->right));
}

/**
	* walk - checks if a binary tree is perfect.
	* @tree: pointer to the root node of the tree to check.
	* @depth: depth of a leaf
	* @level: current node level
	*
	*	Return: 1 if tree is perfect
	*					0 otherwise
	*/
int walk(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (binary_tree_is_leaf(tree))
		return (level == depth ? 1 : 0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (walk(tree->left, depth, level + 1) &&
	walk(tree->right, depth, level + 1));
}

/**
	* binary_tree_is_perfect - checks if a binary tree is perfect.
	* @tree: pointer to the root node of the tree to check.
	*
	*	Return: 1 if perfect
	*					0 otherwise
	*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (walk(tree, binary_tree_depth(get_leaf(tree)), 0));
}

/**
	* binary_tree_depth - measures the depth of a node in a binary tree.
	* @tree: pointer to the node to measure the depth.
	*
	*	Return: depth of the node on success
	*					0 otherwise
	*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}

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
