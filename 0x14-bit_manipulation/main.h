#ifndef MAIN_H
#define MAIN_H

unsigned int convert_binary_to_uint(const char *binary_str);
void print_binary_representation(unsigned long int number);
int get_bit_at_index(unsigned long int number, unsigned int index);
int set_bit_at_index(unsigned long int *number, unsigned int index);
int clear_bit_at_index(unsigned long int *number, unsigned int index);
unsigned int flip_bits_in_number(unsigned long int number1, unsigned long int number2);
int custom_atoi(const char *string);
int custom_putchar(char character);
int determine_endianness(void);

#endif
