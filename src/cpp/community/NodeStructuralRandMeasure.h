/*
 * RandMeasure.h
 *
 *  Created on: 19.01.2013
 *      Author: Christian Staudt (christian.staudt@kit.edu)
 */

#ifndef NODESTRUCTURALRANDMEASURE_H_
#define NODESTRUCTURALRANDMEASURE_H_

#include "DissimilarityMeasure.h"

namespace NetworKit {

/**
 * The node-structural Rand measure assigns a similarity value in [0,1]
 * to two partitions of a graph, by considering all pairs of nodes.
 */
class NodeStructuralRandMeasure: public NetworKit::DissimilarityMeasure {

public:


	virtual double getDissimilarity(const Graph& G, const Partition& first, const Partition& second);

};

} /* namespace NetworKit */
#endif /* RANDMEASURE_H_ */
