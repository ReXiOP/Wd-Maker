#ifndef WORDLIST_GENERATOR_UTIL_H
#define WORDLIST_GENERATOR_UTIL_H

#endif //WORDLIST_GENERATOR_UTIL_H

#define A 26 // Alphabet size
#define N 10 // Numbers (from 0 to 9)
#define S 50 // Max string size
#define X 26 // Special characters

/// Alphabet [1]
char *init_alphabet_uppercase(char *v); //_[5]
char *init_alphabet_lowercase(char *v); //_[5]
char *init_alphabet_uppercase_and_lowercase(char *v); //_[5]

/// Numbers [2]
int *init_numbers(int *v);

/// Alphabet and Numbers [1 & 2]:
int *manage_size(int *size, int *sol);

/// Str (Strings and Numbers) [3]
char **init_str(char **str, int *dim);

/// Guided [4]
char *insert_alphabet_chars(char *v, int *dim);
char *delete_alphabet_chars(char *del, int dim, int *dim_tmp);
char *insert_numbers(char *v, int *dim);
char *insert_special_chars(char *v, int *dim);

/// File [5]
void strcpy_format(char str1[], char str2[]);

/// Dictionary [6]
long int tot_dic(char *str);

/// All
void explication();
FILE *manage_file();
void print_count(int count, long int tot);
void end(int size);
void err_pointer(int err);
// Combinatorics
long int tot_arrangements_rep(int size, int base);
long int tot_arrangements(int n, int k);
