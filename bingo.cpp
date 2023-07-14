#include <iostream>
using namespace std;
int main () {
	int i, j, resp;
	i = 5;
	j = 5;
	resp = 0;
	int b[i][j];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
		 cin >> b[i][j];
		};
	};
	if(b[0][0] == 1){
		if(b[1][1] == 1){
			if(b[2][2] == 1){
				if(b[3][3] == 1){
					if(b[4][4] == 1){
						resp = 3;
					};
				};
			};
		}
		else if(b[0][1] == 1){
			if(b[0][2] == 1){
				if(b[0][3] == 1){
					if(b[0][4] == 1){
						resp = 1;
					};
				};
			};
		}
		else if(b[1][0] == 1){
			if(b[2][0] == 1){
				if(b[3][0]  == 1){
					if(b[4][0] == 1){
						resp = 2;
					};
				};
			};
		};
	}
	else if(b[1][1] == 1){
		if(b[1][2] == 1){
			if(b[1][3] == 1){
				if(b[1][4] == 1){
					if(b[1][0] == 1){
						resp = 1;
					};
				};
			};
		}
		else if(b[2][1] == 1){
			if(b[3][1] == 1){
				if(b[4][1] == 1){
					if(b[0][1] == 1){
						resp = 2;
					};
				};
			};
		};
	}
	else if(b[2][2] == 1){
		if(b[2][3] == 1){
			if(b[2][4] == 1){
				if(b[2][1] == 1){
					if(b[2][0] == 1){
						resp = 1;
					};
				};
			};
		}
		else if(b[3][2] == 1){
			if(b[4][2] == 1){
				if(b[1][2] == 1){
					if(b[0][2] == 1){
						resp = 2;
					};
				};
			};
		}
		else if(b[1][3] == 1){
			if(b[0][4] == 1){
				if(b[3][1] == 1){
					if(b[4][0] == 1){
						resp = 4;
					};
				};
			};
		};
	}
	else if(b[3][3] == 1){
		if(b[3][4] == 1){
			if(b[3][2] == 1){
				if(b[3][1] == 1){
					if(b[3][0] == 1){
						resp = 1;
					};
				};
			};
		}
		else if(b[4][3] == 1){
			if(b[2][3] == 1){
				if(b[1][3] == 1){
					if(b[0][3] == 1){
						resp = 2;
					};
				};
			};
		};
	}
	else if(b[4][4] == 1){
		if(b[4][3] == 1){
			if(b[4][2] == 1){
				if(b[4][1] == 1){
					if(b[4][0] == 1){
						resp = 1;
					};
				};
			};
		}
		else if(b[3][4] == 1){
			if(b[2][4] == 1){
				if(b[1][4] == 1){
					if(b[0][4] == 1){
						resp = 2;
					};
				};
			};
		};
	};
	if(resp == 0){
		cout << "-1" << endl;
	}
	else{
		cout << resp << endl;
	};
	return 0;
}
