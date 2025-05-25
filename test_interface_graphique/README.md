# Application Coucou

Une simple application qui affiche "Coucou" dans une fenêtre graphique.

## Prérequis

- CMake (version 3.10 ou supérieure)
- SFML 2.5 ou supérieure
- Un compilateur C++ compatible C++17

## Installation de SFML sur macOS

Vous pouvez installer SFML en utilisant Homebrew :

```bash
brew install sfml
```

## Compilation

1. Créez un dossier build et accédez-y :

```bash
mkdir build
cd build
```

2. Générez les fichiers de build avec CMake :

```bash
cmake ..
```

3. Compilez le projet :

```bash
make
```

## Exécution

Dans le dossier build, exécutez :

```bash
./CoucouApp
```

Une fenêtre devrait s'ouvrir avec le texte "Coucou" centré.
