/**
 * Copyright (c) 2017 - 2019, (c)freeNanum
 *
 * All rights reserved.
 *
 * Author: Jaehong Park, http://freeNanum.github.io/market
 */
#ifndef CUSTOM_FEATURE_H
#define CUSTOM_FEATURE_H

// sdk_config.h
#if (0)
#ifndef APP_UART_DRIVER_INSTANCE
#define APP_UART_DRIVER_INSTANCE 0 //freeNanum: for printf()
#endif

//passkey=>
#ifndef PM_LESC_ENABLED
#define PM_LESC_ENABLED 1
#endif

#ifndef NRF_BLE_LESC_ENABLED
#define NRF_BLE_LESC_ENABLED 1
#endif

#ifndef NRF_CRYPTO_RNG_AUTO_INIT_ENABLED
#define NRF_CRYPTO_RNG_AUTO_INIT_ENABLED 1
#endif

#ifndef PM_CENTRAL_ENABLED
#define PM_CENTRAL_ENABLED 0
#endif
//passkey<=

//NRF_LOG enable=>
#ifndef NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED
#define NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED 0
#endif

#ifndef NRF_LOG_BACKEND_RTT_ENABLED
#define NRF_LOG_BACKEND_RTT_ENABLED 1
#endif

#ifndef NRF_LOG_ENABLED
#define NRF_LOG_ENABLED 1
#endif

#ifndef NRF_LOG_DEFERRED
#define NRF_LOG_DEFERRED 1
#endif
//NRF_LOG enable<=
#endif

#if (0)
#ifndef NRF_FSTORAGE_ENABLED
#define NRF_FSTORAGE_ENABLED 1
#endif

#ifndef FDS_ENABLED
#define FDS_ENABLED 1
#endif

#ifndef PEER_MANAGER_ENABLED
#define PEER_MANAGER_ENABLED 1
#endif

#ifndef PM_MAX_REGISTRANTS
#define PM_MAX_REGISTRANTS 1 //3
#endif

#endif//#if 0

//pca_10040.h
#define BOARD_FREENANUM_V1

//main.c
#define PEER_MNG
#ifdef PEER_MNG
#define PASS_KEY
#endif

#endif