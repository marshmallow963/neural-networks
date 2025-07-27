#ifndef IZHIKEVICH_NEURON_STRCUTURE_H
#define IZHIKEVICH_NEURON_STRCUTURE_H

/* --- Neuron Structure for Izhikevich Neuron Model --- */

typedef enum {
    IntrinsicallyBursting,
    RegularSpiking,
    FastSpiking,
    LowThresholdSpiking,
    Thalamocortical
} IzhikevichNeuronType;

typedef struct {
    double a; // Membrane recovery after spike
    double b; // Sensitivity of the recovery variable
    double c; // Membrane potential reset value
    double d; // Recovery variable reset value
} IzhikevichNeuronParams;

typedef struct {
    double u; // Recovery variable
    double v; // Membrane potential (mV)
} IzhikevichNeuronState;

typedef struct {
    IzhikevichNeuronParams *params;
    IzhikevichNeuronState  *state;
    IzhikevichNeuronType   type;
} IzhikevichNeuron;

#endif // IZHIKEVICH_NEURON_STRCUTURE_H
