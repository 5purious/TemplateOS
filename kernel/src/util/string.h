#ifndef STRING_H
#define STRING_H

#include <stddef.h>
#include <stdint.h>

extern char res[25];

size_t strlen(const char* const STR);
char* dec2str(int dec);
char* hex2str(uint32_t hex_num);
uint8_t strncmp(char* s1, char* s2, uint32_t n);
char* strncpy(char* dst, const char* src, const uint8_t len);
#endif
