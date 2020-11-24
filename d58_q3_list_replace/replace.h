// void replace(const T& x, list<T>& y) {
//     int s = y.size() - 1;
//     iterator p = begin();
//     if (mSize == 0) return;
//     while (p != end()) {
//         if (p.ptr->data == x) {
//             p = erase(p);
//             for (iterator yb = y.begin(); yb != y.end(); yb++) {
//                 p = insert(p, yb.ptr->data);
//                 p = p.ptr->next;
//             }
//         } else {
//             p = p.ptr->next;
//         }
//     }
// }