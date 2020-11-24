#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stack>

template <typename KeyT,
          typename MappedT,
          typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val) {
    CP::map_bst<KeyT, MappedT, CompareT> result;
    node *p = mRoot;
    while (p != NULL) {
        if (compare(p->data.first, val) == 0) {
            node *parent = p->parent;
            child_link(parent, p->data.first) = p->left;
            if (p->left != NULL) p->left->parent = parent;
            p->left = NULL;
            if (result.mRoot != NULL) {
                node *newp = result.find_min_node(result.mRoot);
                newp->left = p;
                p->parent = newp;
            } else {
                result.mRoot = p;
                p->parent = NULL;
            }
            break;
        } else if (compare(p->data.first, val) < 0) {
            p = p->right;
        } else {
            node *tmp = p->left;
            node *parent = p->parent;
            child_link(parent, p->data.first) = p->left;
            if (p->left != NULL) p->left->parent = parent;
            p->left = NULL;
            if (result.mRoot != NULL) {
                node *newp = result.find_min_node(result.mRoot);
                newp->left = p;
                p->parent = newp;
            } else {
                result.mRoot = p;
                p->parent = NULL;
            }
            p = tmp;
        }
    }
    return result;
}

#endif
