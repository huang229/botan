/*
* Version Information
* (C) 1999-2007 Jack Lloyd
*
* Distributed under the terms of the Botan license
*/

#include <botan/version.h>
#include <botan/parsing.h>

namespace Botan {

/*
  These are intentionally compiled rather than inlined, so an
  application running against a shared library can test the true
  version they are running against.
*/

/*
* Return the version as a string
*/
std::string version_string()
   {
   return std::to_string(version_major()) + "." +
          std::to_string(version_minor()) + "." +
          std::to_string(version_patch());
   }

u32bit version_datestamp() { return BOTAN_VERSION_DATESTAMP; }

/*
* Return parts of the version as integers
*/
u32bit version_major() { return BOTAN_VERSION_MAJOR; }
u32bit version_minor() { return BOTAN_VERSION_MINOR; }
u32bit version_patch() { return BOTAN_VERSION_PATCH; }

}
