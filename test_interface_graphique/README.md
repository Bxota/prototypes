# Test Interface Graphique

Ce projet est un test d'une interface graphique en C++ utilisant SFML.

## Prérequis

- CMake (version 3.10 ou supérieure)
- SFML 2.5 ou supérieure
- Un compilateur C++ compatible C++17

### Installation des dépendances

#### Sur macOS

```bash
brew install sfml cmake
```

#### Sur Linux

```bash
sudo apt-get install libsfml-dev cmake
```

## Lancement

1. Créez et accédez au dossier de build :

```bash
mkdir build
cd build
```

2. Configurez le projet avec CMake :

```bash
cmake ..
```

3. Compilez le projet :

```bash
make
```

4. Lancez l'application :

```bash
./test_interface_graphique
```

## Structure

- main.cpp : Fichier principal du projet.
- CMakeLists.txt : Fichier de configuration CMake.
- Arial.ttf : Police de caractères utilisée dans l'interface.
- build/ : Dossier de build généré par CMake (ignoré par git).

## Nettoyage

Pour nettoyer les fichiers générés :

```bash
rm -rf build/
```
