// Copyright (c) 2013-2015  The University of Western Sydney, Australia.
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
//
// $URL: https://github.com/CGAL/cgal/blob/v5.2.2/Cone_spanners_2/include/CGAL/Cone_spanners_enum_2.h $
// $Id: Cone_spanners_enum_2.h 254d60f 2019-10-19T15:23:19+02:00 Sébastien Loriot
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Authors: Frédérik Paradis

/*! \file Cone_spanners_enum_2.h
 *
 * This header defines enumerators for the cone spanners functors.
 */

#ifndef CONE_SPANNERS_ENUM_2_H
#define CONE_SPANNERS_ENUM_2_H

#include <CGAL/license/Cone_spanners_2.h>


namespace CGAL {
  /*! \ingroup PkgConeSpanners2Ref

   \brief An enum of the choice of cones in cone spanners.
   */
  enum Cones_selected {
    /*! \brief Select even cones.
     */
    EVEN_CONES = 0,
    /*! \brief Select odd cones.
     */
    ODD_CONES = 1,
    /*! \brief Select all cones.
     */
    ALL_CONES = 2 };

}  // namespace CGAL

#endif
