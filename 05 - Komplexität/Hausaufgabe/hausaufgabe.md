# Hausaufgabe
1) Komplexität: Welche Zeitkomplexitäten haben folgende Algorithmen?

```
a = n*n;
```
--> O(1)

```
for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			a *= 30;
		}
}
```
--> O(n^2)

```
while (n>1){
	n /= 3;
}
```
--> O(log(n))

```
for(int i=0; i<n*n; ++i){
	a *= 56;
}
```
--> O(n^2)

```
void calculate(int n){
	a = n;

	if(n>0){
		calculate(n-1);
	}
}

```
--> Zwischen O(1) und O(log(n))

Welche Raumkomplexität hat folgender Algorithmus?

```
vector<int> vec;

for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			vec.push_back(i);
		}
}
```
O(n^2)


2) Sortieren: Sortiere manuell folgende Folge mithilfe des Bubblesort und mithilfe des Quicksort Algorithmus. Was fällt dir auf?

```
[ 3, 9, 4, 5, 1]

Bubblesort:
[ 3, 9, 4, 5, 1]
[ 3, 4, 9, 5, 1]
[ 3, 4, 5, 9, 1]
[ 3, 4, 5, 1, 9]
[ 3, 4, 1, 5, 9]
[ 3, 1, 4, 5, 9]
[ 1, 3, 4, 5, 9]

Quicksort:
[ 3, 9, 4, 5, 1]
[ 1] 3 [9, 4, 5]    Pivot 3
1, 3 [4, 5] 9       Pivot 9
[ 1, 3, 4, 5, 9]
```

3) Sortieren mit realen Daten: Sortiere Länder nach deren Fläche. Visualisiere dein Ergebnis (ofDrawBitmapString(name,x,y)).