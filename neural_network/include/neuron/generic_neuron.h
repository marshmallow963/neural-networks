#ifndef GENERIC_NEURON_H
#define GENERIC_NEURON_H

#include "generic_neuron.h"

typedef struct {
    NeuronType type;
    void *modelData;
    const NeuronInterface *interface;
} GenericNeuron;

#endif // GENERIC_NEURON_H
