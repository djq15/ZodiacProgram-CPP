#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int jan,feb,mar,apr,m,jn,jl,aug,sep,oc,nv,dc;
string b;
char a;

int main ()

{
	d:
	system("CLS");
	cout<<"Welcome to HOROSCOOP!!\n Lets learn more about your zodiac sign.\nChoose the letter of your birthmonth:\nA)January\nB)February\nC)March\nD)April\nE)May\nF)June\nG)July\nH)August\nI)September\nJ)October\nK)November\nL)December\n\nI choose ";
	cin>>a;

	switch (a){
		case 'A':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>jan;
			if (jan<=19){system("CLS");
				cout<<"Your zodiac sign is Capricorn.\n " ;
				k:
				cout<<"\nDo you want to learn more about other zodiac signs?Yes or No?";
				cin>>b;
				if (b=="Yes"){
					goto d;
				}
				else if (b=="No"){
					cout<<"Godbless!";
				}
				else {system("CLS");
					goto k;

				}
			}
			else if (jan<=31){system("CLS");
				cout<<"Your zodiac sign is Aquarius.";
				goto k;
				}
			else {system("CLS");
				cout<<"Invalid";
			}
		break;
		case 'B':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>feb;
	    	if (feb<=18){system("CLS");
				cout<<"Your zodiac sign is Aquarius.";
				goto k;
			}
			else if (feb<=28){system("CLS");
				cout<<"Your zodiac sign is Pisces.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'C':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>mar;
	    	if (mar<=20){system("CLS");
				cout<<"Your zodiac sign is Pisces.";
				goto k;
			}
			else if (mar<=31){system("CLS");
				cout<<"Your zodiac sign is Aries.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
        case 'D':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>apr;
	    	if (apr<=19){system("CLS");
				cout<<"Your zodiac sign is Aries.";
				goto k;
			}
			else if (apr<=30){		system("CLS");
				cout<<"Your zodiac sign is Taurus.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'E':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>m;
			if (m<=20){system("CLS");
				cout<<"Your zodiac sign is Taurus.";
				goto k;
			}
			else if (m<=31){system("CLS");
				cout<<"Your zodiac sign is Gemini.";
			    goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'F':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>jn;
			if (jn<=20){system("CLS");
				cout<<"Your zodiac sign is Gemini.";
				goto k;
			}
			else if (jn<=30){system("CLS");
				cout<<"Your zodiac sign is Cancer.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'G':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>jl;
	    	if (jl<=22){system("CLS");
				cout<<"Your zodiac sign is Cancer.";
				goto k;
			}
			else if (jl<=31){system("CLS");
				cout<<"Your zodiac sign is Leo.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'H':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>aug;
			if (aug<=22){system("CLS");
				cout<<"Your zodiac sign is Leo.";
				goto k;
			}
			else if (aug<=31){system("CLS");
				cout<<"Your zodiac sign is Virgo.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'I':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>sep;
		    if (sep<=22){system("CLS");
				cout<<"Your zodiac sign is Virgo.";
				goto k;
			}
			else if (sep<=30){system("CLS");
				cout<<"Your zodiac sign is Libra.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'J':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>oc;
	    	if (oc<=22){system("CLS");
				cout<<"Your zodiac sign is Libra.";
				goto k;
			}
			else if (oc<=31){system("CLS");
				cout<<"Your zodiac sign is Scorpio.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'K':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>nv;
	    	if (nv<=21){system("CLS");
				cout<<"Your zodiac sign is Scorpio.";
				goto k;
			}
			else if (nv<=30){system("CLS");
				cout<<"Your zodiac sign is Sagittarius.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		case 'L':
			system("CLS");
			cout<<"Enter the day: ";
			cin>>dc;
	    	if (dc<=21){system("CLS");
				cout<<"Your zodiac sign is Sagittarius.";
				goto k;
			}
			else if (dc<=31){system("CLS");
				cout<<"Your zodiac sign is Capricorn.";
				goto k;
			}
			else {system("CLS");
				cout<<"Invalid";
			}

		break;
		default:
			goto d;

	}
	return 0;
}
