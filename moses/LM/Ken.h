// $Id$

/***********************************************************************
Moses - factored phrase-based language decoder
Copyright (C) 2006 University of Edinburgh

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
***********************************************************************/

#ifndef moses_LanguageModelKen_h
#define moses_LanguageModelKen_h

#include <string>

#include "moses/TypeDef.h"

namespace Moses {

class LanguageModel;

LanguageModel *ConstructKenLM(const std::string &line);

//! This will also load. Returns a templated KenLM class
LanguageModel *ConstructKenLM(const std::string &file, FactorType factorType, bool lazy);

} // namespace Moses

#endif
