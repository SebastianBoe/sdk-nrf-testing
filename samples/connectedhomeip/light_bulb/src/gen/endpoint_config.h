/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

// Default values for the attributes longer than a pointer,
// in a form of a binary blob
// Separate block is generated for big-endian and little-endian cases.
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS                                                                                                         \
    {                                                                                                                              \
        /* 0 - Default for cluster: "Basic", attribute: "VendorName". side: server, big-endian */                                  \
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                \
                                                                                                                                   \
            /* 32 - Default for cluster: "Basic", attribute: "ProductName". side: server, big-endian */                            \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                          \
                                                                                                                                   \
            /* 64 - Default for cluster: "Basic", attribute: "UserLabel". side: server, big-endian */                              \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                          \
                                                                                                                                   \
            /* 96 - Default for cluster: "Basic", attribute: "Location". side: server, big-endian */                               \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                        \
                                                                                                                                   \
            /* 112 - Default for cluster: "Basic", attribute: "HardwareVersionString". side: server, big-endian */                 \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                              \
                                                                                                                                   \
            /* 176 - Default for cluster: "Basic", attribute: "SoftwareVersion". side: server, big-endian */                       \
            0x00, 0x00, 0x00, 0x00,                                                                                                \
                                                                                                                                   \
            /* 180 - Default for cluster: "Basic", attribute: "SoftwareVersionString". side: server, big-endian */                 \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                              \
    }

#else // !BIGENDIAN_CPU
#define GENERATED_DEFAULTS                                                                                                         \
    {                                                                                                                              \
        /* 0 - Default for cluster: "Basic", attribute: "VendorName". side: server, little-endian */                               \
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                \
                                                                                                                                   \
            /* 32 - Default for cluster: "Basic", attribute: "ProductName". side: server, little-endian */                         \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                          \
                                                                                                                                   \
            /* 64 - Default for cluster: "Basic", attribute: "UserLabel". side: server, little-endian */                           \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                          \
                                                                                                                                   \
            /* 96 - Default for cluster: "Basic", attribute: "Location". side: server, little-endian */                            \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                        \
                                                                                                                                   \
            /* 112 - Default for cluster: "Basic", attribute: "HardwareVersionString". side: server, little-endian */              \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                              \
                                                                                                                                   \
            /* 176 - Default for cluster: "Basic", attribute: "SoftwareVersion". side: server, little-endian */                    \
            0x00, 0x00, 0x00, 0x00,                                                                                                \
                                                                                                                                   \
            /* 180 - Default for cluster: "Basic", attribute: "SoftwareVersionString". side: server, little-endian */              \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      \
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                              \
    }

#endif // BIGENDIAN_CPU

#define GENERATED_DEFAULTS_COUNT (7)

#define ZAP_TYPE(type) ZCL_##type##_ATTRIBUTE_TYPE
#define ZAP_LONG_DEFAULTS_INDEX(index)                                                                                             \
    {                                                                                                                              \
        (uint8_t *) (&generatedDefaults[index])                                                                                    \
    }
#define ZAP_MIN_MAX_DEFAULTS_INDEX(index)                                                                                          \
    {                                                                                                                              \
        (uint8_t *) (&minMaxDefault[index])                                                                                        \
    }
#define ZAP_EMPTY_DEFAULT()                                                                                                        \
    {                                                                                                                              \
        (uint8_t *) 0                                                                                                              \
    }
#define ZAP_SIMPLE_DEFAULT(x)                                                                                                      \
    {                                                                                                                              \
        (uint8_t *) x                                                                                                              \
    }

// This is an array of EmberAfAttributeMinMaxValue structures.
#define GENERATED_MIN_MAX_DEFAULT_COUNT 0
#define GENERATED_MIN_MAX_DEFAULTS                                                                                                 \
    {                                                                                                                              \
    }

