#ifndef HODGKING_HUXLEY_NEURON_STRUCTURE_H
#define HODGKING_HUXLEY_NEURON_STRUCTURE_H

/* --- Neuron Structure for Hodgking-Huxley Neuron Model --- */

typedef struct {
    double gNa; // Conductancy for sodium current
    double eNa; // Equilibrium potential for sodium current
    double gk;  // Conductancy for potassium current
    double eK;  // Equilibrium potential for potassium current
    double gL;  // Conductancy for leak current
    double eL;  // Equiulibrium potential for leak current
    double c;   // Membrane capacitancy
} HodgkingHuxleyNeuronParams;

typedef struct {
    double m;   // Sodium activation gate variable
    double h;   // Sodium inactivation gate variable
    double n;   // Potassium activation gate variable
    double iNa; // Sodium current
    double iK;  // Potassium current
    double iL;  // Leak current
    double v;   // Membrane potential
} HodgkingHuxleyNeuronState;

typedef struct {
    HodgkingHuxleyNeuronParams *params;
    HodgkingHuxleyNeuronState  *state;
} HodgkingHuxleyNeuron;

#endif // HODGKING_HUXLEY_NEURON_STRUCTURE_H
