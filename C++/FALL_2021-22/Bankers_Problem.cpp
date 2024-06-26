// Banker's Algorithm
#include <iostream>
using namespace std;

int main()
{
	// P0, P1, P2, P3, P4 are the Process names here

int n, m, i, j, k;




cout<<"Enter Number of Processes: ";
cin>>n;
// n = 5; // Number of processes

cout<<"Enter Number of Resources: ";
cin>>m;
// m = 3; // Number of resources

cout<<"Enter Allocated Resources: ";
int alloc[n][m];
for(int i = 0; i<n; i++){
	for(int j = 0; j<m; j++){
		cin>>alloc[i][j];
	}
}

// int alloc[5][3] = { { 0, 1, 0 }, // P0 // Allocation Matrix
// 					{ 2, 0, 0 }, // P1
// 					{ 3, 0, 2 }, // P2
// 					{ 2, 1, 1 }, // P3
// 					{ 0, 0, 2 } }; // P4

cout<<"Enter Max Need of Processes: ";
int max[n][m];
for(int i = 0; i<n; i++){
	for(int j = 0; j<m; j++){
		cin>>max[i][j];
	}
}

// int max[5][3] = { { 7, 5, 3 }, // P0 // MAX Matrix
// 				{ 3, 2, 2 }, // P1
// 				{ 9, 0, 2 }, // P2
// 				{ 2, 2, 2 }, // P3
// 				{ 4, 3, 3 } }; // P4


int avail[m];
cout<<"Enter Available Resources: ";
for (int i = 0; i < m; i++)
{
	cin>>avail[i];
}


// int avail[3] = { 3, 3, 2 }; // Available Resources

int f[n], ans[n], ind = 0;
for (k = 0; k < n; k++) {
	f[k] = 0;
}
int need[n][m];
for (i = 0; i < n; i++) {
	for (j = 0; j < m; j++)
	need[i][j] = max[i][j] - alloc[i][j];
}
int y = 0;
for (k = 0; k < 5; k++) {
	for (i = 0; i < n; i++) {
	if (f[i] == 0) {

		int flag = 0;
		for (j = 0; j < m; j++) {
		if (need[i][j] > avail[j]){
			flag = 1;
			break;
		}
		}

		if (flag == 0) {
		ans[ind++] = i;
		for (y = 0; y < m; y++)
			avail[y] += alloc[i][y];
		f[i] = 1;
		}
	}
	}
}

cout << "Following is the SAFE Sequence" << endl;
for (i = 0; i < n - 1; i++)
	cout << " P" << ans[i] << " ->";
cout << " P" << ans[n - 1] <<endl;

	return (0);
}