#define ZAP_ATTRIBUTE_MASK(mask) ATTRIBUTE_MASK_##mask
// This is an array of EmberAfAttributeMetadata structures.
#define GENERATED_ATTRIBUTE_COUNT 17
#define GENERATED_ATTRIBUTES                                                                                                       \
    {                                                                                                                              \
        { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(2) },         /* On/off (server): cluster revision */                 \
            { 0x0000, ZAP_TYPE(BOOLEAN), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) }, /* On/off (server): on/off */                           \
            { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(3) },     /* Level Control (server): cluster revision */          \
            { 0x0000, ZAP_TYPE(INT8U), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) },   /* Level Control (server): current level */             \
            { 0xFFFD, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                          \
              ZAP_SIMPLE_DEFAULT(3) }, /* Basic (server): cluster revision */                                                      \
            { 0x0000, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                          \
              ZAP_EMPTY_DEFAULT() }, /* Basic (server): InteractionModelVersion */                                                 \
            { 0x0001, ZAP_TYPE(CHAR_STRING), 32, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                    \
              ZAP_LONG_DEFAULTS_INDEX(0) },                                                      /* Basic (server): VendorName */  \
            { 0x0002, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* Basic (server): VendorID */    \
            { 0x0003, ZAP_TYPE(CHAR_STRING), 32, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                    \
              ZAP_LONG_DEFAULTS_INDEX(32) },                                                     /* Basic (server): ProductName */ \
            { 0x0004, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* Basic (server): ProductID */   \
            { 0x0005, ZAP_TYPE(CHAR_STRING), 32, ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE),                     \
              ZAP_LONG_DEFAULTS_INDEX(64) }, /* Basic (server): UserLabel */                                                       \
            { 0x0006, ZAP_TYPE(CHAR_STRING), 16, ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE),                     \
              ZAP_LONG_DEFAULTS_INDEX(96) }, /* Basic (server): Location */                                                        \
            { 0x0007, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                          \
              ZAP_SIMPLE_DEFAULT(0x00) }, /* Basic (server): HardwareVersion */                                                    \
            { 0x0008, ZAP_TYPE(CHAR_STRING), 64, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                    \
              ZAP_LONG_DEFAULTS_INDEX(112) }, /* Basic (server): HardwareVersionString */                                          \
            { 0x0009, ZAP_TYPE(INT32U), 4, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                          \
              ZAP_LONG_DEFAULTS_INDEX(176) }, /* Basic (server): SoftwareVersion */                                                \
            { 0x000A, ZAP_TYPE(CHAR_STRING), 64, ZAP_ATTRIBUTE_MASK(SINGLETON),                                                    \
              ZAP_LONG_DEFAULTS_INDEX(180) },                               /* Basic (server): SoftwareVersionString */            \
            { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* Network Commissioning (server): cluster revision */ \
    }

// This is an array of EmberAfCluster structures.
#define ZAP_ATTRIBUTE_INDEX(index) ((EmberAfAttributeMetadata *) (&generatedAttributes[index]))

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                  \
    const EmberAfGenericClusterFunction chipFuncArrayOnOffServer[] = {                                                             \
        (EmberAfGenericClusterFunction) emberAfOnOffClusterServerInitCallback,                                                     \
    };                                                                                                                             \
    const EmberAfGenericClusterFunction chipFuncArrayLevelControlServer[] = {                                                      \
        (EmberAfGenericClusterFunction) emberAfLevelControlClusterServerInitCallback,                                              \
    };

#define ZAP_CLUSTER_MASK(mask) CLUSTER_MASK_##mask
#define GENERATED_CLUSTER_COUNT 4
#define GENERATED_CLUSTERS                                                                                                         \
    {                                                                                                                              \
        {                                                                                                                          \
            0x0006,                                                                                                                \
            ZAP_ATTRIBUTE_INDEX(0),                                                                                                \
            2,                                                                                                                     \
            3,                                                                                                                     \
            ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION),                                                            \
            chipFuncArrayOnOffServer                                                                                               \
        }, /* Endpoint: 1, Cluster: On/off (server) */                                                                             \
            { 0x0008,                                                                                                              \
              ZAP_ATTRIBUTE_INDEX(2),                                                                                              \
              2,                                                                                                                   \
              3,                                                                                                                   \
              ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION),                                                          \
              chipFuncArrayLevelControlServer }, /* Endpoint: 1, Cluster: Level Control (server) */                                \
            {                                                                                                                      \
                0x0028, ZAP_ATTRIBUTE_INDEX(4), 12, 254, ZAP_CLUSTER_MASK(SERVER), NULL                                            \
            }, /* Endpoint: 1, Cluster: Basic (server) */                                                                          \
            {                                                                                                                      \
                0x0031, ZAP_ATTRIBUTE_INDEX(16), 1, 2, ZAP_CLUSTER_MASK(SERVER), NULL                                              \
            }, /* Endpoint: 1, Cluster: Network Commissioning (server) */                                                          \
    }

#define ZAP_CLUSTER_INDEX(index) ((EmberAfCluster *) (&generatedClusters[index]))

// This is an array of EmberAfEndpointType structures.
#define GENERATED_ENDPOINT_TYPES                                                                                                   \
    {                                                                                                                              \
        { ZAP_CLUSTER_INDEX(0), 4, 262 },                                                                                          \
    }

// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (65)

// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (254)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE (262)

// Number of fixed endpoints
#define FIXED_ENDPOINT_COUNT (1)

// Array of endpoints that are supported, the data inside
// the array is the endpoint number.
#define FIXED_ENDPOINT_ARRAY                                                                                                       \
    {                                                                                                                              \
        0x0001                                                                                                                     \
    }

// Array of profile ids
#define FIXED_PROFILE_IDS                                                                                                          \
    {                                                                                                                              \
        0x0104                                                                                                                     \
    }

// Array of device ids
#define FIXED_DEVICE_IDS                                                                                                           \
    {                                                                                                                              \
        0                                                                                                                          \
    }

// Array of device versions
#define FIXED_DEVICE_VERSIONS                                                                                                      \
    {                                                                                                                              \
        1                                                                                                                          \
    }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES                                                                                                       \
    {                                                                                                                              \
        0                                                                                                                          \
    }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS                                                                                                             \
    {                                                                                                                              \
        0                                                                                                                          \
    }

