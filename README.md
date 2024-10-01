# Libft 📚

Bienvenue dans **Libft**, une bibliothèque standard que j'ai créée en tant que projet à l'école 42. Cette bibliothèque implémente des fonctions de base en C, inspirées de la libc. 

### Auteurs ✍️
- **Mbah** - [mbah@student.42lyon.fr](mailto:mbah@student.42lyon.fr)

## Table des matières 📖

- [Fonctions de la bibliothèque](#fonctions-de-la-bibliothèque)
- [Instructions d'installation](#instructions-dinstallation)
- [Contributions](#contributions)
- [License](#license)

## Fonctions de la bibliothèque 🛠️

### Fonctions de conversion et de vérification 🔍

1. **`ft_atoi`**  
   Convertit une chaîne de caractères en entier.  
   **Prototype** : `int ft_atoi(const char *str);`

2. **`ft_isalnum`**  
   Vérifie si le caractère est alphanumérique.  
   **Prototype** : `int ft_isalnum(int c);`

3. **`ft_isalpha`**  
   Vérifie si le caractère est alphabétique.  
   **Prototype** : `int ft_isalpha(int c);`

4. **`ft_isascii`**  
   Vérifie si le caractère est un caractère ASCII.  
   **Prototype** : `int ft_isascii(int c);`

5. **`ft_isdigit`**  
   Vérifie si le caractère est un chiffre.  
   **Prototype** : `int ft_isdigit(int c);`

6. **`ft_islower`**  
   Vérifie si le caractère est en minuscule.  
   **Prototype** : `int ft_islower(int c);`

7. **`ft_isprint`**  
   Vérifie si le caractère est imprimable.  
   **Prototype** : `int ft_isprint(int c);`

8. **`ft_isspace`**  
   Vérifie si le caractère est un espace.  
   **Prototype** : `int ft_isspace(int c);`

9. **`ft_isupper`**  
   Vérifie si le caractère est en majuscule.  
   **Prototype** : `int ft_isupper(int c);`

---

### Fonctions de manipulation de chaînes de caractères 🔗

10. **`ft_bzero`**  
    Met à zéro une portion de mémoire.  
    **Prototype** : `void ft_bzero(void *s, size_t len);`

11. **`ft_calloc`**  
    Alloue de la mémoire et l'initialise à zéro.  
    **Prototype** : `void *ft_calloc(size_t count, size_t size);`

12. **`ft_itoa`**  
    Convertit un entier en chaîne de caractères.  
    **Prototype** : `char *ft_itoa(int n);`

13. **`ft_putchar_fd`**  
    Écrit un caractère dans un fichier.  
    **Prototype** : `void ft_putchar_fd(char c, int fd);`

14. **`ft_putendl_fd`**  
    Écrit une chaîne de caractères suivie d'un saut de ligne dans un fichier.  
    **Prototype** : `void ft_putendl_fd(char *s, int fd);`

15. **`ft_putnbr_fd`**  
    Écrit un entier dans un fichier.  
    **Prototype** : `void ft_putnbr_fd(int n, int fd);`

16. **`ft_putstr_fd`**  
    Écrit une chaîne de caractères dans un fichier.  
    **Prototype** : `void ft_putstr_fd(char *s, int fd);`

17. **`ft_split`**  
    Divise une chaîne de caractères en un tableau de sous-chaînes.  
    **Prototype** : `char **ft_split(char const *s, char c);`

18. **`ft_strcat`**  
    Concatène deux chaînes de caractères.  
    **Prototype** : `char *ft_strcat(char *dest, const char *src);`

19. **`ft_strchr`**  
    Recherche la première occurrence d'un caractère dans une chaîne.  
    **Prototype** : `char *ft_strchr(const char *s, int c);`

20. **`ft_strcpy`**  
    Copie une chaîne de caractères dans une autre.  
    **Prototype** : `char *ft_strcpy(char *dest, const char *src);`

21. **`ft_strdup`**  
    Duplique une chaîne de caractères.  
    **Prototype** : `char *ft_strdup(const char *s1);`

22. **`ft_striteri`**  
    Applique une fonction à chaque caractère d'une chaîne.  
    **Prototype** : `void ft_striteri(char *s, void (*f)(unsigned int, char*));`

23. **`ft_strjoin`**  
    Concatène deux chaînes de caractères.  
    **Prototype** : `char *ft_strjoin(char const *s1, char const *s2);`

24. **`ft_strlcat`**  
    Concatène deux chaînes de caractères en respectant la limite de taille.  
    **Prototype** : `size_t ft_strlcat(char *dest, const char *src, size_t size);`

25. **`ft_strlcpy`**  
    Copie une chaîne de caractères en respectant la limite de taille.  
    **Prototype** : `size_t ft_strlcpy(char *dest, const char *src, size_t size);`

26. **`ft_strlen`**  
    Renvoie la longueur d'une chaîne de caractères.  
    **Prototype** : `size_t ft_strlen(const char *s);`

27. **`ft_strmapi`**  
    Applique une fonction à chaque caractère d'une chaîne et renvoie une nouvelle chaîne.  
    **Prototype** : `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`

28. **`ft_strncmp`**  
    Compare les n premiers caractères de deux chaînes.  
    **Prototype** : `int ft_strncmp(const char *s1, const char *s2, size_t n);`

29. **`ft_strnstr`**  
    Recherche une sous-chaîne dans une chaîne.  
    **Prototype** : `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`

30. **`ft_strrchr`**  
    Recherche la dernière occurrence d'un caractère dans une chaîne.  
    **Prototype** : `char *ft_strrchr(const char *s, int c);`

31. **`ft_strtrim`**  
    Supprime les espaces au début et à la fin d'une chaîne.  
    **Prototype** : `char *ft_strtrim(char const *s1, char const *set);`

32. **`ft_substr`**  
    Crée une sous-chaîne à partir d'une chaîne.  
    **Prototype** : `char *ft_substr(char const *s, unsigned int start, size_t len);`

33. **`ft_tolower`**  
    Convertit un caractère en minuscule.  
    **Prototype** : `int ft_tolower(int c);`

34. **`ft_toupper`**  
    Convertit un caractère en majuscule.  
    **Prototype** : `int ft_toupper(int c);`

---

### Gestion des listes (Bonus) 🗂️

35. **`ft_lstnew_bonus`**  
    🆕 Crée un nouvel élément de liste.  
    **Prototype** : `t_list *ft_lstnew(void *content);`

36. **`ft_lstadd_front_bonus`**  
    ➡️ Ajoute un élément au début de la liste.  
    **Prototype** : `void ft_lstadd_front(t_list **lst, t_list *new);`

37. **`ft_lstsize_bonus`**  
    📏 Renvoie le nombre d'éléments dans la liste.  
    **Prototype** : `int ft_lstsize(t_list *lst);`

38. **`ft_lstlast_bonus`**  
    📍 Renvoie le dernier élément de la liste.  
    **Prototype** : `t_list *ft_lstlast(t_list *lst);`

39. **`ft_lstadd_back_bonus`**  
    ➕ Ajoute un élément à la fin de la liste.  
    **Prototype** : `void ft_lstadd_back(t_list **lst, t_list *new);`

40. **`ft_lstdelone_bonus`**  
    🗑️ Supprime un élément de la liste et libère la mémoire.  
    **Prototype** : `void ft_lstdelone(t_list *lst, void (*del)(void*));`

41. **`ft_lstclear_bonus`**  
    🚮 Supprime tous les éléments de la liste et libère la mémoire.  
    **Prototype** : `void ft_lstclear(t_list **lst, void (*del)(void*));`

42. **`ft_lstiter_bonus`**  
    🔄 Applique la fonction `f` à chaque élément de la liste.  
    **Prototype** : `void ft_lstiter(t_list *lst, void (*f)(void *));`

43. **`ft_lstmap_bonus`**  
    🗺️ Applique une fonction à chaque élément de la liste et renvoie une nouvelle liste.  
    **Prototype** : `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

---

### Fonctions de manipulation de la mémoire 🧠

44. **`ft_memccpy`**  
    Copie jusqu'à `n` octets de la source vers la destination.  
    **Prototype** : `void *ft_memccpy(void *dest, const void *src, int c, size_t n);`

45. **`ft_memchr`**  
    Recherche un caractère dans une zone de mémoire.  
    **Prototype** : `void *ft_memchr(const void *s, int c, size_t n);`

46. **`ft_memcmp`**  
    Compare `n` octets de deux zones de mémoire.  
    **Prototype** : `int ft_memcmp(const void *s1, const void *s2, size_t n);`

47. **`ft_memcpy`**  
    Copie `n` octets de la source vers la destination.  
    **Prototype** : `void *ft_memcpy(void *dest, const void *src, size_t n);`

48. **`ft_memmove`**  
    Déplace `n` octets d'une zone mémoire à une autre.  
    **Prototype** : `void *ft_memmove(void *dest, const void *src, size_t n);`

49. **`ft_memset`**  
    Remplit une zone de mémoire avec un octet donné.  
    **Prototype** : `void *ft_memset(void *s, int c, size_t len);`

---

### En-tête de la bibliothèque 📜

50. **`libft.h`**  
    Fichier d'en-tête contenant les prototypes de toutes les fonctions de la bibliothèque.

---

## Instructions d'installation ⚙️

Pour compiler la bibliothèque, utilisez la commande suivante :

```bash
make
