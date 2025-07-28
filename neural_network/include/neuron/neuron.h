#ifndef NEURON_H
#define NEURON_H

#include "neuron_model/hodgking_huxley_neuron.h"
#include "neuron_model/izhikevich_neuron.h"

#include "neuron_generic.h"

void CreateNeuron(NeuronType type, NeuronInterface *neuron, int id);
void UpdateNeuron(Neuron *neuronInterface, double currentTotal, double dt);
void GetNeuronVoltage(const NeuronInterface *neuron, double *voltage);
void DestroyNeuron(NeuronInterface *neuron);

#endif // NEURON_H
