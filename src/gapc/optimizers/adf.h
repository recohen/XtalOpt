/**********************************************************************
  ADFOptimizer - Tools to interface with ADF remotely

  Copyright (C) 2010-2011 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#ifndef GAPCADF_H
#define GAPCADF_H

#include <globalsearch/optimizer.h>

namespace GAPC {

  class ADFOptimizer : public GlobalSearch::Optimizer
  {
    Q_OBJECT

   public:
    explicit ADFOptimizer(GlobalSearch::OptBase *parent,
                          const QString &filename = "");

  };

} // end namespace GAPC

#endif
