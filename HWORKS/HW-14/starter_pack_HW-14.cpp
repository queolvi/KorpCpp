void quick_sort(/*some arguments have to be here*/);
void merge_sort(int *arr, int l, int r /*something have to be here too*/);
void merge(int *arr, int l, int m, int r);

struct Poly { 
    unsigned n; 
    unsigned* p;
};

Poly mult(const Poly& lhs, const Poly& rhs);

void merge(int *arr, int l, int m, int r) {
	// TODO: Напишите ваш код здесь
}

void merge_sort(int *arr, int l, int r) {
	if (l >= r) return;
	int m = (l + r) / 2;
	merge_sort(arr, l, m);
	merge_sort(arr, m + 1, r);
	merge(arr, l, m, r); 
}

Poly mult(const Poly& lhs, const Poly& rhs) {
	Poly ret = {rhs.n + lhs.n – 1, nullptr};
	ret.p = new unsigned[ret.n];
	// TODO: Ваш код здесь
	return ret;
}
