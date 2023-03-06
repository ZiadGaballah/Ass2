#include <iostream>
#include "Header1"
using namespace std;

int main()
{
	srand(time(0));
	int x = 200;
	int y = 20;
	int X = 2 * x;
	int Y = 2 * y;
	float* M = new float[X];
	float* N = new float[X];
	float* P = new float[Y];
	float Mx;
	float My;
	float Nx;
	float Ny;

	for (int i = 0;i < X;i++) {
		M[i] = (rand() % 19) + 71;
	}
	for (int j = 0;j < X;j++) {
		N[j] = (rand() % 19) + 71;
	}
	Point cent1, cent2, point;

	for (int c = 0;c < Y;c++) {
		P[c] = (rand() % 94) + 6;
		P[c+1] = (rand() % 94) + 6;
	}
	cent1.Center1(M, x);
	Mx = cent1.getX();
	My = cent1.getY();
	cout << "Center of cluster A:(" << Mx << "," << My << "," << endl;
	cent2.Center1(N, x);
	Mx = cent2.getX();
	My = cent2.getY();
	cout << "Center of cluster B:(" << Nx << "," << Ny << "," << endl;
	point.Assign(Mx, My, Nx, Ny, P, Y);
}
