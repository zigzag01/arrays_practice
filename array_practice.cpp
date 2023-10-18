#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	//вывести случайный массив, найти наибольший эл-т и его номер в массиве

	int a[100], b[100];
	int i, j, k = 0, n, m;
	int max_, min_, nmax, nmin;

	cout << "n = ";
	cin >> n;
	for (i = 0; i < n; i++) {
		a[i] = rand();
		cout << a[i] << " ";
	}

	nmax = 0;
	max_ = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max_) {
			nmax = i;
			max_ = a[i];
		}
	}

	//найти наименьший эл-т и его номер в массиве

	nmin = 0;
	min_ = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min_) {
			nmin = i;
			min_ = a[i];
		}
	}

	//поменять местами первый наиб и последний наим эл-ты

	a[nmax] = min_;
	a[nmin] = max_;

	//поменять порядок эл-тов на обратный

	for (int i = 0; i < n; i++) {
		if (a[i] == min_) {
			cout << i << endl;
			b[k++] = i;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << b[i] << " ";
	}

	//продублировать все четные

	for (i = 0; i < n; i++) {
		b[k++] = a[i];
		if (a[i] == min_) {
			b[k++] = min_;			
		}
	}

	//удалить все четные

	for (i = 0; i < n; i++) {
		if (a[i] != min_) {
			b[k++] = a[i];
		}
	}

	// перевернуть массив

	for (i = 0; i < n / 2; i++) {
		swap(a[i], a[n - 1 - i]);
	}

	//поставить вначале четные, потом нечетные

	for (i = 0; i < n / 2; i++) {
		if (a[i] % 2 == 0) {
			b[k++] = a[i];
		}
		else {
			b[m--] = a[i];
		}
	}

	//поставить наим эл-ты в конец, наиб - в начало, остальные оставить как есть

	for (i = 0; i < n; i++) {
		if (a[i] != max_ && a[i] != min_) {
			b[i] = a[i];
		}
	}









}
