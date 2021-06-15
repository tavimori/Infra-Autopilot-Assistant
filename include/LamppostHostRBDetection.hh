/**
 * @filename: LP_RBDetection.hh
 * @author: Vito Wu <chenhaowu[at]link.cuhk.edu.cn>
 * @version: 
 * @desc:
 * @date: 5/27/2021
 */

#ifndef LAMPPOSTAUTOCARDEMO_LAMPPOSTHOSTRBDETECTION_HH
#define LAMPPOSTAUTOCARDEMO_LAMPPOSTHOSTRBDETECTION_HH

#include "utils.hh"

typedef struct RBDetectionThreadArgs {
    LamppostHostProg* hostProg;
} RBDetectionThreadArgs_t;

void RBDetectionThread(RBDetectionThreadArgs_t* args);

#endif //LAMPPOSTAUTOCARDEMO_LAMPPOSTHOSTRBDETECTION_HH
