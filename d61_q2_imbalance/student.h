// int travel(node* p, KeyT& ans, int& maxImb) {
//     if (p == NULL) return -1;
//     int hl, hr, h;
//     hl = travel(p->left, ans, maxImb);
//     hr = travel(p->right, ans, maxImb);
//     h = (hl > hr ? hl : hr) + 1;
//     int imb = (hl > hr ? hl - hr : hr - hl);
//     if (maxImb <= imb) {
//         if (maxImb == imb) {
//             ans = ans < p->data.first ? ans : p->data.first;
//         } else {
//             ans = p->data.first;
//         }
//         maxImb = imb;
//     }
//     return h;
// }

// KeyT getValueOfMostImbalanceNode() {
//     int maxImb = 0;
//     KeyT ans = mRoot->data.first;
//     travel(mRoot, ans, maxImb);
//     return ans;
// }