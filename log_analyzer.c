#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Déclaration des variables pour stocker les statistiques
int error_count = 0;
int warning_count = 0;
int info_count = 0;

// Fonction pour traiter chaque ligne du fichier log
void process_line(const char *line)
{
    if (strstr(line, "ERROR"))
    {
        error_count++;
    }
    else if (strstr(line, "WARNING"))
    {
        warning_count++;
    }
    else if (strstr(line, "INFO"))
    {
        info_count++;
    }
}

// Fonction pour lire et traiter le fichier log
void process_log_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file))
    {
        process_line(buffer);
    }

    fclose(file);
}

// Fonction pour afficher les statistiques collectées
void print_statistics()
{
    printf("Total Errors: %d\n", error_count);
    printf("Total Warnings: %d\n", warning_count);
    printf("Total Info Messages: %d\n", info_count);
}

// Fonction principale
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <log_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    process_log_file(argv[1]);
    print_statistics();

    return EXIT_SUCCESS;
}
