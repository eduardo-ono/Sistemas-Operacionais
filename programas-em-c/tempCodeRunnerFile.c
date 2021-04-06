int main()
{
	pthread_t t1, t2;

	printf("main --> Executando...\n\n");
	pthread_create(&t1, NULL, f0, NULL);
	pthread_create(&t2, NULL, f1, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	return 0;
}
