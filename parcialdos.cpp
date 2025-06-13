#include <iostream>
#include <string>
using namespace std;

string uno(string alias[], int asesinatos[], int n) {
    string nombre = alias[0];
    int ma = asesinatos[0];
    for (int i = 1; i < n; i++) {
        if (asesinatos[i] > ma) {
            nombre = alias[i];
            ma = asesinatos[i];
        }
    }
    return nombre;
}

int dos(int bajas[], int tiempo[], int n) {
    int ho = tiempo[0], ba = bajas[0];
    for (int i = 1; i < n; i++) {
        if (bajas[i] > ba) {
            ho = tiempo[i];
            ba = bajas[i];
        }
    }
    return ho;
}

float tres(int tiempo[], int bajas[], int n) {
    int cantidad = 0, baj = 0;
    for (int i = 0; i < n; i++) {
        if (tiempo[i] >= 100 && tiempo[i] <= 200) {
            cantidad++;
            baj += bajas[i];
        }
    }
    if (cantidad > 0) {
        return baj/ cantidad;
    }
    return 0;
}

int cuatro(int edad[], int asesinatos[], int n) {
    int ases = asesinatos[0], eda = edad[0];
    for (int i = 1; i < n; i++) {
        if (edad[i] > eda) {
            ases = asesinatos[i];
            eda = edad[i];
        }
    }
    return ases;
}

string cinco(string alias[], int edad[], int n) {
    string c = alias[0];
    int e = edad[0];
    for (int i = 1; i < n; i++) {
        if (edad[i] < e) {
            c = alias[i];
            e = edad[i];
        }
    }
    return c;
}

float seis(int bajas[], int n) {
    int b = 0;
    for (int i = 0; i < n; i++) {
        b += bajas[i];
    }
    return (float)b / n;
}

int siete(int edad[], int asesinatos[], int n) {
    int e = edad[0], a = asesinatos[0];
    for (int i = 1; i < n; i++) {
        if (asesinatos[i] < a) {
            e = edad[i];
            a = asesinatos[i];
        }
    }
    return e;
}

float ocho(int edad[], int bajas[], int n) {
    int suma = 0, cont = 0;
    for (int i = 0; i < n; i++) {
        if (edad[i] >= 15 && edad[i] <= 20) {
            suma += bajas[i];
            cont++;
        }
    }
    if (cont > 0) {
        return (float)suma / cont;
    }
    return 0;
}

string nueve(string alias[], int armas[], int n) {
    string mayor = alias[0];
    int maxArmas = armas[0];
    for (int i = 1; i < n; i++) {
        if (armas[i] > maxArmas) {
            maxArmas = armas[i];
            mayor = alias[i];
        }
    }
    return mayor;
}

float diez(int edad[], int bajas[], int n) {
    int suma = 0, cont = 0;
    for (int i = 0; i < n; i++) {
        if (edad[i] < 20) {
            suma += bajas[i];
            cont++;
        }
    }
    if (cont > 0) {
        return (float)suma / cont;
    }
    return 0;
}

float once(int edad[], int bajas[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (edad[i] >= 18 && edad[i] <= 22) {
            suma += bajas[i];
        }
    }
    return (float)suma / n;
}

int doce(int asesinatos[], int tiempo[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (asesinatos[i] > 30) {
            suma += tiempo[i];
        }
    }
    return suma;
}

int trece(int asesinatos[], int bajas[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (bajas[i] > asesinatos[i]) {
            cont++;
        }
    }
    return cont;
}

float catorce(int asesinatos[], int bajas[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (asesinatos[i] > bajas[i]) {
            cont++;
        }
    }
    return (float)cont/ n;
}

string quince(string alias[], int armas[], int n) {
    string menor = alias[0];
    int minArmas = armas[0];
    for (int i = 1; i < n; i++) {
        if (armas[i] < minArmas) {
            minArmas = armas[i];
            menor = alias[i];
        }
    }
    return menor;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de jugadores: ";
    cin >> n;

    string alias[n];
    int asesinatos[n], armas[n], bajas[n], edad[n], tiempo[n];

    for (int i = 0; i < n; i++) {
        cout << "\nJugador " << i + 1 << endl;
        cout << "Alias: ";
        cin >> alias[i];
        cout << "Cantidad de asesinatos: ";
        cin >> asesinatos[i];
        cout << "Cantidad de armas utilizadas: ";
        cin >> armas[i];
        cout << "Cantidad de bajas recibidas: ";
        cin >> bajas[i];
        cout << "Edad: ";
        cin >> edad[i];
        cout << "Minutos jugados: ";
        cin >> tiempo[i];
    }

    cout << "\n----- RESULTADOS -----"<<endl;
    cout << "1. Alias del jugador con mas asesinatos: " << uno(alias, asesinatos, n) << endl;
    cout << "2. Minutos del jugador con mas bajas recibidas: " << dos(bajas, tiempo, n) << endl;
    cout << "3. % de muertes de jugadores con 100 a 200 minutos: " << tres(tiempo, bajas, n) << "%" << endl;
    cout << "4. Asesinatos del jugador de mayor edad: " << cuatro(edad, asesinatos, n) << endl;
    cout << "5. Alias del jugador de menor edad: " << cinco(alias, edad, n) << endl;
    cout << "6. Promedio de muertes por jugador: " << seis(bajas, n) << endl;
    cout << "7. Edad del jugador con menos asesinatos: " << siete(edad, asesinatos, n) << endl;
    cout << "8. Promedio de bajas (jugadores entre 15 y 20 años): " << ocho(edad, bajas, n) << endl;
    cout << "9. Alias del jugador con más armas usadas: " << nueve(alias, armas, n) << endl;
    cout << "10. Promedio de bajas (jugadores menores de 20): " << diez(edad, bajas, n) << endl;
    cout << "11. Promedio de bajas (jugadores entre 18 y 22) / total jugadores: " << once(edad, bajas, n) << endl;
    cout << "12. Suma de minutos de jugadores con más de 30 asesinatos: " << doce(asesinatos, tiempo, n) << endl;
    cout << "13. Cantidad de jugadores que recibieron más bajas que asesinatos: " << trece(asesinatos, bajas, n) << endl;
    cout << "14. % de jugadores con más asesinatos que bajas: " << catorce(asesinatos, bajas, n) << "%" << endl;
    cout << "15. Alias del jugador con menos armas utilizadas: " << quince(alias, armas, n) << endl;

    return 0;
}
