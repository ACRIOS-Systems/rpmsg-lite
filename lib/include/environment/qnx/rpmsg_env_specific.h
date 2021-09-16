/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**************************************************************************
 * FILE NAME
 *
 *       rpmsg_env_specific.h
 *
 * DESCRIPTION
 *
 *       This file contains QNX specific constructions.
 *
 **************************************************************************/
#ifndef RPMSG_ENV_SPECIFIC_H_
#define RPMSG_ENV_SPECIFIC_H_


#if defined(RL_USE_STATIC_API) && (RL_USE_STATIC_API == 1)
#include <pthread.h>
#include <mqueue.h>

typedef pthread_mutex_t LOCK_STATIC_CONTEXT;
typedef env_queue_t rpmsg_static_queue_ctxt;
/* Queue object static storage size in bytes, should be defined as (RL_BUFFER_COUNT*sizeof(rpmsg_queue_rx_cb_data_t)) */
#define RL_ENV_QUEUE_STATIC_STORAGE_SIZE (RL_BUFFER_COUNT * sizeof(rpmsg_queue_rx_cb_data_t))
#endif

#endif /* RPMSG_ENV_SPECIFIC_H_ */