// Array of EmberAfCommandMetadata structs.
#define ZAP_COMMAND_MASK(mask) COMMAND_MASK_##mask
#define EMBER_AF_GENERATED_COMMAND_COUNT (31)
#define GENERATED_COMMANDS                                                                                                         \
    {                                                                                                                              \
        { 0x0006, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) },     /* On/off (server): Off */                                        \
            { 0x0006, 0x01, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* On/off (server): On */                                         \
            { 0x0006, 0x02, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* On/off (server): Toggle */                                     \
            { 0x0008, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): MoveToLevel */                         \
            { 0x0008, 0x01, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): Move */                                \
            { 0x0008, 0x02, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): Step */                                \
            { 0x0008, 0x03, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): Stop */                                \
            { 0x0008, 0x04, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): MoveToLevelWithOnOff */                \
            { 0x0008, 0x05, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): MoveWithOnOff */                       \
            { 0x0008, 0x06, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): StepWithOnOff */                       \
            { 0x0008, 0x07, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Level Control (server): StopWithOnOff */                       \
            { 0x0028, 0x00, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Basic (server): StartUp */                                     \
            { 0x0028, 0x01, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Basic (server): ShutDown */                                    \
            { 0x0028, 0x02, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Basic (server): Leave */                                       \
            { 0x0031, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): ScanNetworks */                \
            { 0x0031, 0x01, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Network Commissioning (server): ScanNetworksResponse */        \
            { 0x0031, 0x02, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): AddWiFiNetwork */              \
            { 0x0031, 0x03, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* Network Commissioning (server): AddWiFiNetworkResponse */      \
            { 0x0031, 0x04, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): UpdateWiFiNetwork */           \
            { 0x0031, 0x05, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* Network Commissioning (server): UpdateWiFiNetworkResponse */   \
            { 0x0031, 0x06, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): AddThreadNetwork */            \
            { 0x0031, 0x07, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* Network Commissioning (server): AddThreadNetworkResponse */    \
            { 0x0031, 0x08, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): UpdateThreadNetwork */         \
            { 0x0031, 0x09, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* Network Commissioning (server): UpdateThreadNetworkResponse */ \
            { 0x0031, 0x0A, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): RemoveNetwork */               \
            { 0x0031, 0x0B, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Network Commissioning (server): RemoveNetworkResponse */       \
            { 0x0031, 0x0C, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): EnableNetwork */               \
            { 0x0031, 0x0D, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Network Commissioning (server): EnableNetworkResponse */       \
            { 0x0031, 0x0E, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): DisableNetwork */              \
            { 0x0031, 0x0F, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Network Commissioning (server): DisableNetworkResponse */      \
            { 0x0031, 0x10,                                                                                                        \
              ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* Network Commissioning (server): GetLastNetworkCommissioningResult */         \
    }

// Array of EmberAfManufacturerCodeEntry structures for commands.
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)
#define GENERATED_COMMAND_MANUFACTURER_CODES                                                                                       \
    {                                                                                                                              \
        {                                                                                                                          \
            0x00, 0x00                                                                                                             \
        }                                                                                                                          \
    }

// This is an array of EmberAfManufacturerCodeEntry structures for clusters.
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)
#define GENERATED_CLUSTER_MANUFACTURER_CODES                                                                                       \
    {                                                                                                                              \
        {                                                                                                                          \
            0x00, 0x00                                                                                                             \
        }                                                                                                                          \
    }

// This is an array of EmberAfManufacturerCodeEntry structures for attributes.
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES                                                                                     \
    {                                                                                                                              \
        {                                                                                                                          \
            0x00, 0x00                                                                                                             \
        }                                                                                                                          \
    }

// Array of EmberAfPluginReportingEntry structures.
#define ZRD(x) EMBER_ZCL_REPORTING_DIRECTION_##x
#define ZAP_REPORT_DIRECTION(x) ZRD(x)

// User options for plugin Reporting
#define EMBER_AF_PLUGIN_REPORTING_TABLE_SIZE (2)
#define EMBER_AF_PLUGIN_REPORTING_ENABLE_GROUP_BOUND_REPORTS

#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (2)
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS                                                                               \
    {                                                                                                                              \
        {                                                                                                                          \
            ZAP_REPORT_DIRECTION(REPORTED), 0x0001, 0x0006, 0x0000, ZAP_CLUSTER_MASK(SERVER), 0x0000, { { 0, 65344, 0 } }          \
        }, /* Reporting for cluster: "On/off", attribute: "on/off". side: server */                                                \
            {                                                                                                                      \
                ZAP_REPORT_DIRECTION(REPORTED), 0x0001, 0x0008, 0x0000, ZAP_CLUSTER_MASK(SERVER), 0x0000, { { 0, 65344, 0 } }      \
            }, /* Reporting for cluster: "Level Control", attribute: "current level". side: server */                              \
    }