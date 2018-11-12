# Hausaufgabe

1) EBNF : Definiere eine Sprache die folgendes Programm ausdrücken kann:
```
void setup(){
	int a;
	a = 23;
	int b = a + 2;
}


program =		"void setup(){ ", expressioins, "}";
expressions =		expression, {expression};
expression =		(definition|declaration|both);
definition =		"int ", variable, {", ", variable}, ";";
declaration =		variable, " = ", (number|variable), {mathOperation, (number|variable)}, ";";
both =			"int ", variable, " = ", (number|variable), {mathOperation, (number|variable)}, ";";
variable =		alphabeticCharacter {, alphabeticCharacter};
number =		["-"], digit {, digit};
mathOperation =		(" + "|" - "|" * "|" / ");
alphabeticCharacter =	("a"|"b"|"c"|"d"|...|"x"|"y"|"z");
digit =			("0"|"1"|"2"|"3"|"4"|"5"|"6"|"7"|"8"|"9");
```
2) De Stijl - animiere die Kreise in der Mitte
3) De Stijl - Tausche die Farben anhand der Mausposition
4) Entwickle ein eigenes interaktives Kunstwerk.
Nimm folgendes Programm als Basis ... .
Dabei sollen folgende Elemente beachtet werden:
* Elemente reagieren auf die Mausposition
* dabei verändern sie Größe, Form oder Farbe
* die Elemente bewegen sich bereits ohne zusätzliche Animation
* Gib deinem Kunstwerk einen Namen
 

http://www.generative-gestaltung.de/1/P_2_1_2_04
http://www.generative-gestaltung.de/1/P_2_1_2_03
http://www.generative-gestaltung.de/1/P_2_1_1_04



