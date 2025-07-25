#ifndef STRUCTURE_H
#define STRUCTURE_H

typedef enum {
    Izhikevich_IntrinsicallyBursting,
    Izhikevich_RegularSpiking,
    Izhikevich_FastSpiking,
    Izhikevich_LowThresholdSpiking,
    Izhikevich_ThalamoCortical,
    Hodgkinh_Huxley
} NeuronType;

typedef struct {
    void (*Create)(void *neuron, int id);
    void (*Update)(void *neuron, double iExt, double iSyn, double dt);
    void (*Get)(const void *neuron, double *voltage);
    void (*Destroy)(void *neuron);

    int neuronID;
    NeuronType type;
} Neuron;

#endif // STRUCTURE_H
