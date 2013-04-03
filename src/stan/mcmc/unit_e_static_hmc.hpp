#ifndef __STAN__MCMC__UNIT__E__STATIC__HMC__BETA__
#define __STAN__MCMC__UNIT__E__STATIC__HMC__BETA__

#include <stan/mcmc/base_static_hmc.hpp>
#include <stan/mcmc/unit_e_point.hpp>
#include <stan/mcmc/unit_e_metric.hpp>
#include <stan/mcmc/expl_leapfrog.hpp>

namespace stan {

  namespace mcmc {

    // Hamiltonian Monte Carlo on a 
    // Euclidean manifold with unit metric
    // and static integration time
    
    template <typename M, class BaseRNG>
    class unit_e_static_hmc: public base_static_hmc<M, 
                                                    unit_e_point,
                                                    unit_e_metric, 
                                                    expl_leapfrog, 
                                                    BaseRNG> {
      
    public:
      
      unit_e_static_hmc(M &m, BaseRNG& rng): base_static_hmc<M, unit_e_point, unit_e_metric, 
                                                             expl_leapfrog, BaseRNG>(m, rng)
      {};
                        
    };

  } // mcmc

} // stan
          

#endif