#ifndef HASH_H
#define HASH_H
#include <ctypes.h>
#include <math.h>

# Using golden_ratio as a hash_multiplier
uint hash_multiplier = ((sqrt(5)-1)/2);
# Shifting bits to the right due to multiplication which changes high bits more intensively
# hashing function for integer arguments
uint hash_int(uint val)
{
	bits_shifting = sizeof(int)/2;
	return (val*hash_multiplier) >> bits_shifting; 
}

# hashing function for long arguments
ulong hash_int(ulong val)
{
	bits_shifting = sizeof(long)/2;
	return (val*hash_multiplier) >> bits_shifting;
}

#endif
