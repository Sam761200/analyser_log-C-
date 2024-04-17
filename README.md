# Analyseur de Logs en C

## Description

Cet Analyseur de Logs est un programme en C destiné à lire et analyser des fichiers log, identifiant et comptabilisant les occurrences de divers types de messages tels que les erreurs, les avertissements et les messages informatifs. Ce programme fournit des informations de base sur la fréquence de ces types de messages, ce qui peut s'avérer utile pour le suivi et le débogage d'applications.

## Fonctionnalités

- **Détection des erreurs** : Compte le nombre de messages d'erreur dans le fichier log.
- **Détection des avertissements** : Compte le nombre de messages d'avertissement.
- **Détection des messages informatifs** : Compte le nombre de messages informatifs.
- **Gestion des fichiers** : Lit les fichiers logs ligne par ligne, traitant chaque ligne pour détecter et catégoriser les messages.

## Prérequis

- Un compilateur GCC doit être installé sur votre système pour compiler ce programme. Le code est écrit en C standard, le rendant portable sur différents systèmes où GCC est disponible.

## Installation

Pour compiler le programme, ouvrez votre terminal, naviguez jusqu'au répertoire contenant le code source, et exécutez la commande suivante :

```bash
gcc -o analyseur_logs log_analyzer.c
```

Cette commande compile le fichier `log_analyzer.c` et crée un exécutable nommé `analyseur_logs`.

## Utilisation

Pour exécuter le programme, vous aurez besoin d'un fichier log. Vous pouvez utiliser un fichier log existant ou créer un exemple nommé `example.log` avec différents messages de log. Pour lancer le programme, exécutez :

```bash
./analyseur_logs example.log
```

## Comment contribuer

Les contributions sont bienvenues, que ce soit sous forme de feedback, de demandes de nouvelles fonctionnalités, de rapports de bugs, ou de pull requests. N'hésitez pas à forker le projet et à proposer vos améliorations.

## Licence

Ce projet est mis à disposition sous la Licence MIT, permettant une large utilisation, modification et distribution.
