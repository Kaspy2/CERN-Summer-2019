#include <cstdlib>
#include <memory>

#include "ACTFW/Framework/Sequencer.hpp"
#include "ACTFW/Options/CommonOptions.hpp"
#include "TryAlgorithm.hpp"

int
main(int argc, char* argv[])
{
  auto opt = FW::Options::makeDefaultOptions();
  FW::Options::addSequencerOptions(opt);
  auto vm = FW::Options::parse(opt, argc, argv);
  if (vm.empty()) {
    return EXIT_FAILURE;
  }

  FW::Sequencer sequencer(FW::Options::readSequencerConfig(vm));

  auto logLevel = FW::Options::readLogLevel(vm);

  sequencer.addAlgorithm(std::make_shared<FW::TryAlgorithm>(logLevel));

  return sequencer.run();
}
