# Fillit

L'objectif est de rendre le plus petit "carré" possible (qui peut contenir des trous) avec une liste donnée de tetriminos, mais la disposition doit être telle qu'elle renvoie la première solution possible en les plaçant récursivement en haut à gauche.

L'objectif est d'accoler un ensemble de tetriminos donnés dans une liste a l'intérieur du plus petit carré possible. Ce carré peut contenir des espace vide (des trous). La disposition doit être telle que la premiere solution presenter doit être de placer en priorité numéro un les pièce le plus en haut possible et en priorité numéro deux le plus a gauche possible.

La première solution a présenter doit correspondre a une disposition ou les pièces sont placé en priorité numéro un le plus en haut possible et en priorité numero 2 le plus a gauche possible. 

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
