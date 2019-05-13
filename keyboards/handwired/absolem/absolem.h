#ifndef ABSOLEM_H
#define ABSOLEM_H

#include "quantum.h"

#define KNO KC_NO

// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
            k30, k31, k32, k33, k34, k35 \
) \
{ \
  { k08, k09, k07, k06, k05, KNO, KNO, KNO, KNO, KNO }, \
  { k18, k19, k17, k16, k15, KNO, KNO, KNO, KNO, KNO }, \
  { k28, k29, k27, k26, k25, KNO, KNO, KNO, KNO, KNO }, \
  { KNO, KNO, k35, k34, k33, KNO, KNO, KNO, KNO, KNO }, \
  { KNO, KNO, KNO, KNO, KNO, k32, k31, k30, KNO, KNO }, \
  { KNO, KNO, KNO, KNO, KNO, k24, k23, k22, k20, k21 }, \
  { KNO, KNO, KNO, KNO, KNO, k14, k13, k12, k10, k11 }, \
  { KNO, KNO, KNO, KNO, KNO, k04, k03, k02, k00, k01 } \
}

#endif
