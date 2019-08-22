#include "TryAlgorithm.hpp"
#include <iostream>

FW::TryAlgorithm::TryAlgorithm(Acts::Logging::Level level)
  : FW::BareAlgorithm("Try", level)
{
}

FW::ProcessCode
FW::TryAlgorithm::execute(const AlgorithmContext& context) const
{
  ACTS_INFO(" Try! (from event " << context.eventNumber << ")");
  std::cout<<"with each event"<<std::endl;
  ACTS_DEBUG("  - that's an ACTS_DEBUG message");
  ACTS_VERBOSE("  - that's an ACTS_VERBOSE message");
  return FW::ProcessCode::SUCCESS;
}
