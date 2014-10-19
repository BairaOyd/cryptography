#ifndef _GEN_LIB_H
#define _GEN_LIB_H

//#define DEBUG

#ifdef DEBUG
	#include <iostream>
#endif

#include <gmp.h>
#include <gmpxx.h>
#include <string>
#include <cstdlib>
#include <assert.h>

class gen {
	public:
		static void seed(unsigned long int s);
		static mpz_class kbit_odd_random(int k);
		static mpz_class kbit_prime_random(int k);	
		static mpz_class random_in_cyclic_group(mpz_class group_order);
		static mpz_class modular_power(mpz_class base, mpz_class exp, mpz_class mod); 
		static mpz_class safe_prime(int k);
		static mpz_class cyclic_group_generator(mpz_class n );
		
		
		static void set_security_parameter(int t);
		static void set_small_primes_check_count(int cnt);

	private:
		
		static int small_primes_check_count;
		static int security_parameter;
		static int primes_table[1000];
		static gmp_randclass rand;
};

#endif // _GEN_LIB_H
