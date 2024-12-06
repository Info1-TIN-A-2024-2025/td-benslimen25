#include <stdio.h>

int main() {
    int n;
    
    // Lire l'entier n
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    // Boucle pour afficher la séquence de Collatz
    while (n != 1) {
        printf("%d ", n);  // Afficher le nombre actuel
        
        if (n % 2 == 0) {
            n = n / 2;  // Si n est pair, on le divise par 2
        } else {
            n = 3 * n + 1;  // Si n est impair, on le multiplie par 3 et on ajoute 1
        }
    }
    
    // Afficher le dernier nombre (1)
    printf("1\n");

    return 0;
}
