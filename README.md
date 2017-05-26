# Fillit

L'objectif est de rendre le plus petit "carré" possible (qui peut contenir des trous) avec une liste donnée de tetriminos, mais la disposition doit être telle qu'elle renvoie la première solution possible en les plaçant récursivement en haut à gauche.

L'objectif est d'accoler un ensemble de tetriminos donnés dans une liste a l'intérieur du plus petit carré possible. Ce carré peut contenir des espace vide (des trous). La première solution à présenter doit correspondre a une disposition où les pièces sont placées en priorité numéro un le plus en haut possible et en priorité numéro deux le plus à gauche possible. 

## Compiling

executer `make`, un exécutable nommé `fillit` devrait compiler directement. Veuillez soumettre un problème si vous en rencontrez.

## Usage

`./fillit [file]`

Exemple:

```
~ ./fillit test/test_8

.AABB..
AACCB..
.CC.BDD
.EE.DD.
EEFFGG.
.FFGGHH
....HH.
```
