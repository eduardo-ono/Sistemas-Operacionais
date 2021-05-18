#include <stdio.h>
#include <conio.h>
#include <pthread.h>

void* exibirPrimos( void *p )
{
	long* v = (long*)p;
	long n0 = v[0];
	long n1 = v[1];
	int primo;
	long n, i;
	
	for ( n = n0; n <= n1; n++ )
	{
		primo = 1;
		if ( n == 1 ) primo = 0;
		for ( i = 2; i <= n/2; i++ )
			if ( n%i == 0 )
			{
				primo = 0;
				break;
			}
		if ( primo ) printf( "%ld\n", n );
	}

	return NULL;
}

int main()
{
	long n1 = 500000000,
		 n2 = 1000000000,
		 n3 = 1500000000,
		 n4 = 2000000000;
	long i, v1[2], v2[2];
	pthread_t t0, t1, t2, t3;

	v1[0] = 1;
	v1[1] = n1;
	pthread_create( &t0, NULL, exibirPrimos, (void*)v1 );

	v2[0] = n1 + 1;
	v2[1] = n2;
	pthread_create( &t1, NULL, exibirPrimos, (void*)v2 );

	pthread_join( t0, NULL );
	pthread_join( t1, NULL );

	return 0;
}

