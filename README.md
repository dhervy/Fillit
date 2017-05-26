# Fillit

L'objectif est d'accoler un ensemble de tetriminos donnés dans une liste, à l'intérieur du plus petit carré possible. Ce carré peut contenir des espaces vides (des trous). La première solution à présenter doit correspondre à une disposition où les pièces sont placées:
* en priorité numéro un le plus en haut possible.
* en priorité numéro deux le plus à gauche possible. 

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
