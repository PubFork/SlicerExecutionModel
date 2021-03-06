/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $HeadURL$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

// This file is intended to be compiled and linked against a static or
// shared library CLP to (1) prevent the need to compile twice and
// (2) provide a mechanism to execute code before the entry point of module
// compiled either as the [executable only] or [executable + shared library].

#if defined(_WIN32) && !defined(MODULE_STATIC)
#define MODULE_IMPORT __declspec(dllimport)
#else
#define MODULE_IMPORT
#endif

extern "C" MODULE_IMPORT int ModuleEntryPoint(int, char* []);

int main(int argc, char** argv)
{
  return ModuleEntryPoint(argc, argv);
}
