/*
 * Copyright (c) 2014-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * Copyright (c) 2022 HPMicro
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Generated by erpcgen 1.10.0 on Mon Oct 28 10:27:48 2024.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_motor_server_h_)
#define _erpc_motor_server_h_

#ifdef __cplusplus
#include "erpc_server.hpp"
#include "erpc_codec.hpp"
extern "C"
{
#include "erpc_motor.h"
#include <stdint.h>
#include <stdbool.h>
}

#if 11000 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif


/*!
 * @brief Service subclass for MotorSpeedControlService.
 */
class MotorSpeedControlService_service : public erpc::Service
{
public:
    MotorSpeedControlService_service() : Service(kMotorSpeedControlService_service_id) {}

    /*! @brief Call the correct server shim based on method unique ID. */
    virtual erpc_status_t handleInvocation(uint32_t methodId, uint32_t sequence, erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory);

private:
    /*! @brief Server shim for erpcSetMotorSpeed of MotorSpeedControlService interface. */
    erpc_status_t erpcSetMotorSpeed_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for erpcGetMotorSpeed of MotorSpeedControlService interface. */
    erpc_status_t erpcGetMotorSpeed_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);

    /*! @brief Server shim for erpcSwitchLightLed of MotorSpeedControlService interface. */
    erpc_status_t erpcSwitchLightLed_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);
};

extern "C" {
#else
#include "erpc_motor.h"
#endif // __cplusplus

typedef void * erpc_service_t;

/*! @brief Return MotorSpeedControlService_service service object. */
erpc_service_t create_MotorSpeedControlService_service(void);

/*! @brief Destroy MotorSpeedControlService_service service object. */
void destroy_MotorSpeedControlService_service(erpc_service_t service);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _erpc_motor_server_h_