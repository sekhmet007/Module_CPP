Le C++98 > notion de base:

La nomenclature en C++ est un ensemble de conventions pour nommer les variables, les fonctions, les classes et autres éléments d'un programme. Ces conventions ne sont pas strictement définies par le standard C++98, mais sont plutôt des pratiques courantes dans la communauté des développeurs C++. Voici un prototype de nomenclature qui suit les conventions générales de C++98 :
	Variables:
	Noms descriptifs : Utiliser des noms qui décrivent clairement le but de la variable.
	CamelCase pour les variables locales : Par exemple, localVariable.
	snake_case pour les variables globales : Par exemple, global_variable.
	Préfixes pour certains types : Par exemple, p pour les pointeurs (pNode), m pour les membres de classe (mData).
	Fonctions:
	Noms descriptifs et verbeux : Par exemple, calculateInterest.
	CamelCase : Commencer par une lettre minuscule et utiliser des majuscules pour les mots suivants.
	Classes et Structures:
	Noms descriptifs : Par exemple, Car, LinkedList.
	PascalCase : Chaque mot commence par une lettre majuscule.
	Constantes:
	MAJUSCULES avec des underscores : Par exemple, MAX_SIZE, DEFAULT_VALUE.
	Énumérations:
	PascalCase pour le nom de l'énumération : Par exemple, Color.
	MAJUSCULES pour les valeurs : Par exemple, Color::RED, Color::BLUE.
	Espaces de noms (namespaces):
	Noms descriptifs et généralement en minuscules : Par exemple, std, myapp.
	Macros:
	Tout en MAJUSCULES : Par exemple, #define PI 3.14.




Exemple de Fichier d'En-tête (.hpp)

// MyClass.hpp
#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>

// Déclaration de la classe
class MyClass 
{
public:
    MyClass(); // Constructeur par défaut
    explicit MyClass(const std::string& name); // Constructeur avec paramètre
    ~MyClass(); // Destructeur

    MyClass(const MyClass& other); // Constructeur de copie
    MyClass& operator=(const MyClass& other); // Opérateur d'affectation

    void doSomething();

private:
    std::string mName;
};

#include "MyClass.tpp" // Inclusion du fichier .tpp pour les définitions de templates

#endif // MYCLASS_HPP

Exemple de Fichier Source (.cpp)
// MyClass.cpp
#include "MyClass.hpp"

MyClass::MyClass() : mName("") {
    // Constructeur par défaut
}

MyClass::MyClass(const std::string& name) : mName(name) {
    // Constructeur avec paramètre
}

MyClass::~MyClass() {
    // Destructeur
}

MyClass::MyClass(const MyClass& other) : mName(other.mName) {
    // Constructeur de copie
}

MyClass& MyClass::operator=(const MyClass& other) {
    if (this != &other) {
        mName = other.mName;
    }
    return *this;
}

void MyClass::doSomething() {
    // Code pour doSomething
}
Exemple de Fichier Template (.tpp)

// MyClass.tpp
#ifndef MYCLASS_TPP
#define MYCLASS_TPP

// Exemple d'une méthode template pour MyClass
template<typename T>
void MyClass::doTemplateThing(const T& param) {
    // Implémentation de la méthode template
}
#endif // MYCLASS_TPP

Héritage en C++98
L'héritage permet à une classe (appelée classe dérivée) de hériter des attributs et méthodes d'une autre classe (appelée classe de base). Cela facilite la réutilisation du code et l'extension des fonctionnalités.
	Classe de Base :
	Déclare des attributs et méthodes communs.
	Peut inclure des méthodes virtuelles pour permettre le polymorphisme.
	Classe Dérivée :
	Hérite des attributs et méthodes de la classe de base.
	Peut surcharger (override) les méthodes de la classe de base.
	Peut avoir ses propres attributs et méthodes supplémentaires.
Polymorphisme en C++98
Le polymorphisme permet aux objets de différentes classes dérivées d'être traités comme des objets de leur classe de base.
	Fonctions Virtuelles :
	Déclarées dans la classe de base.
	Peuvent être redéfinies (overridden) dans les classes dérivées.
	Utilisation :
	Un pointeur ou une référence de la classe de base peut pointer vers un objet de la classe dérivée.
	L'appel d'une méthode virtuelle sur ce pointeur invoquera la version de la méthode de la classe dérivée.
// Classe de base
class Base {
public:
    virtual void fonctionVirtuelle() { /* Implémentation par défaut */ }
};

// Classe dérivée
class Derivee : public Base {
public:
    void fonctionVirtuelle() override { /* Nouvelle implémentation */ }
};

// Utilisation du polymorphisme
Base* objet = new Derivee();
objet->fonctionVirtuelle();  // Appelle la méthode de Derivee


