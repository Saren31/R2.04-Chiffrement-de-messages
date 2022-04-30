Nous avons choisi le sujet numéro 3. 
Notre application permet de chiffrer et de déchiffrer un message en utilisant l'algorithme de Vigenèrere ou l'algorithme de César.
L'équipe est composée de Lucas Veslin (et aussi de Matthis Launay, Kunpeng Yu, Pablo Navarrete Falconio).

La fonction chiffrerCesar prend en paramètres d'entrées : un message (liste de caractères) et une clé (entier)
Elle prend en sortie : le message chiffré (liste de caractères)
La fonction va chiffrer le message à l'aide de la clé en utilisant le chiffrement de César

La fonction chiffrerVigenère prend en paramètres d'entrées : un message (liste de caractères) et une clé (entier)
Elle prend en sortie : le message chiffré (liste de caractères)
La fonction va chiffrer le message à l'aide de la clé en utilisant le chiffrement de Vigenère

La fonction déchiffrerCesar prend en paramètres d'entrées : un message (liste de caractères) et une clé (entier)
Elle prend en sortie : le message déchiffré (liste de caractères)
La fonction va déchiffrer le message à l'aide de la clé en utilisant le chiffrement de César

La fonction déchiffrerVigenère prend en paramètres d'entrées : un message (liste de caractères) et une clé (entier)
Elle prend en sortie : le message déchiffré (liste de caractères)
La fonction va déchiffrer le message à l'aide de la clé en utilisant le chiffrement de Vigenère

La fonction écritureCésar prend en paramètres d'entrées : un message chiffré(liste de caractères), un message déchiffré(liste de caractères), une clé (entier), un choix (entier)
Elle ne prend rien en sortie
La fonction va écrire dans un fichier le message chiffré, le message déchiffré, l'algorithme utilisé (algorithme de César), la clé utilisé et le choix de l'utilisateur (si l'utilisateur à choisi de chiffrer ou de déchiffrer le message pour utiliser l'affichage correspondant)

La fonction écritureVigenère prend en paramètres d'entrées : un message chiffré(liste de caractères), un message déchiffré(liste de caractères), une clé (entier), un choix (entier)
Elle ne prend rien en sortie
La fonction va écrire dans un fichier le message chiffré, le message déchiffré, l'algorithme utilisé (algorithme de Vigenère), la clé utilisé et le choix de l'utilisateur(si l'utilisateur à choisi de chiffrer ou de déchiffrer le message pour utiliser l'affichage correspondant)

La fonction verifier prend en paramètres d'entrées : un message ou une clé (chaîne de caractères)
Elle prend en sortie : un booleen (entier)
La fonction va renvoyer 1 si le message ne comprend pas de caractères interdits (quelque chose qui n'est pas dans l'alphabet) et 0 sinon

La fonction verifierClé prend en paramètres d'entrées : une clé (entier)
Elle prend en sortie : un booleen (entier)
La fonction va renvoyer 1 si le message comprend un nombre entre entre -26 et 26 (taille de l'alphabet) et 0 sinon

la fonction convertir ne fonctionne pas mais avait pour but de convertir les caractères accentués en lettre de l'alphabet

Un message d'erreur s'affichera si l'utilisateur rentre un message composé d'autre chose que des lettres de l'alphabet
Un message d'erreur s'affichera si l'utilisateur rentre une clé composé d'autre chose que des lettres de l'alphabet pour le chiffrement et le déchiffrement de Vigenère
Un message d'erreur s'affichera si l'utilisateur rentre une clé composé d'autre chose que d'un nombre entre -26 et 26 pour le chiffrement et le déchiffrement de Vigenère
Un message d'erreur s'affichera si l'utilisateur utilise autre chose qu'un chiffre entre 1 et 5 pour sélectionner l'option choisie dans le main

Il y aussi le fichier resultat.txt qui donne un compte rendu de ce que vous venez d'écrire dans l'application.