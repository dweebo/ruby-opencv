/************************************************************

  cvcontourtree.h -

  $Author: lsxi $

  Copyright (C) 2007 Masakazu Yonekura

************************************************************/
#ifndef RUBY_OPENCV_CVCONTOURTREE_H
#define RUBY_OPENCV_CVCONTOURTREE_H
#include "opencv.h"

#define __NAMESPACE_BEGIN_CVCONTOURTREE namespace cCvContourTree {
#define __NAMESPACE_END_CVCONTOURTREE }

__NAMESPACE_BEGIN_OPENCV
__NAMESPACE_BEGIN_CVCONTOURTREE

VALUE rb_class();

void init_ruby_class();

VALUE rb_p1(VALUE self);
VALUE rb_p2(VALUE self);
VALUE rb_contour(VALUE self, VALUE criteria);

VALUE new_object();

__NAMESPACE_END_CVCONTOURTREE

inline CvContourTree*
CVCONTOURTREE(VALUE object){
  CvContourTree *ptr;
  Data_Get_Struct(object, CvContourTree, ptr);
  return ptr;
}

__NAMESPACE_END_OPENCV

#endif // RUBY_OPENCV_CVCONTOUR_H
