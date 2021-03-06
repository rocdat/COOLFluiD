// Copyright (C) 2012 von Karman Institute for Fluid Dynamics, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#ifndef COOLFluiD_Numerics_RungeKutta2_hh
#define COOLFluiD_Numerics_RungeKutta2_hh

//////////////////////////////////////////////////////////////////////////////

#include "Environment/ModuleRegister.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

namespace Numerics {

    /// The classes that implement a general RungeKutta2 time stepper.
  namespace RungeKutta2 {

//////////////////////////////////////////////////////////////////////////////

/// This class defines the Module RungeKutta2
class RungeKutta2Module : public Environment::ModuleRegister<RungeKutta2Module> {
public:

  /// Static function that returns the module name.
  /// Must be implemented for the ModuleRegister template
  /// @return name of the module
  static std::string getModuleName()
  {
    return "RungeKutta2";
  }

  /// Static function that returns the description of the module.
  /// Must be implemented for the ModuleRegister template
  /// @return descripton of the module
  static std::string getModuleDescription()
  {
    return "This module implements a general RungeKutta2 time stepper.";
  }

}; // end RungeKutta2Module

//////////////////////////////////////////////////////////////////////////////

    } // namespace RungeKutta2

  } // namespace Numerics

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFLUID_Numerics_RungeKutta2_hh
