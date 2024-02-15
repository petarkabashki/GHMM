/*******************************************************************************
*
*       This file is part of the General Hidden Markov Model Library,
*       GHMM version __VERSION__, see http://ghmm.org
*
*       Filename: ghmm/ghmm/xmlreader.h
*       Authors:  Janne Grunau
*
*       Copyright (C) 1998-2004 Alexander Schliep
*       Copyright (C) 1998-2001 ZAIK/ZPR, Universitaet zu Koeln
*       Copyright (C) 2002-2005 Max-Planck-Institut fuer Molekulare Genetik,
*                               Berlin
*
*       Contact: schliep@ghmm.org
*
*       This library is free software; you can redistribute it and/or
*       modify it under the terms of the GNU Library General Public
*       License as published by the Free Software Foundation; either
*       version 2 of the License, or (at your option) any later version.
*
*       This library is distributed in the hope that it will be useful,
*       but WITHOUT ANY WARRANTY; without even the implied warranty of
*       MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*       Library General Public License for more details.
*
*       You should have received a copy of the GNU Library General Public
*       License along with this library; if not, write to the Free
*       Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*
*
*       This file is version $Revision: 2277 $
*                       from $Date: 2009-04-28 13:44:31 +0100 (Tue, 28 Apr 2009) $
*             last change by $Author: grunau $
*
*******************************************************************************/
#ifndef GHMM_XMLREADER_H
#define GHMM_XMLREADER_H

#include "model.h"
#include "smodel.h"
#include "pmodel.h"
#include "sdmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@{ (Doc++-Group: xmlreader) */

  /** context struct for reading/writing multiple xml files.
   */
  typedef struct ghmm_xmlfile {

    int noModels;

    int modelType;

    union {
      ghmm_cmodel  **c;
      ghmm_dmodel  ** d;
      ghmm_dpmodel **dp;
      ghmm_dsmodel **ds;
    } model;

  } ghmm_xmlfile;


  ghmm_xmlfile* ghmm_xmlfile_parse(const char *filename);

  int ghmm_xmlfile_validate(const char *filename);

#ifdef __cplusplus
}
#endif

#endif /* GHMM_XMLREADER_H */

/*@} (Doc++-Group: xmlreader) */


