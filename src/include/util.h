#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>

#define MAX(A, B)               ((A) > (B) ? (A) : (B))
#define MIN(A, B)               ((A) < (B) ? (A) : (B))
#define BETWEEN(X, A, B)        ((A) <= (X) && (X) <= (B))


void die(const char *fmt, ...);
void* check_calloc(size_t nmemb, size_t size);


#endif
