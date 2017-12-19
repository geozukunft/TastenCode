/*
Dieses Programm ist mit GNU GPLv3.0 Lizenziert und wurde von Viktor Lennert verfasst

Bitte beachten sie das dieses Programm nur für Windows geschrieben und auf ihre vollständige Funktionalität geprüft wurde!
Jegliche Informationen in diesem Programm beziehen sich auf eine Windows Umgebung.

*/


#include <stdio.h>
#include <Windows.h>

#define true 1


void zeichen()
{
	char ascii = 0; // 0 Setzen der Variable die ASCII Zeichen aufnimmt
	int codePage = 0; // Variable in die der Wert der Pfeiltasten gespeichert wird

	ascii = getch(); // ASCII Zeichen haben nur einen Wert dieser wird hier eingelesen
					 // Die Zeichenkodierung definiert 128 Zeichen, bestehend aus 33 nicht druckbaren sowie 95 druckbaren Zeichen

	if (ascii == -32) // Die Pfeiltasten geben anstatt eines normallen ASCII (American Standard Code for Information Interchange deshalb nicht ASCII Code ;) ) 
					  // den Wert -32 aus mithilfe dieses Wertes lassen sich ASCII Zeichen von anderen "Zeichen" unterscheiden
	{
		codePage = getch(); // Einlesen der Pfeiltastenwerte
		switch (codePage) // Switch case zur Überprüfung welche Pfeiltaste gedrückt wurde
		{
		case 72: // Pfeiltaste nach oben
			printf("Pfeiltaste OBEN\n"); 
			break;
		case 80: // Pfeiltaste nach unten
			printf("Pfeiltaste UNTEN\n");
			break;
		case 75: // Pfeiltaste nach links 
			printf("Pfeiltaste LINKS\n");
			break;
		case 77: // Pfeiltaste nach rechts
			printf("Pfeiltaste RECHTS\n");
			break;
		}
	}
	else
	{
		printf("%c\n", ascii);
	}
}




int main()
{
	printf("Bitte beachten Sie das dieses Programm kontinuierlich die gedrueckten Zeichen darstellen wird!!\n");
	printf("Aus diesem Grund ist es nicht möglich das Programm mit Strg + C zu beenden!!\n");
		
	while (true)
	{
		zeichen();
	}
	
	return 0;

}
