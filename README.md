# Fillit

L'objectif est de rendre le plus petit "carré" possible (qui peut contenir des trous) avec une liste donnée de tetriminos, mais la disposition doit être telle qu'elle renvoie la première solution possible en les plaçant récursivement en haut à gauche.

## Compiling

executer `make`, un exécutable nommé `fillit` devrait compiler directement. Veuillez soumettre un problème si vous en rencontrez.

## Usage

`./fillit [file]`

Exemple:

`
~ ./fillit test/test_8

.AABB..
AACCB..
.CC.BDD
.EE.DD.
EEFFGG.
.FFGGHH
....HH.
`
