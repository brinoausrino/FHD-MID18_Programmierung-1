# Grundlagen Programmierung - 6 Wiederholung

## Programmierung

### Kontrollflussdiagramm

* Wäsche waschen
	* ist Maschine zu min 50% gefüllt, Ist deckel zu, ist Waschmittel drin
	* start, warte n minuten (je nach programm), nimm wäsche raus

Stelle den Vorgang als Kontrollflussdiagramm dar.

Wie sähe ein Programm in C++ aus, welche Variablen würde man benötigen.

### Grafikprogrammierung

Schreibe ein Programm bei dem man per Rechtsklick Vierecke und per Linksklick Dreiecke an die Mausposition zeichnen kann.

## Komplexität und Funktionen

```
int drawRectangles(int x, int input){
	int out = 1;
	ofDrawRectangle(x,y,input*10,input*10);
	if (input > 0){
		out += drawRectangles(x - input*10, 100, input-1);
		out += drawRectangles(x - input*10, 100, input-1);
	}
	return out;
}

```

Rückgabewert und grafische Darstellung. Komplexität?
```
drawRectangles(2,45);
drawRectangles(5,10);
drawRectangles(10,20);
```


## EBNF

```
program = 'BEGIN', 
          assignment, "#", 
		  {assignment, "#"}, 
          'END' ;
number = digit, { digit } ;
assignment = alphabetic_character , "=" ,  number | word ;
word = alphabetic_character,{alphabetic_character};
digit = "0" | "1" | "2" | "3";
alphabetic_character = "a" | "b" | "c" | "d";
 ```

Gehören folgende Worte zur Sprache der EBNF? Warum?

```
BEGIN#
a = 3
END#
 ```

```
BEGIN#
a = 3
END#
 ```