    pthread_create(&t1, NULL, selectionSortNaoOtimizado, (void *)&v1);
    pthread_create(&t2, NULL, selectionSortNaoOtimizado, (void *)&v2);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
