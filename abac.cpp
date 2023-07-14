#include <iostream>
using namespace std;
int main () {
	int ti, li, ci, toti, ii, ji, xi, zi, qi;
	cin >> li;
	cin >> ci;
	toti = li + ci;
	char bi[li], ai[ci], oi[toti];
	
	for (ii = 0; ii < li; ii++){
		cin >> bi[ii];
	};
	for (ji = 0; ji < ci; ji++){
		cin >> ai[ji];
	};
	
	zi = 0;
	xi = 0;
	for(qi = 0; qi < toti; qi++){
		if(bi[xi] == 'a' || ai[zi] == 'a'){
			if(bi[xi] == 'a'){
				oi[qi] = 'a';
				xi++;
				qi++;
				if(bi[xi] == 'a'){
					oi[qi] = 'a';
					xi++;
					qi++;
					if(bi[xi] == 'a'){
						oi[qi] = 'a';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'a'){
				oi[qi] = 'a';
				zi++;
				qi++;
				if(ai[zi] == 'a'){
					oi[qi] = 'a';
					zi++;
					qi++;
					if(ai[zi] == 'a'){
						oi[qi] = 'a';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'a' and ai[zi] == 'a'){
				oi[qi] = 'a';
				oi[qi + 1] = 'a';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'a' and ai[zi] == 'a'){
					oi[qi] = 'a';
					oi[qi + 1] = 'a';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'a' and ai[zi] == 'a'){
						oi[qi] = 'a';
						oi[qi + 1] = 'a';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'b' || ai[zi] == 'b'){
			if(bi[xi] == 'b'){
				oi[qi] = 'b';
				xi++;
				qi++;
				if(bi[xi] == 'b'){
					oi[qi] = 'b';
					xi++;
					qi++;
					if(bi[xi] == 'b'){
						oi[qi] = 'b';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'b'){
				oi[qi] = 'b';
				zi++;
				qi++;
				if(ai[zi] == 'b'){
					oi[qi] = 'b';
					zi++;
					qi++;
					if(ai[zi] == 'b'){
						oi[qi] = 'b';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'b' and ai[zi] == 'b'){
				oi[qi] = 'b';
				oi[qi + 1] = 'b';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'b' and ai[zi] == 'b'){
					oi[qi] = 'b';
					oi[qi + 1] = 'b';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'b' and ai[zi] == 'b'){
						oi[qi] = 'b';
						oi[qi + 1] = 'b';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'c' || ai[zi] == 'c'){
			if(bi[xi] == 'c'){
				oi[qi] = 'c';
				xi++;
				qi++;
				if(bi[xi] == 'c'){
					oi[qi] = 'c';
					xi++;
					qi++;
					if(bi[xi] == 'c'){
						oi[qi] = 'c';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'c'){
				oi[qi] = 'c';
				zi++;
				qi++;
				if(ai[zi] == 'c'){
					oi[qi] = 'c';
					zi++;
					qi++;
					if(ai[zi] == 'c'){
						oi[qi] = 'c';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'c' and ai[zi] == 'c'){
				oi[qi] = 'c';
				oi[qi + 1] = 'c';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'c' and ai[zi] == 'c'){
					oi[qi] = 'c';
					oi[qi + 1] = 'c';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'c' and ai[zi] == 'c'){
						oi[qi] = 'c';
						oi[qi + 1] = 'c';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'd' || ai[zi] == 'd'){
			if(bi[xi] == 'd'){
				oi[qi] = 'd';
				xi++;
				qi++;
				if(bi[xi] == 'd'){
					oi[qi] = 'd';
					xi++;
					qi++;
					if(bi[xi] == 'd'){
						oi[qi] = 'd';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'd'){
				oi[qi] = 'd';
				zi++;
				qi++;
				if(ai[zi] == 'd'){
					oi[qi] = 'd';
					zi++;
					qi++;
					if(ai[zi] == 'd'){
						oi[qi] = 'd';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'd' and ai[zi] == 'd'){
				oi[qi] = 'd';
				oi[qi + 1] = 'd';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'd' and ai[zi] == 'd'){
					oi[qi] = 'd';
					oi[qi + 1] = 'd';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'd' and ai[zi] == 'd'){
						oi[qi] = 'd';
						oi[qi + 1] = 'd';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'e' || ai[zi] == 'e'){
			if(bi[xi] == 'e'){
				oi[qi] = 'e';
				xi++;
				qi++;
				if(bi[xi] == 'e'){
					oi[qi] = 'e';
					xi++;
					qi++;
					if(bi[xi] == 'e'){
						oi[qi] = 'e';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'e'){
				oi[qi] = 'e';
				zi++;
				qi++;
				if(ai[zi] == 'e'){
					oi[qi] = 'e';
					zi++;
					qi++;
					if(ai[zi] == 'e'){
						oi[qi] = 'e';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'e' and ai[zi] == 'e'){
				oi[qi] = 'e';
				oi[qi + 1] = 'e';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'e' and ai[zi] == 'e'){
					oi[qi] = 'e';
					oi[qi + 1] = 'e';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'e' and ai[zi] == 'e'){
						oi[qi] = 'e';
						oi[qi + 1] = 'e';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'f' || ai[zi] == 'f'){
			if(bi[xi] == 'f'){
				oi[qi] = 'f';
				xi++;
				qi++;
				if(bi[xi] == 'f'){
					oi[qi] = 'f';
					xi++;
					qi++;
					if(bi[xi] == 'f'){
						oi[qi] = 'f';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'f'){
				oi[qi] = 'f';
				zi++;
				qi++;
				if(ai[zi] == 'f'){
					oi[qi] = 'f';
					zi++;
					qi++;
					if(ai[zi] == 'f'){
						oi[qi] = 'f';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'f' and ai[zi] == 'f'){
				oi[qi] = 'f';
				oi[qi + 1] = 'f';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'f' and ai[zi] == 'f'){
					oi[qi] = 'f';
					oi[qi + 1] = 'f';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'f' and ai[zi] == 'f'){
						oi[qi] = 'f';
						oi[qi + 1] = 'f';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'g' || ai[zi] == 'g'){
			if(bi[xi] == 'g'){
				oi[qi] = 'g';
				xi++;
				qi++;
				if(bi[xi] == 'g'){
					oi[qi] = 'g';
					xi++;
					qi++;
					if(bi[xi] == 'g'){
						oi[qi] = 'g';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'g'){
				oi[qi] = 'g';
				zi++;
				qi++;
				if(ai[zi] == 'g'){
					oi[qi] = 'g';
					zi++;
					qi++;
					if(ai[zi] == 'g'){
						oi[qi] = 'g';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'g' and ai[zi] == 'g'){
				oi[qi] = 'g';
				oi[qi + 1] = 'g';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'g' and ai[zi] == 'g'){
					oi[qi] = 'g';
					oi[qi + 1] = 'g';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'g' and ai[zi] == 'g'){
						oi[qi] = 'g';
						oi[qi + 1] = 'g';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'h' || ai[zi] == 'h'){
			if(bi[xi] == 'h'){
				oi[qi] = 'h';
				xi++;
				qi++;
				if(bi[xi] == 'h'){
					oi[qi] = 'h';
					xi++;
					qi++;
					if(bi[xi] == 'h'){
						oi[qi] = 'h';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'h'){
				oi[qi] = 'h';
				zi++;
				qi++;
				if(ai[zi] == 'h'){
					oi[qi] = 'h';
					zi++;
					qi++;
					if(ai[zi] == 'h'){
						oi[qi] = 'h';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'h' and ai[zi] == 'h'){
				oi[qi] = 'h';
				oi[qi + 1] = 'h';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'h' and ai[zi] == 'h'){
					oi[qi] = 'h';
					oi[qi + 1] = 'h';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'h' and ai[zi] == 'h'){
						oi[qi] = 'h';
						oi[qi + 1] = 'h';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'i' || ai[zi] == 'i'){
			if(bi[xi] == 'i'){
				oi[qi] = 'i';
				xi++;
				qi++;
				if(bi[xi] == 'i'){
					oi[qi] = 'i';
					xi++;
					qi++;
					if(bi[xi] == 'i'){
						oi[qi] = 'i';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'i'){
				oi[qi] = 'i';
				zi++;
				qi++;
				if(ai[zi] == 'i'){
					oi[qi] = 'i';
					zi++;
					qi++;
					if(ai[zi] == 'i'){
						oi[qi] = 'i';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'i' and ai[zi] == 'i'){
				oi[qi] = 'i';
				oi[qi + 1] = 'i';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'i' and ai[zi] == 'i'){
					oi[qi] = 'i';
					oi[qi + 1] = 'i';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'i' and ai[zi] == 'i'){
						oi[qi] = 'i';
						oi[qi + 1] = 'i';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'j' || ai[zi] == 'j'){
			if(bi[xi] == 'j'){
				oi[qi] = 'j';
				xi++;
				qi++;
				if(bi[xi] == 'j'){
					oi[qi] = 'j';
					xi++;
					qi++;
					if(bi[xi] == 'j'){
						oi[qi] = 'j';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'j'){
				oi[qi] = 'j';
				zi++;
				qi++;
				if(ai[zi] == 'j'){
					oi[qi] = 'j';
					zi++;
					qi++;
					if(ai[zi] == 'j'){
						oi[qi] = 'j';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'j' and ai[zi] == 'j'){
				oi[qi] = 'j';
				oi[qi + 1] = 'j';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'j' and ai[zi] == 'j'){
					oi[qi] = 'j';
					oi[qi + 1] = 'j';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'j' and ai[zi] == 'j'){
						oi[qi] = 'j';
						oi[qi + 1] = 'j';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'k' || ai[zi] == 'k'){
			if(bi[xi] == 'k'){
				oi[qi] = 'k';
				xi++;
				qi++;
				if(bi[xi] == 'k'){
					oi[qi] = 'k';
					xi++;
					qi++;
					if(bi[xi] == 'k'){
						oi[qi] = 'k';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'k'){
				oi[qi] = 'k';
				zi++;
				qi++;
				if(ai[zi] == 'k'){
					oi[qi] = 'k';
					zi++;
					qi++;
					if(ai[zi] == 'k'){
						oi[qi] = 'k';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'k' and ai[zi] == 'k'){
				oi[qi] = 'k';
				oi[qi + 1] = 'k';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'k' and ai[zi] == 'k'){
					oi[qi] = 'k';
					oi[qi + 1] = 'k';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'k' and ai[zi] == 'k'){
						oi[qi] = 'k';
						oi[qi + 1] = 'k';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'l' || ai[zi] == 'l'){
			if(bi[xi] == 'l'){
				oi[qi] = 'l';
				xi++;
				qi++;
				if(bi[xi] == 'l'){
					oi[qi] = 'l';
					xi++;
					qi++;
					if(bi[xi] == 'l'){
						oi[qi] = 'l';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'l'){
				oi[qi] = 'l';
				zi++;
				qi++;
				if(ai[zi] == 'l'){
					oi[qi] = 'l';
					zi++;
					qi++;
					if(ai[zi] == 'l'){
						oi[qi] = 'l';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'l' and ai[zi] == 'l'){
				oi[qi] = 'l';
				oi[qi + 1] = 'l';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'l' and ai[zi] == 'l'){
					oi[qi] = 'l';
					oi[qi + 1] = 'l';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'l' and ai[zi] == 'l'){
						oi[qi] = 'l';
						oi[qi + 1] = 'l';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'm' || ai[zi] == 'm'){
			if(bi[xi] == 'm'){
				oi[qi] = 'm';
				xi++;
				qi++;
				if(bi[xi] == 'm'){
					oi[qi] = 'm';
					xi++;
					qi++;
					if(bi[xi] == 'm'){
						oi[qi] = 'm';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'm'){
				oi[qi] = 'm';
				zi++;
				qi++;
				if(ai[zi] == 'm'){
					oi[qi] = 'm';
					zi++;
					qi++;
					if(ai[zi] == 'm'){
						oi[qi] = 'm';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'm' and ai[zi] == 'm'){
				oi[qi] = 'm';
				oi[qi + 1] = 'm';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'm' and ai[zi] == 'm'){
					oi[qi] = 'm';
					oi[qi + 1] = 'm';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'm' and ai[zi] == 'm'){
						oi[qi] = 'm';
						oi[qi + 1] = 'm';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'n' || ai[zi] == 'n'){
			if(bi[xi] == 'n'){
				oi[qi] = 'n';
				xi++;
				qi++;
				if(bi[xi] == 'n'){
					oi[qi] = 'n';
					xi++;
					qi++;
					if(bi[xi] == 'n'){
						oi[qi] = 'n';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'n'){
				oi[qi] = 'n';
				zi++;
				qi++;
				if(ai[zi] == 'n'){
					oi[qi] = 'n';
					zi++;
					qi++;
					if(ai[zi] == 'n'){
						oi[qi] = 'n';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'n' and ai[zi] == 'n'){
				oi[qi] = 'n';
				oi[qi + 1] = 'n';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'n' and ai[zi] == 'n'){
					oi[qi] = 'n';
					oi[qi + 1] = 'n';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'n' and ai[zi] == 'n'){
						oi[qi] = 'n';
						oi[qi + 1] = 'n';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'o' || ai[zi] == 'o'){
			if(bi[xi] == 'o'){
				oi[qi] = 'o';
				xi++;
				qi++;
				if(bi[xi] == 'o'){
					oi[qi] = 'o';
					xi++;
					qi++;
					if(bi[xi] == 'o'){
						oi[qi] = 'o';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'o'){
				oi[qi] = 'o';
				zi++;
				qi++;
				if(ai[zi] == 'o'){
					oi[qi] = 'o';
					zi++;
					qi++;
					if(ai[zi] == 'o'){
						oi[qi] = 'o';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'o' and ai[zi] == 'o'){
				oi[qi] = 'o';
				oi[qi + 1] = 'o';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'o' and ai[zi] == 'o'){
					oi[qi] = 'o';
					oi[qi + 1] = 'o';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'o' and ai[zi] == 'o'){
						oi[qi] = 'o';
						oi[qi + 1] = 'o';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'p' || ai[zi] == 'p'){
			if(bi[xi] == 'p'){
				oi[qi] = 'p';
				xi++;
				qi++;
				if(bi[xi] == 'p'){
					oi[qi] = 'p';
					xi++;
					qi++;
					if(bi[xi] == 'p'){
						oi[qi] = 'p';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'p'){
				oi[qi] = 'p';
				zi++;
				qi++;
				if(ai[zi] == 'p'){
					oi[qi] = 'p';
					zi++;
					qi++;
					if(ai[zi] == 'p'){
						oi[qi] = 'p';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'p' and ai[zi] == 'p'){
				oi[qi] = 'p';
				oi[qi + 1] = 'p';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'p' and ai[zi] == 'p'){
					oi[qi] = 'p';
					oi[qi + 1] = 'p';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'p' and ai[zi] == 'p'){
						oi[qi] = 'p';
						oi[qi + 1] = 'p';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'q' || ai[zi] == 'q'){
			if(bi[xi] == 'q'){
				oi[qi] = 'q';
				xi++;
				qi++;
				if(bi[xi] == 'q'){
					oi[qi] = 'q';
					xi++;
					qi++;
					if(bi[xi] == 'q'){
						oi[qi] = 'q';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'q'){
				oi[qi] = 'q';
				zi++;
				qi++;
				if(ai[zi] == 'q'){
					oi[qi] = 'q';
					zi++;
					qi++;
					if(ai[zi] == 'q'){
						oi[qi] = 'q';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'q' and ai[zi] == 'q'){
				oi[qi] = 'q';
				oi[qi + 1] = 'q';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'q' and ai[zi] == 'q'){
					oi[qi] = 'q';
					oi[qi + 1] = 'q';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'q' and ai[zi] == 'q'){
						oi[qi] = 'q';
						oi[qi + 1] = 'q';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'r' || ai[zi] == 'r'){
			if(bi[xi] == 'r'){
				oi[qi] = 'r';
				xi++;
				qi++;
				if(bi[xi] == 'r'){
					oi[qi] = 'r';
					xi++;
					qi++;
					if(bi[xi] == 'r'){
						oi[qi] = 'r';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'r'){
				oi[qi] = 'r';
				zi++;
				qi++;
				if(ai[zi] == 'r'){
					oi[qi] = 'r';
					zi++;
					qi++;
					if(ai[zi] == 'r'){
						oi[qi] = 'r';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'r' and ai[zi] == 'r'){
				oi[qi] = 'r';
				oi[qi + 1] = 'r';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'r' and ai[zi] == 'r'){
					oi[qi] = 'r';
					oi[qi + 1] = 'r';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'r' and ai[zi] == 'r'){
						oi[qi] = 'r';
						oi[qi + 1] = 'r';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 's' || ai[zi] == 's'){
			if(bi[xi] == 's'){
				oi[qi] = 's';
				xi++;
				qi++;
				if(bi[xi] == 's'){
					oi[qi] = 's';
					xi++;
					qi++;
					if(bi[xi] == 's'){
						oi[qi] = 's';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 's'){
				oi[qi] = 's';
				zi++;
				qi++;
				if(ai[zi] == 's'){
					oi[qi] = 's';
					zi++;
					qi++;
					if(ai[zi] == 's'){
						oi[qi] = 's';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 's' and ai[zi] == 's'){
				oi[qi] = 's';
				oi[qi + 1] = 's';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 's' and ai[zi] == 's'){
					oi[qi] = 's';
					oi[qi + 1] = 's';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 's' and ai[zi] == 's'){
						oi[qi] = 's';
						oi[qi + 1] = 's';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 't' || ai[zi] == 't'){
			if(bi[xi] == 't'){
				oi[qi] = 't';
				xi++;
				qi++;
				if(bi[xi] == 't'){
					oi[qi] = 't';
					xi++;
					qi++;
					if(bi[xi] == 't'){
						oi[qi] = 't';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 't'){
				oi[qi] = 't';
				zi++;
				qi++;
				if(ai[zi] == 't'){
					oi[qi] = 't';
					zi++;
					qi++;
					if(ai[zi] == 't'){
						oi[qi] = 't';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 't' and ai[zi] == 't'){
				oi[qi] = 't';
				oi[qi + 1] = 't';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 't' and ai[zi] == 't'){
					oi[qi] = 't';
					oi[qi + 1] = 't';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 't' and ai[zi] == 't'){
						oi[qi] = 't';
						oi[qi + 1] = 't';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'u' || ai[zi] == 'u'){
			if(bi[xi] == 'u'){
				oi[qi] = 'u';
				xi++;
				qi++;
				if(bi[xi] == 'u'){
					oi[qi] = 'u';
					xi++;
					qi++;
					if(bi[xi] == 'u'){
						oi[qi] = 'u';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'u'){
				oi[qi] = 'u';
				zi++;
				qi++;
				if(ai[zi] == 'u'){
					oi[qi] = 'u';
					zi++;
					qi++;
					if(ai[zi] == 'u'){
						oi[qi] = 'u';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'u' and ai[zi] == 'u'){
				oi[qi] = 'u';
				oi[qi + 1] = 'u';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'u' and ai[zi] == 'u'){
					oi[qi] = 'u';
					oi[qi + 1] = 'u';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'u' and ai[zi] == 'u'){
						oi[qi] = 'u';
						oi[qi + 1] = 'u';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'v' || ai[zi] == 'v'){
			if(bi[xi] == 'v'){
				oi[qi] = 'v';
				xi++;
				qi++;
				if(bi[xi] == 'v'){
					oi[qi] = 'v';
					xi++;
					qi++;
					if(bi[xi] == 'v'){
						oi[qi] = 'v';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'v'){
				oi[qi] = 'v';
				zi++;
				qi++;
				if(ai[zi] == 'v'){
					oi[qi] = 'v';
					zi++;
					qi++;
					if(ai[zi] == 'v'){
						oi[qi] = 'v';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'v' and ai[zi] == 'v'){
				oi[qi] = 'v';
				oi[qi + 1] = 'v';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'v' and ai[zi] == 'v'){
					oi[qi] = 'v';
					oi[qi + 1] = 'v';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'v' and ai[zi] == 'v'){
						oi[qi] = 'v';
						oi[qi + 1] = 'v';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'w' || ai[zi] == 'w'){
			if(bi[xi] == 'w'){
				oi[qi] = 'w';
				xi++;
				qi++;
				if(bi[xi] == 'w'){
					oi[qi] = 'w';
					xi++;
					qi++;
					if(bi[xi] == 'w'){
						oi[qi] = 'w';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'w'){
				oi[qi] = 'w';
				zi++;
				qi++;
				if(ai[zi] == 'w'){
					oi[qi] = 'w';
					zi++;
					qi++;
					if(ai[zi] == 'w'){
						oi[qi] = 'w';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'w' and ai[zi] == 'w'){
				oi[qi] = 'w';
				oi[qi + 1] = 'w';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'w' and ai[zi] == 'w'){
					oi[qi] = 'w';
					oi[qi + 1] = 'w';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'w' and ai[zi] == 'w'){
						oi[qi] = 'w';
						oi[qi + 1] = 'w';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'x' || ai[zi] == 'x'){
			if(bi[xi] == 'x'){
				oi[qi] = 'x';
				xi++;
				qi++;
				if(bi[xi] == 'x'){
					oi[qi] = 'x';
					xi++;
					qi++;
					if(bi[xi] == 'x'){
						oi[qi] = 'x';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'x'){
				oi[qi] = 'x';
				zi++;
				qi++;
				if(ai[zi] == 'x'){
					oi[qi] = 'x';
					zi++;
					qi++;
					if(ai[zi] == 'x'){
						oi[qi] = 'x';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'x' and ai[zi] == 'x'){
				oi[qi] = 'x';
				oi[qi + 1] = 'x';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'x' and ai[zi] == 'x'){
					oi[qi] = 'x';
					oi[qi + 1] = 'x';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'x' and ai[zi] == 'x'){
						oi[qi] = 'x';
						oi[qi + 1] = 'x';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'y' || ai[zi] == 'y'){
			if(bi[xi] == 'y'){
				oi[qi] = 'y';
				xi++;
				qi++;
				if(bi[xi] == 'y'){
					oi[qi] = 'y';
					xi++;
					qi++;
					if(bi[xi] == 'y'){
						oi[qi] = 'y';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'y'){
				oi[qi] = 'y';
				zi++;
				qi++;
				if(ai[zi] == 'y'){
					oi[qi] = 'y';
					zi++;
					qi++;
					if(ai[zi] == 'y'){
						oi[qi] = 'y';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'y' and ai[zi] == 'y'){
				oi[qi] = 'y';
				oi[qi + 1] = 'y';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'y' and ai[zi] == 'y'){
					oi[qi] = 'y';
					oi[qi + 1] = 'y';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'y' and ai[zi] == 'y'){
						oi[qi] = 'y';
						oi[qi + 1] = 'y';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
		if(bi[xi] == 'z' || ai[zi] == 'z'){
			if(bi[xi] == 'z'){
				oi[qi] = 'z';
				xi++;
				qi++;
				if(bi[xi] == 'z'){
					oi[qi] = 'z';
					xi++;
					qi++;
					if(bi[xi] == 'z'){
						oi[qi] = 'z';
						xi++;
						qi++;
					};
				};
			};
			if(ai[zi] == 'z'){
				oi[qi] = 'z';
				zi++;
				qi++;
				if(ai[zi] == 'z'){
					oi[qi] = 'z';
					zi++;
					qi++;
					if(ai[zi] == 'z'){
						oi[qi] = 'z';
						zi++;
						qi++;
					};
				};
			};
			if(bi[xi] == 'z' and ai[zi] == 'z'){
				oi[qi] = 'z';
				oi[qi + 1] = 'z';
				zi++;
				xi++;
				qi++;
				if(bi[xi] == 'z' and ai[zi] == 'z'){
					oi[qi] = 'z';
					oi[qi + 1] = 'z';
					zi++;
					xi++;
					qi++;
					if(bi[xi] == 'z' and ai[zi] == 'z'){
						oi[qi] = 'z';
						oi[qi + 1] = 'z';
						zi++;
						xi++;
						qi++;
					};
				};
			};
		};
	};
	for(ti = 0; ti < toti; ti++){
		cout << oi[ti] << " ";
	};		
	return 0;
}
