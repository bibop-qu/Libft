Libft
=====

Premier projet à l'école 42.
Librairie de 52 fontions utiles pour la suite

ft_memset: ecrit len bytes de la valeur c (convertie en unsigned char) dans la string b.

ft_bzero:  ecrit n bytes 0 dans la string s.

ft_memcpy: copy n bytes d'une plage memoire src dans dst.

ft_memccpy: copy n bytes d'une plage memoire src dans dst jusqu'a rencontrer c.

ft_memmove: copy len bytes d'une plage memoire src dans dst. les deux chaines peuvent se chevaucher.

ft_memchr: retourne un pointeur sur la premiere occurrence de c dans la chaine s.

ft_memcmp: compare deux chaines et retourne 0 si elles sont identique, sinon la difference entre les deux premiers bytes non identique.

ft_strlen: retourne la taille d'une chaine.

ft_strdup: alloue la memoire necessaire et fait une copie de la chaine passer en parametre.

ft_strcpy: copie la chaine src dans dst avec le '\0' inclue.

ft_strncpy: copy n byte de src dans dst et ajoute des '\0' si n est supperieur a la taille de src.

ft_strcat: retourne une copie de la chaine s1 + s2 mis bout a bout.

ft_strlcat: meme fonctionnement que strcat en plus "securise".

ft_strchr: 
