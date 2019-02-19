#include <structures/grid.h>

class LevelSet : public Ramuh::RegularGrid {
public:
  LevelSet();

  ///
  /// Add an implicit region for the fluid
  void addImplicitFunction();

  ///
  /// Advect level set according to \f$\phi_t + u\cdot\nabla\phi = 0\f$
  void integrateLevelSet();

  ///
  /// Computes velocities divergent in cell center and then solves pressure
  /// Poisson equation. After, updates the velocity values.
  void solvePressure();

protected:
  double dt;                         // Time step
  std::vector<Ramuh::Vector3d> _phi; // Level set stored on the grid corners
};