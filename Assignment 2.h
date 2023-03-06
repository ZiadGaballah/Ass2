#ifndef Header1
#define Header1
#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	float x;
	float y;
public:
	void initializer() {
		x = 0.0;
		y = 0.0;
	}
	void setx(float n) {
		x = n;
	}
	void sety(float n) {
		y = n;
	}
	float getx() {
		return x;
	}
	float gety() {
		return y;
	}
	void CoutPoint() {
		cout << "Current point: (" << x << "," << y << ")";
	}
	void Dis(float a[]) {
		float distance;
		distance = sqrt((a[0] - x) * (a[0] - x) + (a[1] - y)(a[1] - y));
		cout << "Distance: " << distance;
	}
	void Center(float* cent, int n) {
		float a;
		float b;
		float Asum = 0.0;
		float Bsum = 0.0;
		for (int i = 0;i < n;i+=2) {
			Asum = Asum + cent[i];
		}
		a = Asum / (n / 2);
		for (int j = 1;j <= n;j += 2) {
			Bsum = Bsum + cent[j];
		}
		b = Bsum / (n / 2);
		setx(a);
		sety(b);
	}
	void Assign(float x1, float y1, float x2, float y2, float p[], float z) {
		for (int i = 0;i < z;i += 2) {
			if (sqrt((x1 - p[i]) * (x1 - p[i]) + (y1 - p[i + 1]) * (y1 - p[i + 1])) > sqrt((x2 - p[i]) * (x2 - p[i]) + (y2 - p[i + 1]) * (y2 - p[i + 1]))) {
				cout << "Point (" << p[i] << "," << p[i + 1] << ") is assigned to cluster B" << endl;
			}
			else
				cout << "Point (" << p[i] << "," << p[i + 1] << ") is assigned to cluster A" << endl;

		}
	}
};
#endif