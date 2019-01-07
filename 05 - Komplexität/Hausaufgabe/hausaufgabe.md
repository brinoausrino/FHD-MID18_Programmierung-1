# Hausaufgabe
1) Komplexität: Welche Zeitkomplexitäten haben folgende Algorithmen?

```
a = n*n;
```

```
for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			a *= 30;
		}
}
```

```
while (n>1){
	n /= 3;
}
```

```
for(int i=0; i<n*n; ++i){
	a *= 56;
}
```

```
void calculate(int n){
	a = n;

	if(n>0){
		calculate(n-1);
	}
}

```
Welche Raumkomplexität hat folgender Algorithmus?

```
vector<int> vec;

for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			vec.push_back(i);
		}
}
```


2) Sortieren: Sortiere manuell folgende Folge mithilfe des Bubblesort und mithilfe des Quicksort Algorithmus. Was fällt dir auf?

```
[ 3, 9, 4, 5, 1]
```

3) Sortieren mit realen Daten: Sortiere Länder nach deren Fläche. Visualisiere dein Ergebnis (ofDrawBitmapString(name,x,y)).