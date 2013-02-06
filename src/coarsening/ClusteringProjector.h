/*
 * ClusteringProjector.h
 *
 *  Created on: 07.01.2013
 *      Author: cls
 */

#ifndef CLUSTERINGPROJECTOR_H_
#define CLUSTERINGPROJECTOR_H_

#include "../clustering/base/Clustering.h"
#include "GraphContraction.h"

namespace EnsembleClustering {

class ClusteringProjector {

public:

	ClusteringProjector();

	virtual ~ClusteringProjector();

	/**
	 * Given
	 * 		@param[in]	Gcoarse
	 * 		@param[in] 	Gfine
	 * 		@param[in]	fineToCoarse
	 * 		@param[in]	zetaCoarse	a clustering of the coarse graph
	 *
	 * 	, project the clustering back to the fine graph to create a clustering of the fine graph.
	 * 		@param[out] 			a clustering of the fine graph
	 **/
	virtual Clustering projectBack(Graph& Gcoarse, Graph& Gfine, NodeMap<node>& fineToCoarse,
			Clustering& zetaCoarse);


	/**
	 * Project a clustering \zeta^{i} of the coarse graph G^{i}�back to
	 * the finest graph G^{0}, using the hierarchy of fine->coarse maps
	 */
	virtual Clustering projectBackToFinest(Clustering& zetaCoarse,
			std::vector<NodeMap<node> >& maps, Graph& Gfinest);

};

} /* namespace EnsembleClustering */
#endif /* CLUSTERINGPROJECTOR_H_ */