Dans cet exemple, Base est la classe de base avec une fonction virtuelle fonctionVirtuelle(). Derivee est une classe dérivée qui redéfinit fonctionVirtuelle(). Lorsqu'on appelle fonctionVirtuelle() sur un pointeur de type Base qui pointe vers un objet de type Derivee, la version de Derivee de la fonction est exécutée, démontrant le polymorphism

cout  (qui se prononce "c-out "), associé aux chevrons <<  , permet de faire sortir les données du programme.

cin ("c-in"), associé aux chevrons >>  , permet de faire entrer des informations dans le programme. 

Ex : #include <iostream>
using namespace std;

int main()
{
    cout << "Quel age avez-vous ?" << endl;

    int ageUtilisateur(0); //On prépare une case mémoire pour stocker un entier

    cin >> ageUtilisateur; //On fait entrer un nombre dans cette case

    cout << "Vous avez " << ageUtilisateur << " ans !" <<  endl; //Et on l'affiche

    return 0;
}

getline() : permet de récupérer toute la ligne que l’on rentre.
Pour modifier le contenu d'une variable de type int  , on écrit le nom de la variable suivi du symbole = puis de la nouvelle valeur.
C'est ce qu'on appelle l'affectation d'une variable.
Il est important de se rappeler que, lors d'une affectation, seule la variable à gauche du symbole =  est modifiée. Cela ne veut pas dire que les deux variables sont égales ! Juste que le contenu de celle de droite est copié dans celle de gauche.

Les constantes sont des variables qu'on ne peut pas modifier une fois qu'elles ont été créées. On utilise le mot const pour les définir.

En théorie, la condition if permet de faire tous les tests que l'on veut.
En pratique, il existe d'autres façons de faire des tests… La condition switch  , par exemple, permet de simplifier l'écriture de conditions qui testent plusieurs valeurs possibles pour une même variable

switch ne permet de tester que l'égalité. Vous ne pouvez pas tester "Si le nombre d'animaux est supérieur à 2" avec switch  : il faut dans ce cas utiliser if  .
De plus, switch ne peut travailler qu'avec des nombres entiers ( int  , unsigned int  , char  ). Il est impossible de tester des nombres décimaux ( double  ).
switch est donc limité en termes de possibilités, mais cette instruction propose une écriture alternative parfois plus pratique dans des cas simples.

La boucle for est généralement utilisée lorsqu'on sait combien de fois on souhaite répéter les instructions, tandis que while et do... while sont plutôt utilisées lorsqu'on souhaite répéter des instructions jusqu'à ce qu'une condition spécifique soit vérifiée.

