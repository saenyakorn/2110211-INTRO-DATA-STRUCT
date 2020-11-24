#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree {
    class Node {
       public:
        friend class Tree;
        Node() {
            data = -1;
            left = NULL;
            right = NULL;
        }
        Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

       protected:
        int data;
        Node* left;
        Node* right;
    };

   public:
    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }

    bool isSameBinaryTree(Tree& t) {
        if (mSize != t.mSize) return false;
        int *tv1 = new int[mSize], *tv2 = new int[mSize];
        int k = 0;
        postOrderResult(tv1, this->mRoot, &k);
        k = 0;
        postOrderResult(tv2, t.mRoot, &k);
        for (int i = 0; i < mSize; i++)
            if (tv1[i] != tv2[i]) return false;
        return true;
    }

    void postOrderResult(int* result, Node* p, int* k) {
        if (p == NULL) return;
        postOrderResult(result, p->left, k);
        postOrderResult(result, p->right, k);
        result[(*k)++] = p->data;
    }
    // You can also put your code here

   protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
            r = new Node(x, NULL, NULL);
            mSize++;
            return;
        }
        if (r->data == x) return;  // Do nothing
        if (x < r->data)
            insertAt(r->left, x);
        else
            insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;
};

#endif  // TREE_H_INCLUDED
