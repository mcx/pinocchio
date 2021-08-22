//
// Copyright (c) 2015-2021 CNRS INRIA
//

#include "pinocchio/bindings/python/algorithm/algorithms.hpp"

namespace pinocchio
{
  namespace python
  {
    
    void exposeAlgorithms()
    {
      exposeJointsAlgo();
      exposeABA();
      exposeCRBA();
      exposeCentroidal();
      exposeRNEA();
      exposeCOM();
      exposeFramesAlgo();
      exposeEnergy();
      exposeKinematics();
      
      exposeContactJacobian();
      exposeContactDynamics();
      exposeContactDynamicsDerivatives();
      exposeConstrainedDynamics();
      exposeCAT();
      exposeJacobian();
#if defined(PINOCCHIO_PYTHON_INTERFACE_MAIN_MODULE)
      exposeGeometryAlgo();
#endif // defined(PINOCCHIO_PYTHON_INTERFACE_MAIN_MODULE)
      exposeKinematicRegressor();
      exposeRegressor();
      exposeCholesky();
      exposeModelAlgo();
      exposeImpulseDynamics();

      // expose derivative version of the algorithms
      exposeRNEADerivatives();
      exposeABADerivatives();
      exposeKinematicsDerivatives();
      exposeFramesDerivatives();
      exposeCentroidalDerivatives();
      exposeImpulseDynamicsDerivatives();
    }
    
  } // namespace python
} // namespace pinocchio
