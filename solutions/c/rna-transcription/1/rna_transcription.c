#include "rna_transcription.h"

char *dna_nuc = "GCTA";
char *rna_nuc = "CGAU";

char *to_rna(const char *dna){
    char* rna = (char*)malloc(strlen(dna) + 1);
    for (unsigned long int i = 0; i <= strlen(dna); i++){
        for (unsigned long int j = 0; j <= strlen(dna_nuc); j++){
            if (dna[i] == dna_nuc[j]){
                rna[i] = rna_nuc[j];
            }
        }
    }
    return rna;
}