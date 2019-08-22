#include "ACTFW/GenericDetector/GenericDetector.hpp"
#include "detail/PlyWriterExampleBase.hpp"

/// @brief main executable
///
/// @param argc The argument count
/// @param argv The argument list
int
main(int argc, char* argv[])
{
  // --------------------------------------------------------------------------------
  GenericOptions  genericOptions;
  GenericGeometry genericGeometry;

  // now process it
  return propagationExample(argc, argv, genericOptions, genericGeometry);
}