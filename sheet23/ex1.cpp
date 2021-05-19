#include <iostream>
using namespace std;
const int N_max = 10, N_min = 4;
//void leggi (double vettore[], int n) /* legge e controlla n; carica nel vettore n elementi */
void leggi (double vettore[], int &n) // error: n instead of &n
{
 cout << "\n - Digita il numero di elementi n che vuoi inserire";
 cout << "\n (almeno " << N_min << " e non piu' di " << N_max << "): ";
 cin >> n;
 //while (n < N_min and n > N_max) error : and instead of or
 while (n < N_min or n > N_max)
 {
 cout << " - Errore: ridigita il numero di elementi n che vuoi inserire";
 cout << "\n (almeno " << N_min << " e non piu' di " << N_max << "): ";
 cin >> n;
 }
 for (int k = 0; k < n; k++)
 {
 cout << " - Elemento n. " << k + 1 << ": ";
 cin >> vettore[k];
 }
}
double calcola_minimo_scarto (const double vettore[], int n) /* ritorna il
minimo scarto tra i primi n elementi di vettore */
{
 double media = 0, temp;
 for (int k = 0; k < n; k++)
 	media += vettore[k];
 media = media/n;
 double minimo_scarto = abs(vettore[0]-media);
 for (int k = 1; k < n; k++)
 {
 temp = abs(vettore[k] - media);
 if (temp < minimo_scarto)
 //minimo_scarto = temp //error: ;
 minimo_scarto = temp;
 }
 return minimo_scarto;
}

void visualizza (const double vettore[], int n) /* visualizza i primi n elementi di vettore */
{
 for (int k = 0; k < n; k++)
 cout << vettore[k] << " ";
}
int main()
{
 double lista[N_max]; // memorizza i numeri inseriti in input
 int n; // numero di elementi digitati in input, N_min <= n <= N_max
 leggi(lista, n);
 //for (int k = 0; k <= n; k++) //error: 0 instead of 2
 for (int k = 2; k <= n; k++)
 {
 cout << "\n Il minimo scarto nella lista: ";
 visualizza(lista, k);
 cout << " vale " << calcola_minimo_scarto(lista, k);
 }
}