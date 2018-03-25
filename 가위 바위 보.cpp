#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int cnt = 0;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			char a, b;
			scanf("%c %c %c", &a, &a ,&b);
			if (a == 'R' && b == 'P'){
				cnt--;
			}
			else if (a == 'R' && b == 'S'){
				cnt++;
			}
			else if (a == 'S' && b == 'R'){
				cnt--;
			}
			else if (a == 'S' && b == 'P'){
				cnt++;
			}
			else if (a == 'P' && b == 'R'){
				cnt++;
			}
			else if (a == 'P' && b == 'S'){
				cnt--;
			}
		}
		if (cnt > 0)
			cout << "Player 1" << endl;
		else if (cnt == 0)
			cout << "TIE" << endl;
		else if (cnt < 0)
			cout << "Player 2" << endl;
	}
}