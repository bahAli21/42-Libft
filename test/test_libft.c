/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:10:17 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 19:03:43 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

// Fonctions de test avec comparaison
void test_atoi(char *str, int expected)
{
    int result = ft_atoi(str);
    if (result == expected)
        __builtin_printf("ATOI    -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ATOI    -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isalnum(int c, int expected)
{
    int result = ft_isalnum(c);
    if (result == expected)
        __builtin_printf("ISALNUM -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISALNUM -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isalpha(int c, int expected)
{
    int result = ft_isalpha(c);
    if (result == expected)
        __builtin_printf("ISALPHA -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISALPHA -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isascii(int c, int expected)
{
    int result = ft_isascii(c);
    if (result == expected)
        __builtin_printf("ISASCII -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISASCII -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isdigit(int c, int expected)
{
    int result = ft_isdigit(c);
    if (result == expected)
        __builtin_printf("ISDIGIT -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISDIGIT -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_islower(int c, int expected)
{
    int result = ft_islower(c);
    if (result == expected)
        __builtin_printf("ISLOWER -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISLOWER -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isupper(int c, int expected)
{
    int result = ft_isupper(c);
    if (result == expected)
        __builtin_printf("ISUPPER -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISUPPER -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isspace(int c, int expected)
{
    int result = ft_isspace(c);
    if (result == expected)
        __builtin_printf("ISSPACE -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISSPACE -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_isprint(int c, int expected)
{
    int result = ft_isprint(c);
    if (result == expected)
        __builtin_printf("ISPRINT -> TEST :: 👍 OK (returned: %d)\n", result);
    else
        __builtin_printf("ISPRINT -> TEST :: 👎 KO (returned: %d, expected: %d)\n", result, expected);
}

void test_bzero(size_t n)
{
    char buffer1[100];
    char buffer2[100];
    memset(buffer1, 'A', 100);
    memset(buffer2, 'A', 100);
    bzero(buffer1, n);
    ft_bzero(buffer2, n);
    if (memcmp(buffer1, buffer2, 100) == 0)
        __builtin_printf("BZERO   -> TEST :: 👍 OK\n");
    else
        __builtin_printf("BZERO   -> TEST :: 👎 KO\n");
}

void test_calloc(size_t nmemb, size_t size)
{
    void *expected = calloc(nmemb, size);
    void *result = ft_calloc(nmemb, size);
    if (expected == NULL || result == NULL)
    {
        __builtin_printf("CALLOC -> TEST :: 👎 KO (Allocation failed)\n");
        free(expected);
        free(result);
        return;
    }
    if (memcmp(expected, result, nmemb * size) == 0)
        __builtin_printf("CALLOC  -> TEST :: 👍 OK\n");
    else
        __builtin_printf("CALLOC   -> TEST :: 👎 KO (Memory mismatch)\n");
    free(expected);
    free(result);
}

void test_itoa(int n, const char *expected)
{
    char *result = ft_itoa(n);
    if (strcmp(result, expected) == 0)
        __builtin_printf("ITOA    -> TEST %d: 👍 OK (Result: %s)\n", n, result);
    else
        __builtin_printf("ITOA    -> TEST %d: 👎 KO (Expected: %s, Got: %s)\n", n, expected, result);
    free(result);
}

// Exemple de main avec valeurs attendues

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        __builtin_printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    test_atoi(argv[1], 23);                   // Remplacez 23 par la valeur attendue pour ce test
    test_isalnum(4, 0);                      // Ex: isalnum(4) doit renvoyer 0
    test_isalpha('0', 0);                   // Ex: '0' n'est pas alpha, donc 0 est attendu
    test_isascii('-', 1);                  // '-' est dans l'ASCII, donc 1 est attendu
    test_isdigit(50, 1);                  // 50 ('2') est un chiffre, donc 1
    test_islower('z', 1);                // 'z' est en minuscule, donc 1
    test_isupper('d', 0);               // 'd' n'est pas majuscule, donc 0
    test_isspace('\r', 1);                      // '\r' est un espace blanc, donc 1
    test_isprint('\t', 0);                     // '\t' n'est pas imprimable, donc 0
    test_bzero(5);                            // Test avec une taille de 5
    test_calloc(10, sizeof(char));           // Test pour 10 caractères
    test_itoa(2147483647, "2147483647");    // Limite supérieure des int
    test_itoa(-2147483648, "-2147483648"); // Limite inférieure des int
    return (0);
}
