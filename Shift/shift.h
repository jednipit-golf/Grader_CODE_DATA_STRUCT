void shift(int k) {
	// TODO: Add your code here
	node *p = mHeader->next;
	int a=0;
	int n=mSize;
	if(k ==0 or n <=1) return;
	if(k>0) {
		a = k%n;
	}else if(k<0){
		a  = (n+(k%n))%n;
	}
	for(int i=0;i<a;i++) p = p->next;
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	mHeader->next = p;
	mHeader->prev = p->prev;
	p->prev->next = mHeader;
	p->prev = mHeader;
}