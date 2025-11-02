
# Exercice 1 : Surcharge de l’opérateur + pour une classe Vecteur2D

##  Objectif
Implémenter la surcharge de l’opérateur `+` pour additionner deux vecteurs à deux dimensions.

##  Consignes
- Définir une classe `Vecteur2D` avec deux attributs privés `x` et `y`.
- Ajouter un constructeur pour initialiser ces valeurs.
- Surcharger l’opérateur `+` pour retourner un nouveau vecteur résultant de l’addition.
- Ajouter une méthode `afficher()` pour imprimer les composantes du vecteur.

##  Sortie attendue
<img width="634" height="230" alt="image" src="https://github.com/user-attachments/assets/a8a394f8-5d89-4d40-a845-d2bd4ce7d66e" />


# Exercice 2 : Surcharge des opérateurs == et != pour une classe Date

##  Objectif
Comparer deux dates en utilisant les opérateurs `==` et `!=`.

##  Consignes
- Définir une classe `Date` avec les attributs `jour`, `mois`, `annee`.
- Implémenter un constructeur pour initialiser ces valeurs.
- Surcharger `==` pour vérifier si deux dates sont identiques.
- Surcharger `!=` pour vérifier si elles sont différentes.
- Créer un programme principal pour tester la comparaison.

##  Sortie attendue
<img width="556" height="301" alt="image" src="https://github.com/user-attachments/assets/ae2b1dd9-685e-419c-80a8-e59362b7e312" />



# Exercice 3 : Surcharge de l’opérateur [] pour accéder aux éléments d’un tableau dynamique

##  Objectif
Simuler un tableau dynamique d’entiers avec un accès indexé sécurisé.

##  Consignes
- Créer une classe `Tableau` avec un attribut `int* data` et `int taille`.
- Initialiser le tableau dans un constructeur.
- Surcharger l’opérateur `[]` pour accéder aux éléments avec gestion des bornes.
- Lancer une exception `out_of_range` en cas d’index invalide.
- Ajouter un destructeur pour libérer la mémoire.

##  Sortie attendue
<img width="539" height="120" alt="image" src="https://github.com/user-attachments/assets/3a3646ca-6cf3-43b6-8831-72a789d0c658" />


# Exercice 4 : Surcharge de l’opérateur << pour l’affichage d’une classe Produit

##  Objectif
Personnaliser l’affichage d’un objet avec `std::cout`.

##  Consignes
- Créer une classe `Produit` avec les attributs `nom`, `prix`, `quantite`.
- Implémenter un constructeur pour initialiser ces valeurs.
- Surcharger l’opérateur `<<` (fonction amie) pour permettre l’affichage direct d’un objet avec `cout`.

##  Sortie attendue
<img width="707" height="95" alt="image" src="https://github.com/user-attachments/assets/99452110-1a8b-4d4b-b776-d01b58f82da9" />

