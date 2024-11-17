// Your code here
int compute(node* n, KeyT& ans, int& maxImb) {
    if (!n) return -1;
    int hl = compute(n->left, ans, maxImb);
    int hr = compute(n->right, ans, maxImb);
    int imb = hl-hr;
    if (imb < 0) imb = -imb;
    int h = 1 + ((hl > hr) ? hl:hr);
    //std::cout<<"n = "<<n->data.first<<" imb = "<<imb<<" hl = "<<hl<<" hr = "<<hr<<" h = "<<h<<std::endl;
    if (imb > maxImb) {
        ans = n->data.first;
        maxImb = imb;

    } 
    if (imb == maxImb) {
        if (mLess(n->data.first, ans)) {
            ans = n->data.first;

        }
    }
    return h;
}
KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int maxImb = 0;
    KeyT ans = mRoot->data.first;
    compute(mRoot, ans, maxImb);
    return ans;
}

