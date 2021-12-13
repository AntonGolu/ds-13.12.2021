#pragma once
#include <iostream>
using namespace std;

class Paladin {
	//ïåðåìåííûå êëàññà (ïîëÿ êëàññà)
private:
	string name;
	int hp;
	int damage;
	int armor;
	int critical;
public:
	//ôóíêöèè, îïðåäåëÿþùèå ïîâåäåíèå
	//êîíñòðóêòîð ñîçäàåò îáúåêò êëàññà â ïàìÿòè
	Paladin(string fname, int fhp, int fdamage, int farmor,
		int fcritical) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		critical = fcritical;
	}
	//äåñòðóêòîð - î÷èùàåò ïìÿòü îò îáúåêòà êëàññà
	~Paladin() {
		cout << "Paladin destroyed\n";
	}
	
	string getName() { return name; }
	int getHp() { return hp; }
	int getDamage() {
#include <iostream>
		using namespace std;

		class Paladin {
			//ïåðåìåííûå êëàññà (ïîëÿ êëàññà)
		private:
			string name;
			int hp;
			int damage;
			int armor;
			int critical;
		public:
			//ôóíêöèè, îïðåäåëÿþùèå ïîâåäåíèå
			//êîíñòðóêòîð ñîçäàåò îáúåêò êëàññà â ïàìÿòè
			Paladin(string fname, int fhp, int fdamage, int farmor,
				int fcritical) {
				name = fname;
				hp = fhp;
				damage = fdamage;
				armor = farmor;
				critical = fcritical;
			}
			
			~Paladin() {
				cout << "Paladin destroyed\n";
			}
			
			string getName() { return name; }
			int getHp() { return hp; }
			int getDamage() {
				int damage = rand() % 25-25;
				int damag = rand() % 25 - 25;
				if (damag > 24) return damage * 1.25;
				if (damag > 23 && damag < 25) return damage * 1.24;
				if (damag > 22 && damag < 24) return damage * 1.23;
				if (damag > 21 && damag < 23) return damage * 1.22;
				if (damag > 20 && damag < 22) return damage * 1.21;
				if (damag > 19 && damag < 21) return damage * 1.20;
				if (damag > 18 && damag < 20) return damage * 1.19;
				if (damag > 17 && damag < 19) return damage * 1.18;
				if (damag > 16 && damag < 18) return damage * 1.17;
				if (damag > 15 && damag < 17) return damage * 1.16;
				if (damag > 14 && damag < 16) return damage * 1.15;
				if (damag > 13 && damag < 15) return damage * 1.14;
				if (damag > 12 && damag < 14) return damage * 1.13;
				if (damag > 11 && damag < 13) return damage * 1.12;
				if (damag > 10 && damag < 12) return damage * 1.11;
				if (damag > 9 && damag < 11) return damage * 1.10;
				if (damag > 8 && damag < 10) return damage * 1.09;
				if (damag > 7 && damag < 9) return damage * 1.08;
				if (damag > 6 && damag < 8) return damage * 1.07;
				if (damag > 5 && damag < 7) return damage * 1.06;
				if (damag > 4 && damag < 6) return damage * 1.05;
				if (damag > 3 && damag < 5) return damage * 1.04;
				if (damag > 2 && damag < 4) return damage * 1.03;
				if (damag > 1 && damag < 3) return damage * 1.02;
				if (damag > 0 && damag < 2) return damage * 1.01;
				if (damag < -1 && damag > 1) return damage * 1;
				if (damag < -2 && damag > 0) return damage * 0.99;
				if (damag < -3 && damag > -1) return damage * 0.98;
				if (damag < -4 && damag > -2) return damage * 0.97;
				if (damag < -5 && damag > -3) return damage * 0.96;
				if (damag < -6 && damag > -4) return damage * 0.95;
				if (damag < -7 && damag > -5) return damage * 0.94;
				if (damag < -8 && damag > -6) return damage * 0.93;
				if (damag < -9 && damag > -7) return damage * 0.92;
				if (damag < -10 && damag > -8) return damage * 0.91;
				if (damag < -11 && damag > -9) return damage * 0.90;
				if (damag < -12 && damag > -10) return damage * 0.89;
				if (damag < -13 && damag > -11) return damage * 0.88;
				if (damag < -14 && damag > -12) return damage * 0.87;
				if (damag < -15 && damag > -13) return damage * 0.86;
				if (damag < -16 && damag > -14) return damage * 0.85;
				if (damag < -17 && damag > -15) return damage * 0.84;
				if (damag < -18 && damag > -16) return damage * 0.83;
				if (damag < -19 && damag > -17) return damage * 0.82;
				if (damag < -20 && damag > -18) return damage * 0.81;
				if (damag < -21 && damag > -19) return damage * 0.80;
				if (damag < -22 && damag > -20) return damage * 0.79;
				if (damag < -23 && damag > -21) return damage * 0.78;
				if (damag < -24 && damag > -22) return damage * 0.77;
				if (damag < -25 && damag > -23) return damage * 0.76;
				if (damag > -24) return damage * 0.75;
				
			}
			int getArmor() { return armor; }
			int getCritical() { return critical; }
			void setName(string fname) { name = fname; }
			void setHp(int fhp) { hp = fhp; }
			void setDamage(int fdamage) { damage = fdamage; }
			void setArmor(int farmor) { armor = farmor; }
			void setCritical(int fcritical) { critical = fcritical; }
			//îñòàëüíûå ìåòîäû
			void printPaladin() {
				cout << "Paladin " << name << " has " << hp << " hp\n";
			}
		};
	}
	int getArmor() { return armor; }
	int getCritical() { return critical; }
	void setName(string fname) { name = fname; }
	void setHp(int fhp) { hp = fhp; }
	void setDamage(int fdamage) { damage = fdamage; }
	void setArmor(int farmor) { armor = farmor; }
	void setCritical(int fcritical) { critical = fcritical; }

	void printPaladin() {
		cout << "Paladin " << name << " has " << hp << " hp\n";
	}
};