
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

// Struct holds individual perceptron outputs
// and overall network output value
typedef struct Outputs {
    int *pOutputs;
    int netOutput;
} Outputs;

// Forward Method declarations
int **generateWeights(int N, int K, int L, int M);
int *generateInputs(int N, int *inputsArray);
struct Outputs generateOutputs(int K, int M, int *pOutputs, int **weights, int *inputsArray);
void printOutputs(int K, int M, int **weightsA, int **weightsB, int netAoutput, int netBoutput);
void printAttackerOutputs(int attacker, int K, int M, int **weights, int netOutput);
int **changeWeights(int K, int L, int M, int netOutput, int *pOutputs, int **weights, int *inputsArray);