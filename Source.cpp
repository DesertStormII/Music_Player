#include <iostream>

using namespace std;
class MusicPlayer {
public:
	string volume = " Normal",P1 = "1234QW";
	void MusicOFF() {
		cout << " Player is OFF" << endl;
	}
	void MusicON() {
		cout << " Player is ON" << endl;
	}
	void Volume() {
		cout << " Volume is: " << volume;
	}
	void changeVolume() {
		cout << " Volume is: " ;
	}
	void Music() {
		cout << " Now music is: plate " << P1;
	}
	void ChangeMusic() {
		cout << " Now music is: plate ";
	}
};
int main()
{
	MusicPlayer exp13;
	int otvet, otvet1;
	char azx;
	string volum = " High", volum1 = "Low";
	exp13.MusicON();
	exp13.Volume();
	cout << endl;
	cout << " If you want change up volume    (write 1)" << endl;
	cout << " If you want change down volume  (write 2)" << endl;
	cout << " If you don't want change volume (write 3)" << endl;
	cin >> otvet;
	if (otvet == 1) {
		cout << "    Now" << endl;
		exp13.changeVolume();
		cout << volum << endl;
	}
	else if (otvet == 2) {
		cout << "    Now" << endl;
		exp13.changeVolume();
		cout << volum1 << endl;
	}
	else if (otvet == 3) {
		cout << " Volume stay the same" << endl;
		exp13.changeVolume();
		cout << volum << endl;
	}
	int choose;
	string P2 = "12ADW", P3 = "34WED", P4 = "56GDF", P5 = "48RGDF";
	exp13.Music();
	cout << endl;
	cout << " If you want change music        (write 1)" << endl;
	cout << " If you don't want change music  (write 2)" << endl;
	cin >> otvet1;
	if (otvet1 == 1) {
		cout << " 1.Plate 12ADW" << endl;
		cout << " 2.Plate 34WED" << endl;
		cout << " 3.Plate 56GDF" << endl;
		cout << " 4.Plate 48RGDF" << endl;
		cin >> choose;
		if (choose == 1) {
			exp13.Music();
			cout << P2;
		}
		else if (choose == 2) {
			exp13.ChangeMusic();
			cout << P3;
		}
		else if (choose == 3) {
			exp13.ChangeMusic();
			cout << P4;
		}
		else if (choose == 4) {
			exp13.ChangeMusic();
			cout << P5;
		}
	}
	cout <<  endl << " A few moments later" << endl;
	exp13.MusicOFF();


	return 0;
}


