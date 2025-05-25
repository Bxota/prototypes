# Prototypes

Ce projet contient différents prototypes de projets.

## Navigation

- [prototype_crypto_tracker_ios](prototype_crypto_tracker_ios/README.md)
- [test_interface_graphique](test_interface_graphique/README.md)
- [test_header_metamask](test_header_metamask/README.md)
- [test_animation_scroll_letter](test_animation_scroll_letter/README.md)
- [prototype_audio_extension_chrome](prototype_audio_extension_chrome/README.md)
- [prototypes_lib_c](prototypes_lib_c/README.md)

## Structure du projet

- prototype_crypto_tracker_ios : Prototype d'une application iOS pour suivre les cryptomonnaies.
- test_interface_graphique : Test d'une interface graphique en C++.
- test_header_metamask : Test d'un header pour Metamask.
- test_animation_scroll_letter : Test d'une animation de défilement de lettres.
- prototype_audio_extension_chrome : Prototype d'une extension Chrome pour l'audio.
- prototypes_lib_c : Prototypes de bibliothèques en C.

## Lancement des prototypes

### prototype_crypto_tracker_ios

Ouvrez le projet dans Xcode et lancez-le.

### test_interface_graphique

```bash
cd test_interface_graphique
mkdir build
cd build
cmake ..
make
./test_interface_graphique
```

### test_header_metamask

Ouvrez le fichier test.html dans un navigateur.

### test_animation_scroll_letter

Ouvrez le fichier test.html dans un navigateur.

### prototype_audio_extension_chrome

Ouvrez le dossier dans Chrome et chargez l'extension.

### prototypes_lib_c

```bash
cd prototypes_lib_c
gcc -o a.out *.c
./a.out
```

## Nettoyage

Pour nettoyer les fichiers générés, exécutez la commande suivante :

```bash
find . -name "*.o" -o -name "*.out" -o -name "*.exe" -o -name ".DS_Store" | xargs rm -f
```
