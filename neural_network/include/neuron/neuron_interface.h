#ifndef NEURON_INTERFACE_H
#define NEURON_INTERFACE_H

typedef enum {
    Izhikevich_IntrinsicallyBursting,
    Izhikevich_RegularSpiking,
    Izhikevich_FastSpiking,
    Izhikevich_LowThresholdSpiking,
    Izhikevich_ThalamoCortical,
    Hodgkinh_Huxley
} NeuronType;

typedef struct {
    void* (*Create)(NeuronType type);
    void (*Update)(void *modelData, double current, double dt);
    void (*Get)(const void *modeldata, double *voltage);
    void (*Destroy)(void *modeldata);
} Neuron;

#endif // NEURON_INTERFACE_H
