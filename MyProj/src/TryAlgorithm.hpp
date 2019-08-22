#ifndef ACTFW_EXAMPLES_TRY_H
#define ACTFW_EXAMPLES_TRY_H 1

#include <memory>

#include "ACTFW/Framework/BareAlgorithm.hpp"
#include "ACTFW/Framework/ProcessCode.hpp"

namespace FW {

class TryAlgorithm : public FW::BareAlgorithm
{
public:
  TryAlgorithm(Acts::Logging::Level level = Acts::Logging::INFO);

  FW::ProcessCode
  execute(const AlgorithmContext& context) const final override;
};

}

#endif