/*
 * Copyright (C) 2014 Swift Navigation Inc.
 * Contact: Fergus Noble <fergus@swift-nav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef LIBSWIFTNAV_SBP_UTILS_H
#define LIBSWIFTNAV_SBP_UTILS_H

#include "common.h"
#include "sbp_messages.h"
#include "gpstime.h"
#include "pvt.h"

void sbp_make_gps_time(sbp_gps_time_t *t_out, gps_time_t *t_in, u8 flags);
void sbp_make_pos_llh(sbp_pos_llh_t *pos_llh, gnss_solution *soln, u8 flags);
void sbp_make_vel_ned(sbp_vel_ned_t *vel_ned, gnss_solution *soln, u8 flags);
void sbp_make_dops(sbp_dops_t *dops_out, dops_t *dops_in);

#endif /* LIBSWIFTNAV_SBP_UTILS_H */
