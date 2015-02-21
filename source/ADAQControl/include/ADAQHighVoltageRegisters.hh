/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//                           Copyright (C) 2012-2015                           //
//                 Zachary Seth Hartwig : All rights reserved                  //
//                                                                             //
//      The ADAQ libraries source code is licensed under the GNU GPL v3.0.     //
//      You have the right to modify and/or redistribute this source code      //      
//      under the terms specified in the license, which may be found online    //
//      at http://www.gnu.org/licenses or at $ADAQ/License.md.                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
// name: ADAQHighVoltageRegisters.hh
// date: 17 Oct 14
// auth: Zach Hartwig
// mail: hartwig@psfc.mit.edu
// 
// desc: Header file to hold namespaces that contain the register maps
//       and useful values for the various high voltage boards that
//       are supported by the ADAQ libraries
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef __ADAQHighVoltageRegisters_hh__
#define __ADAQHighVoltageRegisters_hh__ 1

// Boost
#include <boost/cstdint.hpp>

// Create a namespace to hold the relevant addresses and some simple
// register value of the V6534 board
namespace V6534Registers{
  
  // Global register addresses
  const uint32_t VMAX = 0x0050;
  const uint32_t IMAX = 0x0054;
  const uint32_t STATUS = 0x0058;
  const uint32_t FIRMREl = 0x005C;

  // Individual channel register addresses
  
  // Register Addr.   CH0      CH1      CH2      CH3      CH4      CH5
  const uint32_t VSET[6] = {0x0080,  0x0100,  0x0180,  0x0200,  0x0280,  0x0300}; // Voltage set
  const uint32_t ISET[6] = {0x0084,  0x0104,  0x0184,  0x0204,  0x0284,  0x0304}; // Current set
  const uint32_t VMON[6] = {0x0088,  0x0108,  0x0188,  0x0208,  0x0288,  0x0308}; // Voltage monitor
  const uint32_t IMON[6] = {0x008c,  0x010c,  0x018c,  0x020c,  0x028c,  0x030c}; // Current monitor (max)
  const uint32_t   PW[6] = {0x0090,  0x0110,  0x0190,  0x0210,  0x0290,  0x0310}; // Power 
  const uint32_t  POL[6] = {0x00ac,  0x012c,  0x01ac,  0x022c,  0x02ac,  0x032c}; // Polarity
  const uint32_t TEMP[6] = {0x00b0,  0x0130,  0x01b0,  0x0230,  0x02b0,  0x0330}; // Temperature

  // Register values to control the power state (on/off) at
  // registers "PW" specified above for each channel
  const uint16_t POWEROFF = 0x00;
  const uint16_t POWERON  = 0x01;
}

#endif