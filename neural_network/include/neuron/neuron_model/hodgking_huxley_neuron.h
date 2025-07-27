#ifndef HODGKING_HUXLEY_NEURON_H
#define HODGKING_HUXLEY_NEURON_H

#include "neuron_structure/hodgking_huxley_neuron_structure.h"

// Initialization functions
void InitHodgkingHuxleyParams(HodgkingHuxleyNeuronParams *params);
void InitHodgkingHuxleyState(HodgkingHuxleyNeuronState *state);
void InitHodgkingHuxleyNeuron(HodgkingHuxleyNeuron *neuron);

void HodgkingHuxleyequations(void *modelNeuron, const double *stateVetcor, double *derivative);
void UpdateHodgkingHuxleyNeuron(HodgkingHuxleyNeuron *neuron, double I, double dt);

void GetHodgkingHuxleyNeuronIonicCurrets(const HodgkingHuxleyNeuron *neuron, double *ionicCurrents);
void GetHodgkingHuxleyNeuronIonicGates(const HodgkingHuxleyNeuron *neuron, double *gates);
void GetHodgkingHuxleyNeuronVoltage(const HodgkingHuxleyNeuron *neuron, double *voltage);

void DestroyNeuron(HodgkingHuxleyNeuron *neuron);

#endif // HODGKING_HUXLEY_NEURON_H
