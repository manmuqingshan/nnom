/*
 * Copyright (c) 2018-2020
 * Jianjia Ma
 * majianjia@live.com
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-05-03     Jianjia Ma   The first version
 */

#ifndef __NNOM_AVGPOOL_H__
#define __NNOM_AVGPOOL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include "nnom.h"
#include "nnom_layers.h"
#include "nnom_local.h"
#include "nnom_tensor.h"

#include "layers/nnom_maxpool.h"

// Avg Pooling
typedef nnom_maxpool_layer_t nnom_avgpool_layer_t;

// method
nnom_status_t avgpooling_build(nnom_layer_t *layer);
nnom_status_t avgpool_run(nnom_layer_t *layer);

// API
nnom_layer_t *avgpool_s(nnom_pool_config_t * config);
nnom_layer_t *AvgPool(nnom_3d_shape_t k, nnom_3d_shape_t s, nnom_padding_t pad_type);


#ifdef __cplusplus
}
#endif

#endif /* __NNOM_AVGPOOL_H__ */
