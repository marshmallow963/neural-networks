#ifndef HODGKING_HUXLEY_H
#define HODGKING_HUXLEY_H

#include "neuron_config/neuron_structure.h"

// Initialization functions
void InitHodgkingHuxleyParams(HodgkingHuxleyParams *params);
void InitHodgkingHuxleyState(HodgkingHuxleyState *state);
void InitHodgkingHuxleyNeuron(HodgkingHuxleyNeuron *neuron);

void HodgkingHuxleyequations(void *modelNeuron, const double *stateVetcor, double *derivative);
void UpdateHodgkingHuxleyNeuron(HodgkingHuxleyNeuron *neuron, double *currents, double dt);

void GetHodgkingHuxleyNeuronIonicCurrets(const HodgkingHuxleyNeuron *neuron, double *ionicCurrents);
void GetHodgkingHuxleyNeuronIonicGates(const HodgkingHuxleyNeuron *neuron, double *gates);
void GetHodgkingHuxleyNeuronVoltage(const HodgkingHuxleyNeuron *neuron, double *voltage);

void DestroyNeuron(HodgkingHuxleyNeuron *neuron);

#endif // HODGKING_HUXLEY_H