On peut écrire des fonctions qui prennent des arguments de type différent.
Créez une fonction sans arguments
À l'inverse, on peut aussi créer des fonctions sans arguments. Il suffit de ne rien écrire entre les parenthèses !
Le passage par référence offre un gros avantage sur le passage par valeur : aucune copie n'est effectuée.
En utilisant un passage par référence, aucune copie n'est effectuée. Seulement, cette manière de procéder a un petit défaut : elle autorise la modification de l'argument. Eh oui, c'est justement dans ce but que les références existent.
La solution est d'utiliser ce que l'on appelle un passage par référence constante. On évite la copie en utilisant une référence, et l'on empêche la modification de l'argument en le déclarant constant.
Un fichier source dont l'extension est .cpp  : il contient le code source de la fonction.
Un fichier d'en-tête dont l'extension est .hpp  : il contient uniquement la description de la fonction, ce qu'on appelle le prototype de la fonction.
Lorsque le programme grossit, il est conseillé de créer plusieurs fichiers regroupant des fonctions. Les fichiers .cpp contiennent les définitions des fonctions et les fichiers .hpp  , plus courts, contiennent leurs prototypes. Les fichiers .hpp permettent d'annoncer l'existence des fonctions à l'ensemble des autres fichiers du programme.
Seul le prototype doit contenir les valeurs par défaut (pas la définition de la fonction) ;
Les valeurs par défaut doivent se trouver à la fin de la liste des paramètres (c'est-à-dire à droite).

Si la taille du tableau reste inchangée et est fixée dans le code source, alors on parle d'un tableau statique. 

int const tailleTableau(20);   //La taille du tableau
double anglesIcosagone[tailleTableau];

Déclarez un tableau dynamique
La première différence se situe au tout début de votre programme. Il faut ajouter la ligne #include <vector> pour utiliser ces tableaux
Changez la taille d'un tableau dynamique
Entrons maintenant dans le vif du sujet : faire varier la taille d'un tableau. Commençons par ajouter des cases à la fin d'un tableau. Il faut utiliser la fonction push_back()  .
On écrit le nom du tableau, suivi d'un point et du mot push_back avec, entre parenthèses, la valeur qui va remplir la nouvelle case 
On peut supprimer la dernière case d'un tableau en utilisant la fonction pop_back()  de la même manière que push_back()  , sauf qu'il n'y a rien à mettre entre les parenthèses 
Avec tableau.size()  , on récupère un entier correspondant au nombre d'éléments de tableau

Les vector et les fonctions
Passer un tableau dynamique en argument à une fonction est beaucoup plus simple que pour les tableaux statiques. Comme pour n'importe quel autre type, il suffit de mettre vector<type> en argument.
Grâce à la fonction size()  , il n'y a même pas besoin d'ajouter un deuxième argument pour la taille du tableau ! Cela donne tout simplement :
//Une fonction recevant un tableau d'entiers en argument
void fonction(vector<int> a)
{
    //…
}

On ne peut passer un vector<int> qu'à une fonction recevant un vector<int>  , pas à une fonction attendant un vector<char>  .
Il ne faut pas mélanger les types des éléments stockés !

Vous connaissez déjà iostream qui contient les outils nécessaires aux entrées/sorties vers la console. iostream signifie "input/output stream", ce qui veut dire "flux d'entrées/sorties", en français. 
fstream correspond à "file stream" ou "flux vers les fichiers", en français

il faut utiliser la fonction c_str() lors de l'ouverture du fichier
Il y a trois manières différentes de lire un fichier :
Ligne par ligne, en utilisant getline()  .
Mot par mot, en utilisant les chevrons >>  .
Caractère par caractère, en utilisant get()  .

Pour savoir si l'on peut continuer à lire, il faut utiliser la valeur renvoyée par la fonction getline()  .
En plus de lire une ligne, cette fonction renvoie un bool indiquant si l'on peut continuer à lire. Si la fonction renvoie true  , tout va bien, la lecture peut continuer. Si elle renvoie false  , c'est qu'on est arrivé à la fin du fichier ou qu'il y a eu une erreur. Dans les deux cas, il faut s'arrêter de lire.

Il arrive par contre qu'on ait besoin de fermer le fichier avant sa fermeture automatique. Il faut alors utiliser la fonction close() des flux.

Certaines personnes aiment utiliser open() et close()  , alors que ce n'est pas nécessaire. On peut ainsi mieux voir où le fichier est ouvert et où il est refermé. C'est une question de goût, à vous de voir ce que vous préférez.

Un pointeur est une variable qui contient l'adresse d'une autre variable. Retenez bien cette phrase. Elle peut vous sauver la vie dans les moments les plus difficiles de ce chapitre.

il faut toujours déclarer un pointeur en lui donnant la valeur 0.

Stockez une adresse
Maintenant qu'on a la variable, il n'y a plus qu'à y mettre une valeur. Vous savez déjà comment obtenir l'adresse d'une variable (rappelez-vous du &  )

En faisant cout << *ptr 
En utilisant l'étoile  *  , on accède à la valeur de la variable pointée.
C'est ce qui s'appelle "déréférencer" un pointeurPour une variable int nombre  :
nombre permet d'accéder à la valeur de la variable ;
&nombre permet d'accéder à l'adresse de la variable.
Sur un pointeur int *pointeur  :
pointeur permet d'accéder à la valeur du pointeur, c'est-à-dire à l'adresse de la variable pointée ;
*pointeur permet d'accéder à la valeur de la variable pointée.

Pour demander manuellement une case dans la mémoire, il faut utiliser l'opérateur new
int *pointeur(0);
pointeur = new int;

Une fois que l'on n'a plus besoin de la case mémoire, il faut la rendre à l'ordinateur.
Cela se fait via l'opérateur delete 

Si l'on suit la flèche, on arrive sur une case qui ne nous appartient pas. Il faut donc impérativement empêcher cela. Imaginez que cette case soit soudainement utilisée par un autre programme ! Vous risqueriez de modifier les variables de cet autre programme.
Après avoir fait appel à delete  , il est donc essentiel de supprimer cette "flèche" en mettant le pointeur à l'adresse 0.
Ne pas le faire est une cause très courante de plantage des programmes.

Utilisez des pointeurs dans les cas suivants

Je vous avais promis des explications sur quand utiliser des pointeurs. Les voici !
Il y a en réalité trois cas d'application :
Gérer soi-même le moment de la création et de la destruction des cases mémoire.
Partager une variable dans plusieurs morceaux du code.
Sélectionner une valeur parmi plusieurs options.
Si vous n'êtes dans aucun de ces trois cas, c'est très certainement que vous n'avez pas besoin des pointeurs.

