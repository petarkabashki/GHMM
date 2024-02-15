/*******************************************************************************
*
*       This file is part of the General Hidden Markov Model Library,
*       GHMM version __VERSION__, see http://ghmm.org
*
*       Filename: ghmm/ghmm/vector.h
*       Authors:  Bernhard Knab, Peter Pipenbacher
*
*       Copyright (C) 1998-2004 Alexander Schliep 
*       Copyright (C) 1998-2001 ZAIK/ZPR, Universitaet zu Koeln
*	Copyright (C) 2002-2004 Max-Planck-Institut fuer Molekulare Genetik, 
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
*       This file is version $Revision: 1436 $ 
*                       from $Date: 2005-10-12 12:35:29 +0100 (Wed, 12 Oct 2005) $
*             last change by $Author: grunau $.
*
*******************************************************************************/

#ifndef GHMM_VECTOR_H
#define GHMM_VECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

/**@name Vektor-Funktionen */
/*@{ (Doc++-Group: vector) */

/**
  Scales the sum of elements in a vector to one.
  @return 0 for success; -1 for error
  @param v    vector
  @param len  length of the vector       
*/
  int ighmm_cvector_normalize (double *v, int len);

/**
  Writes a double vector (without parenthesis)
  @param file       output file
  @param vector     vector to write
  @param len        dimension
  @param tab        format: leading tabs
  @param separator  format: separator for columns
  @param ending     format: end of a row  
  */
  void ighmm_cvector_print (FILE * file, double *vector, int len,
                       char *tab, char *separator, char *ending);

/**
  Writes a double vector (without parenthesis) with given number of decimal places
  @param file       output file
  @param vector     vector to write
  @param len        dimension
  @param width      format: total number of decimal places
  @param prec       format: number of decimal places after the comma
  @param tab        format: leading tabs
  @param separator  format: separator for columns
  @param ending     format: end of a row 
  */
  void ighmm_cvector_print_prec (FILE * file, double *vector, int len, int width,
                            int prec, char *tab, char *separator,
                            char *ending);

/**
  Writes an integer vector (without parenthesis)
  @param file       output file
  @param vector     vector to write
  @param len        dimension
  @param tab        format: leading tabs
  @param separator  format: separator for columns
  @param ending     format: end of a row  
  */
  void ighmm_dvector_print (FILE * file, int *vector, int len,
                       char *tab, char *separator, char *ending);

#ifdef __cplusplus
}
#endif
#endif                          /* GHMM_VECTOR_H */
/*@} (Doc++-Group: vector) */
