void leaVerPortada(){
    char *leaIntegrantes[]={
        "JACOME CRISTHIAN",
        "JURADO JUAN",
        "LEMA ALEX",
        "LIQUINCHANA ALEXIS",
        "LOZADA LESLIE",
        "MALES INTI"
    };
    int leaNumIntegrantes = sizeof(leaIntegrantes) / sizeof(leaIntegrantes[0]);
    printf("---------------------------------");
    printf("\n\tGrupo 3\nIntegrantes:\n");
    for (int i = 0; i < leaNumIntegrantes; i++)
    {
        printf("- %s\n", leaIntegrantes[i]);
    }
    printf("---------------------------------");
}