#ifndef  MC_REG_LIST_DATA_H
#define  MC_REG_LIST_DATA_H

static regs_data_union_t mc_regs_data_union;

REGS_BEGIN(MC_REG_ARRAY_NAME)

REG(MC_REG_ID_DEVICE_TYPE_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_ERROR_REGISTER_VALUE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_NUMBER_OF_ERRORS,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_9,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_10,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_11,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_12,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_13,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_14,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRE_DEFINED_ERROR_FIELD_PRE_DEFINED_ERROR_FIELD_15,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_COB_ID_SYNC_MESSAGE_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_COMMUNICATION_CYCLE_PERIOD_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SYNCHRONOUS_WINDOW_LENGTH_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_STORE_PARAMETERS_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_STORE_PARAMETERS_STORE_PARAMETERS_0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_STORE_PARAMETERS_STORE_PARAMETERS_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_STORE_PARAMETERS_STORE_PARAMETERS_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_STORE_PARAMETERS_STORE_PARAMETERS_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RESTORE_DEFAULT_PARAMETERS_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RESTORE_DEFAULT_PARAMETERS_RESTORE_DEFAULT_PARAMETERS_0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RESTORE_DEFAULT_PARAMETERS_RESTORE_DEFAULT_PARAMETERS_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RESTORE_DEFAULT_PARAMETERS_RESTORE_DEFAULT_PARAMETERS_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RESTORE_DEFAULT_PARAMETERS_RESTORE_DEFAULT_PARAMETERS_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_COB_ID_TIME_STAMP_OBJECT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_COB_ID_EMCY_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_INHIBIT_TIME_EMCY_VALUE,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CONSUMER_HEARTBEAT_TIME_CONSUMER_HEARTBEAT_TIME_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PRODUCER_HEARTBEAT_TIME_VALUE,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_IDENTITY_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_IDENTITY_VENDOR_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_IDENTITY_PRODUCT_CODE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_IDENTITY_REVISION_NUMBER,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_IDENTITY_SERIAL_NUMBER,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SYNCHRONOUS_COUNTER_OVERFLOW_VALUE_VALUE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_SERVER_PARAMETER_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_SDO_SERVER_PARAMETER_COB_ID_CLIENT_TO_SERVER__RX_,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_SERVER_PARAMETER_COB_ID_SERVER_TO_CLIENT__TX_,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_SERVER_PARAMETER_1201_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_SDO_SERVER_PARAMETER_1201_COB_ID_CLIENT_TO_SERVER__RX_,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_SERVER_PARAMETER_1201_COB_ID_SERVER_TO_CLIENT__TX_,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_CLIENT_PARAMETER_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_SDO_CLIENT_PARAMETER_COB_ID_CLIENT_TO_SERVER__TX_,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_CLIENT_PARAMETER_COB_ID_SERVER_TO_CLIENT__RX_,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SDO_CLIENT_PARAMETER_NODE_ID_OF_THE_SDO_SERVER,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_COB_ID_USED_BY_RPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1401_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1401_COB_ID_USED_BY_RPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1401_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1401_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1402_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1402_COB_ID_USED_BY_RPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1402_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1402_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1403_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1403_COB_ID_USED_BY_RPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1403_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_COMMUNICATION_PARAMETER_1403_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1601_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1602_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_RPDO_MAPPING_PARAMETER_1603_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_COB_ID_USED_BY_TPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_INHIBIT_TIME,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_SYNC_START_VALUE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1801_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1801_COB_ID_USED_BY_TPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1801_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1801_INHIBIT_TIME,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1801_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1801_SYNC_START_VALUE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1802_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1802_COB_ID_USED_BY_TPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1802_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1802_INHIBIT_TIME,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1802_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1802_SYNC_START_VALUE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1803_HIGHEST_SUB_INDEX_SUPPORTED,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1803_COB_ID_USED_BY_TPDO,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1803_TRANSMISSION_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1803_INHIBIT_TIME,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1803_EVENT_TIMER,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_COMMUNICATION_PARAMETER_1803_SYNC_START_VALUE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A01_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A02_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_NUMBER_OF_MAPPED_APPLICATION_OBJECTS_IN_PDO,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Number  of  sub-entries  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_6,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_7,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_TPDO_MAPPING_PARAMETER_1A03_APPLICATION_OBJECT_8,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_SYS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SYS_ERRORS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Ошибки.  */
REG(MC_REG_ID_SYS_WARNINGS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Предупреждения.  */
REG(MC_REG_ID_SYS_FSM_STATE_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние.  */
REG(MC_REG_ID_SYS_FSM_STATE_PREV_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Предыдущее  состояние.  */
REG(MC_REG_ID_SYS_ADC_TIM_RUN_TIME_US,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Время  выполнения  прерывания  таймера  ADC.  */
REG(MC_REG_ID_SYS_SYS_TIM_RUN_TIME_US,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Время  выполнения  прерывания  таймера  SYS.  */
REG(MC_REG_ID_SYS_MS_TIM_RUN_TIME_US,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Время  выполнения  прерывания  таймера  MS.  */
REG(MC_REG_ID_SYS_NET_RUN_TIME_US,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Время  выполнения  прерывания  таймера  NET.  */
REG(MC_REG_ID_SYS_IDLE_RUN_TIME_US,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Время  выполнения  IDLE.  */
REG(MC_REG_ID_SYS_CMD_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_CMD_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_CMD_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SYS_CMD_OUT_COMMAND,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  командное  слово.  */
REG(MC_REG_ID_SYS_CTRL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_CTRL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_CTRL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SYS_CTRL_ERRORS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Ошибки.  */
REG(MC_REG_ID_SYS_CTRL_WARNINGS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Предупреждения.  */
REG(MC_REG_ID_SYS_CTRL_FSM_STATE_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние.  */
REG(MC_REG_ID_SYS_CTRL_FSM_STATE_PREV_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Предыдущее  состояние.  */
REG(MC_REG_ID_SYS_CTRL_OUT_COMMAND,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  командное  слово.  */
REG(MC_REG_ID_SYS_CTRL_FSM_CHECK_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние.  */
REG(MC_REG_ID_SYS_CTRL_FSM_CHECK_PREV_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Предыдущее  состояние.  */
REG(MC_REG_ID_SYS_CTRL_FSM_IDLE_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние.  */
REG(MC_REG_ID_SYS_CTRL_FSM_IDLE_PREV_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Предыдущее  состояние.  */
REG(MC_REG_ID_SYS_STAT_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_STAT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_STAT_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SYS_STAT_IN_COMMAND,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  командное  слово.  */
REG(MC_REG_ID_CONF_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_CONF_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_CONF_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_CONF_WARNINGS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждений.  */
REG(MC_REG_ID_CONF_U_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальное  (базовое)  напряжение.  */
REG(MC_REG_ID_CONF_I_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальный  (базовый)  ток.  */
REG(MC_REG_ID_CONF_F_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальная  (базовая)  частота.  */
REG(MC_REG_ID_CONF_U_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовое  напряжение.  */
REG(MC_REG_ID_CONF_U_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  напряжение,  инвертированное  значение.  */
REG(MC_REG_ID_CONF_I_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовый  ток.  */
REG(MC_REG_ID_CONF_I_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовый  ток,  инвертированное  значение.  */
REG(MC_REG_ID_CONF_F_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовая  частота.  */
REG(MC_REG_ID_CONF_F_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  частота,  инвертированное  значение.  */
REG(MC_REG_ID_CONF_P_BASE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Базовая  мощность.  */
REG(MC_REG_ID_CONF_P_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  мощность,  инвертированное  значение.  */
REG(MC_REG_ID_ADC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ADC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ADC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ADC_OUT_UA_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A  (сырое).  */
REG(MC_REG_ID_ADC_OUT_UB_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B  (сырое).  */
REG(MC_REG_ID_ADC_OUT_UC_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C  (сырое).  */
REG(MC_REG_ID_ADC_OUT_UA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A.  */
REG(MC_REG_ID_ADC_OUT_UB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B.  */
REG(MC_REG_ID_ADC_OUT_UC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C.  */
REG(MC_REG_ID_ADC_OUT_IA_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  A  (сырое).  */
REG(MC_REG_ID_ADC_OUT_IB_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  B  (сырое).  */
REG(MC_REG_ID_ADC_OUT_IC_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  C  (сырое).  */
REG(MC_REG_ID_ADC_OUT_IA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  A.  */
REG(MC_REG_ID_ADC_OUT_IB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  B.  */
REG(MC_REG_ID_ADC_OUT_IC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  C.  */
REG(MC_REG_ID_ADC_OUT_UARM_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  выхода  (сырое).  */
REG(MC_REG_ID_ADC_OUT_UARM,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  выхода.  */
REG(MC_REG_ID_ADC_OUT_IARM_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  выхода  (сырое).  */
REG(MC_REG_ID_ADC_OUT_IARM,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  выхода.  */
REG(MC_REG_ID_ADC_OUT_IR_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  резистора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_IRSTART,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  резистора.  */
REG(MC_REG_ID_ADC_OUT_S_UA_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A  статора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_S_UB_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B  статора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_S_UC_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C  статора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_S_UA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A  статора.  */
REG(MC_REG_ID_ADC_OUT_S_UB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B  статора.  */
REG(MC_REG_ID_ADC_OUT_S_UC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C  статора.  */
REG(MC_REG_ID_ADC_OUT_S_IA_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  A  статора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_S_IB_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  B  статора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_S_IC_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  C  статора  (сырое).  */
REG(MC_REG_ID_ADC_OUT_S_IA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  A  статора.  */
REG(MC_REG_ID_ADC_OUT_S_IB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  B  статора.  */
REG(MC_REG_ID_ADC_OUT_S_IC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенный  ток  фазы  C  статора.  */
REG(MC_REG_ID_ADC_UA_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  A.  */
REG(MC_REG_ID_ADC_UA_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  A.  */
REG(MC_REG_ID_ADC_UB_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  B.  */
REG(MC_REG_ID_ADC_UB_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  B.  */
REG(MC_REG_ID_ADC_UC_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  C.  */
REG(MC_REG_ID_ADC_UC_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  C.  */
REG(MC_REG_ID_ADC_IA_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  фазы  A.  */
REG(MC_REG_ID_ADC_IA_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  фазы  A.  */
REG(MC_REG_ID_ADC_IB_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  фазы  B.  */
REG(MC_REG_ID_ADC_IB_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  фазы  B.  */
REG(MC_REG_ID_ADC_IC_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  фазы  C.  */
REG(MC_REG_ID_ADC_IC_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  фазы  C.  */
REG(MC_REG_ID_ADC_UARM_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  выхода.  */
REG(MC_REG_ID_ADC_UARM_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  выхода.  */
REG(MC_REG_ID_ADC_IARM_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  выхода.  */
REG(MC_REG_ID_ADC_IARM_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  выхода.  */
REG(MC_REG_ID_ADC_IR_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  резистора.  */
REG(MC_REG_ID_ADC_IR_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  резистора.  */
REG(MC_REG_ID_ADC_S_UA_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  A  статора.  */
REG(MC_REG_ID_ADC_S_UA_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  A  статора.  */
REG(MC_REG_ID_ADC_S_UB_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  B  статора.  */
REG(MC_REG_ID_ADC_S_UB_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  B  статора.  */
REG(MC_REG_ID_ADC_S_UC_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  C  статора.  */
REG(MC_REG_ID_ADC_S_UC_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  C  статора.  */
REG(MC_REG_ID_ADC_S_IA_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  фазы  A  статора.  */
REG(MC_REG_ID_ADC_S_IA_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  фазы  A  статора.  */
REG(MC_REG_ID_ADC_S_IB_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  фазы  B  статора.  */
REG(MC_REG_ID_ADC_S_IB_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  фазы  B  статора.  */
REG(MC_REG_ID_ADC_S_IC_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  тока  фазы  C  статора.  */
REG(MC_REG_ID_ADC_S_IC_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  тока  фазы  C  статора.  */
REG(MC_REG_ID_DAC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_DAC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_DAC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_DAC_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_DAC_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_ADC_MODEL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ADC_MODEL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ADC_MODEL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ADC_MODEL_IN_U_SCALE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Масштабирование  напряжения  фаз  основного  ввода.  */
REG(MC_REG_ID_ADC_MODEL_IN_F_SCALE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Масштабирование  частоты  фаз  основного  ввода.  */
REG(MC_REG_ID_ADC_MODEL_IN_S_U_SCALE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Масштабирование  напряжения  фаз  статора.  */
REG(MC_REG_ID_ADC_MODEL_IN_S_F_SCALE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Масштабирование  частоты  фаз  статора.  */
REG(MC_REG_ID_ADC_MODEL_OUT_UA_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A  (сырое).  */
REG(MC_REG_ID_ADC_MODEL_OUT_UB_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B  (сырое).  */
REG(MC_REG_ID_ADC_MODEL_OUT_UC_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C  (сырое).  */
REG(MC_REG_ID_ADC_MODEL_OUT_UA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A.  */
REG(MC_REG_ID_ADC_MODEL_OUT_UB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B.  */
REG(MC_REG_ID_ADC_MODEL_OUT_UC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C.  */
REG(MC_REG_ID_ADC_MODEL_OUT_S_UA_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A  статора  (сырое).  */
REG(MC_REG_ID_ADC_MODEL_OUT_S_UB_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B  статора  (сырое).  */
REG(MC_REG_ID_ADC_MODEL_OUT_S_UC_RAW,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C  статора  (сырое).  */
REG(MC_REG_ID_ADC_MODEL_OUT_S_UA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  A  статора.  */
REG(MC_REG_ID_ADC_MODEL_OUT_S_UB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  B  статора.  */
REG(MC_REG_ID_ADC_MODEL_OUT_S_UC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мнговенное  напряжение  фазы  C  статора.  */
REG(MC_REG_ID_ADC_MODEL_UA_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  A.  */
REG(MC_REG_ID_ADC_MODEL_UA_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  A.  */
REG(MC_REG_ID_ADC_MODEL_UB_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  B.  */
REG(MC_REG_ID_ADC_MODEL_UB_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  B.  */
REG(MC_REG_ID_ADC_MODEL_UC_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  C.  */
REG(MC_REG_ID_ADC_MODEL_UC_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  C.  */
REG(MC_REG_ID_ADC_MODEL_S_UA_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  A  статора.  */
REG(MC_REG_ID_ADC_MODEL_S_UA_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  A  статора.  */
REG(MC_REG_ID_ADC_MODEL_S_UB_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  B  статора.  */
REG(MC_REG_ID_ADC_MODEL_S_UB_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  B  статора.  */
REG(MC_REG_ID_ADC_MODEL_S_UC_GAIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  усиления  напряжения  фазы  C  статора.  */
REG(MC_REG_ID_ADC_MODEL_S_UC_OFFSET,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Смещеие  АЦП  напряжения  фазы  C  статора.  */
REG(MC_REG_ID_ADC_TIM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ADC_TIM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ADC_TIM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ADC_TIM_OUT_COUNTER,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  тиков.  */
REG(MC_REG_ID_SYS_TIM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_TIM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_TIM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SYS_TIM_OUT_COUNTER,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  тиков.  */
REG(MC_REG_ID_MS_TIM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MS_TIM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MS_TIM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MS_TIM_OUT_COUNTER,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  тиков.  */
REG(MC_REG_ID_NET_TIM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_NET_TIM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_NET_TIM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_NET_TIM_OUT_COUNTER,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  тиков.  */
REG(MC_REG_ID_SYS_TIME_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_TIME_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_TIME_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SYS_TIME_COUNTER_MS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  времени  после  загрузки  в  мс.  */
REG(MC_REG_ID_SYS_TIME_COUNTER_S,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  времени  после  загрузки  в  с.  */
REG(MC_REG_ID_SYS_TIME_RUN_COUNTER_S,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Счётчик  времени  работы  в  с.  */
REG(MC_REG_ID_TMR_SYS_FSM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_SYS_FSM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_SYS_FSM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_SYS_FSM_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_SYS_FSM_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_SYS_FSM_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_DLOG_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_DLOG_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_DLOG_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_DLOG_IN_STOP_SAMPLES,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Число  семплов  до  остановки.  */
REG(MC_REG_ID_DLOG_CH0_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH0_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH1_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH1_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH2_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH2_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH3_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH3_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH4_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH4_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH5_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH5_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH6_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH6_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH7_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH7_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH8_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH8_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH9_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH9_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH10_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH10_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH11_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH11_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH12_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH12_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH13_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH13_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH14_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH14_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_CH15_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Разрешение  логгирования  канала.  */
REG(MC_REG_ID_DLOG_CH15_REG_ID,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  логгируемого  регистра.  */
REG(MC_REG_ID_DLOG_COUNT_36,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Число  записанных  данных.  */
REG(MC_REG_ID_DLOG_GET_INDEX,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Индекс  чтения  данных.  */
REG(MC_REG_ID_DLOG_PUT_INDEX,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Индекс  записи  данных.  */
REG(MC_REG_ID_DLOG_CH0_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH1_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH2_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH3_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH4_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH5_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH6_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH7_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH8_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH9_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH10_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH11_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH12_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH13_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH14_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_DLOG_CH15_DATA,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные.  */
REG(MC_REG_ID_SYS_CALC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SYS_CALC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SYS_CALC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RECT_CURR_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RECT_CURR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RECT_CURR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RECT_CURR_IN_IA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  фазы  A  относительно  сети.  */
REG(MC_REG_ID_RECT_CURR_IN_IB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  фазы  B  относительно  сети.  */
REG(MC_REG_ID_RECT_CURR_IN_IC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  фазы  C  относительно  сети.  */
REG(MC_REG_ID_RECT_CURR_OUT_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Выходной  выпрямленный  ток  относительно  двигателя.  */
REG(MC_REG_ID_MUX_UMAINS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_UMAINS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_UMAINS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_UMAINS_IN_A0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_UMAINS_IN_A1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_UMAINS_IN_A2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_UMAINS_IN_B0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_UMAINS_IN_B1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_UMAINS_IN_B2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_UMAINS_IN_C0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_UMAINS_IN_C1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_UMAINS_IN_C2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_UMAINS_OUT_A,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  A.  */
REG(MC_REG_ID_MUX_UMAINS_OUT_B,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  B.  */
REG(MC_REG_ID_MUX_UMAINS_OUT_C,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  C.  */
REG(MC_REG_ID_MUX_UMAINS_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_IMAINS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_IMAINS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_IMAINS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_IMAINS_IN_A0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_IMAINS_IN_A1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_IMAINS_IN_A2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_IMAINS_IN_B0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_IMAINS_IN_B1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_IMAINS_IN_B2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_IMAINS_IN_C0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_IMAINS_IN_C1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_IMAINS_IN_C2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_IMAINS_OUT_A,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  A.  */
REG(MC_REG_ID_MUX_IMAINS_OUT_B,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  B.  */
REG(MC_REG_ID_MUX_IMAINS_OUT_C,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  C.  */
REG(MC_REG_ID_MUX_IMAINS_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_UARM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_UARM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_UARM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_UARM_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_UARM_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_UARM_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_UARM_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_IARM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_IARM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_IARM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_IARM_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_IARM_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_IARM_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_IARM_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_IARM_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_IRSTART_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_IRSTART_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_IRSTART_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_IRSTART_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_IRSTART_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_IRSTART_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_IRSTART_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_UCELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_UCELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_UCELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_UCELL_IN_A0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_UCELL_IN_A1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_UCELL_IN_A2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_UCELL_IN_B0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_UCELL_IN_B1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_UCELL_IN_B2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_UCELL_IN_C0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_UCELL_IN_C1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_UCELL_IN_C2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_UCELL_OUT_A,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  A.  */
REG(MC_REG_ID_MUX_UCELL_OUT_B,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  B.  */
REG(MC_REG_ID_MUX_UCELL_OUT_C,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  C.  */
REG(MC_REG_ID_MUX_UCELL_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_ICELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_ICELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_ICELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_ICELL_IN_A0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_ICELL_IN_A1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_ICELL_IN_A2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  A.  */
REG(MC_REG_ID_MUX_ICELL_IN_B0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_ICELL_IN_B1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_ICELL_IN_B2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  B.  */
REG(MC_REG_ID_MUX_ICELL_IN_C0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_ICELL_IN_C1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_ICELL_IN_C2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения  C.  */
REG(MC_REG_ID_MUX_ICELL_OUT_A,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  A.  */
REG(MC_REG_ID_MUX_ICELL_OUT_B,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  B.  */
REG(MC_REG_ID_MUX_ICELL_OUT_C,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  C.  */
REG(MC_REG_ID_MUX_ICELL_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MUX_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_SLIP_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_SLIP_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_SLIP_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_SLIP_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_PHASE_AMPL_UA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PHASE_AMPL_UA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PHASE_AMPL_UA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PHASE_AMPL_UA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PHASE_AMPL_UA_OUT_PHASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фаза  в  периодических  единицах.  */
REG(MC_REG_ID_PHASE_AMPL_UA_OUT_AMPL,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PHASE_AMPL_UB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PHASE_AMPL_UB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PHASE_AMPL_UB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PHASE_AMPL_UB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PHASE_AMPL_UB_OUT_PHASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фаза  в  периодических  единицах.  */
REG(MC_REG_ID_PHASE_AMPL_UB_OUT_AMPL,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PHASE_AMPL_UC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PHASE_AMPL_UC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PHASE_AMPL_UC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PHASE_AMPL_UC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PHASE_AMPL_UC_OUT_PHASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фаза  в  периодических  единицах.  */
REG(MC_REG_ID_PHASE_AMPL_UC_OUT_AMPL,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_ZCD_UA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ZCD_UA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ZCD_UA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ZCD_UA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение  сигнала.  */
REG(MC_REG_ID_ZCD_UA_OUT_ZERO_CROSS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  пересечения  нуля.  */
REG(MC_REG_ID_ZCD_UA_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период.  */
REG(MC_REG_ID_ZCD_UA_OUT_FREQ,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Частота.  */
REG(MC_REG_ID_ZCD_UA_SAMPLES_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_ZCD_UB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ZCD_UB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ZCD_UB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ZCD_UB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение  сигнала.  */
REG(MC_REG_ID_ZCD_UB_OUT_ZERO_CROSS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  пересечения  нуля.  */
REG(MC_REG_ID_ZCD_UB_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период.  */
REG(MC_REG_ID_ZCD_UB_OUT_FREQ,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Частота.  */
REG(MC_REG_ID_ZCD_UB_SAMPLES_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_ZCD_UC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ZCD_UC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ZCD_UC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ZCD_UC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение  сигнала.  */
REG(MC_REG_ID_ZCD_UC_OUT_ZERO_CROSS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  пересечения  нуля.  */
REG(MC_REG_ID_ZCD_UC_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период.  */
REG(MC_REG_ID_ZCD_UC_OUT_FREQ,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Частота.  */
REG(MC_REG_ID_ZCD_UC_SAMPLES_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_ZCD_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_ZCD_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_ZCD_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_ZCD_SLIP_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение  сигнала.  */
REG(MC_REG_ID_ZCD_SLIP_OUT_ZERO_CROSS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  пересечения  нуля.  */
REG(MC_REG_ID_ZCD_SLIP_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период.  */
REG(MC_REG_ID_ZCD_SLIP_OUT_FREQ,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Частота.  */
REG(MC_REG_ID_ZCD_SLIP_SAMPLES_PERIOD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SLIP_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Измеренная  частота  для  вычисления  скольжения.  */
REG(MC_REG_ID_SLIP_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_IN_A,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входная  величина  по  фазе  A.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_IN_B,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входная  величина  по  фазе  B.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_IN_C,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входная  величина  по  фазе  C.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_OUT_A,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходная  величина  по  фазе  A.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_OUT_B,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходная  величина  по  фазе  B.  */
REG(MC_REG_ID_PHASE_LRM_I_STATOR_OUT_C,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходная  величина  по  фазе  C.  */
REG(MC_REG_ID_PHASE_UCELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PHASE_UCELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PHASE_UCELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PHASE_UCELL_IN_A,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входная  величина  по  фазе  A.  */
REG(MC_REG_ID_PHASE_UCELL_IN_B,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входная  величина  по  фазе  B.  */
REG(MC_REG_ID_PHASE_UCELL_IN_C,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входная  величина  по  фазе  C.  */
REG(MC_REG_ID_PHASE_UCELL_OUT_A,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Выходная  величина  по  фазе  A.  */
REG(MC_REG_ID_PHASE_UCELL_OUT_B,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Выходная  величина  по  фазе  B.  */
REG(MC_REG_ID_PHASE_UCELL_OUT_C,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Выходная  величина  по  фазе  C.  */
REG(MC_REG_ID_CALC_UCELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_CALC_UCELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_CALC_UCELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_CALC_UCELL_IN_A,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_UCELL_IN_B,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_UCELL_IN_C,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_UCELL_OUT_A,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_UCELL_OUT_B,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_UCELL_OUT_C,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_UCELL_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  для  вычисления.  0  -  не  вычислять;  1-3  -  номер  фазы.  */
REG(MC_REG_ID_CALC_ICELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_CALC_ICELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_CALC_ICELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_CALC_ICELL_IN_A,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_ICELL_IN_B,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_ICELL_IN_C,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_ICELL_OUT_A,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_ICELL_OUT_B,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_ICELL_OUT_C,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_CALC_ICELL_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  для  вычисления.  0  -  не  вычислять;  1-3  -  номер  фазы.  */
REG(MC_REG_ID_RMS_UA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_UA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_UA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_UA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_UA_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_UB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_UB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_UB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_UB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_UB_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_UC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_UC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_UC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_UC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_UC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_IA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_IA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_IA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_IA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_IA_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_IB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_IB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_IB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_IB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_IB_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_IC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_IC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_IC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_IC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_IC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_UA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_UA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_UA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_UA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_UA_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_UB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_UB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_UB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_UB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_UB_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_UC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_UC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_UC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_UC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_UC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_UA_PHASE_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_UA_PHASE_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_UA_PHASE_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_UA_PHASE_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_UA_PHASE_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_UB_PHASE_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_UB_PHASE_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_UB_PHASE_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_UB_PHASE_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_UB_PHASE_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_UC_PHASE_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_UC_PHASE_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_UC_PHASE_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_UC_PHASE_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_UC_PHASE_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_IA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_IA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_IA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_IA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_IA_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_IB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_IB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_IB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_IB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_IB_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_RMS_CELL_IC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_RMS_CELL_IC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_RMS_CELL_IC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_RMS_CELL_IC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение.  */
REG(MC_REG_ID_RMS_CELL_IC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Рассчитанное  RMS.  */
REG(MC_REG_ID_MEAN_IARM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MEAN_IARM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MEAN_IARM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MEAN_IARM_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение.  */
REG(MC_REG_ID_MEAN_IARM_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Посчитанное  среднее.  */
REG(MC_REG_ID_MEAN_UARM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MEAN_UARM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MEAN_UARM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MEAN_UARM_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение.  */
REG(MC_REG_ID_MEAN_UARM_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Посчитанное  среднее.  */
REG(MC_REG_ID_MEAN_IRSTART_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MEAN_IRSTART_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MEAN_IRSTART_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MEAN_IRSTART_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Текущее  значение.  */
REG(MC_REG_ID_MEAN_IRSTART_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Посчитанное  среднее.  */
REG(MC_REG_ID_MEAN_RMS_ICELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MEAN_RMS_ICELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MEAN_RMS_ICELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MEAN_RMS_ICELL_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_MEAN_RMS_ICELL_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_MEAN_RMS_ICELL_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_MEAN_RMS_ICELL_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Среднее  значение.  */
REG(MC_REG_ID_SUM_S_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SUM_S_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SUM_S_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SUM_S_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_S_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_S_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_S_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Среднее  значение.  */
REG(MC_REG_ID_SUM_P_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SUM_P_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SUM_P_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SUM_P_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_P_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_P_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_P_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Среднее  значение.  */
REG(MC_REG_ID_SUM_Q_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SUM_Q_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SUM_Q_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SUM_Q_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_Q_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_Q_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усредняемые  значения.  */
REG(MC_REG_ID_SUM_Q_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Среднее  значение.  */
REG(MC_REG_ID_POWER_A_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_POWER_A_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_POWER_A_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_POWER_A_IN_U,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мгновенное  значение  напряжения.  */
REG(MC_REG_ID_POWER_A_IN_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мгновенное  значение  тока.  */
REG(MC_REG_ID_POWER_A_IN_RMS_U,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Действующее  значение  напряжения.  */
REG(MC_REG_ID_POWER_A_IN_RMS_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Действующее  значение  тока.  */
REG(MC_REG_ID_POWER_A_OUT_S,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Полная  мощность.  */
REG(MC_REG_ID_POWER_A_OUT_P,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Активная  мощность.  */
REG(MC_REG_ID_POWER_A_OUT_Q,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Реактивная  мощность.  */
REG(MC_REG_ID_POWER_B_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_POWER_B_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_POWER_B_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_POWER_B_IN_U,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мгновенное  значение  напряжения.  */
REG(MC_REG_ID_POWER_B_IN_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мгновенное  значение  тока.  */
REG(MC_REG_ID_POWER_B_IN_RMS_U,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Действующее  значение  напряжения.  */
REG(MC_REG_ID_POWER_B_IN_RMS_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Действующее  значение  тока.  */
REG(MC_REG_ID_POWER_B_OUT_S,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Полная  мощность.  */
REG(MC_REG_ID_POWER_B_OUT_P,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Активная  мощность.  */
REG(MC_REG_ID_POWER_B_OUT_Q,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Реактивная  мощность.  */
REG(MC_REG_ID_POWER_C_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_POWER_C_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_POWER_C_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_POWER_C_IN_U,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мгновенное  значение  напряжения.  */
REG(MC_REG_ID_POWER_C_IN_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Мгновенное  значение  тока.  */
REG(MC_REG_ID_POWER_C_IN_RMS_U,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Действующее  значение  напряжения.  */
REG(MC_REG_ID_POWER_C_IN_RMS_I,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Действующее  значение  тока.  */
REG(MC_REG_ID_POWER_C_OUT_S,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Полная  мощность.  */
REG(MC_REG_ID_POWER_C_OUT_P,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Активная  мощность.  */
REG(MC_REG_ID_POWER_C_OUT_Q,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Реактивная  мощность.  */
REG(MC_REG_ID_POWER_FACTOR_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_POWER_FACTOR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_POWER_FACTOR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_POWER_FACTOR_IN_S,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Полная  мощность.  */
REG(MC_REG_ID_POWER_FACTOR_IN_P,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Активная  мощность.  */
REG(MC_REG_ID_POWER_FACTOR_IN_Q,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Реактивная  мощность.  */
REG(MC_REG_ID_POWER_FACTOR_OUT_COS_PHI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  cos(phi).  */
REG(MC_REG_ID_POWER_FACTOR_OUT_SIN_PHI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  sin(phi).  */
REG(MC_REG_ID_POWER_FACTOR_OUT_TAN_PHI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  tan(phi).  */
REG(MC_REG_ID_VR_RMS_UMAINS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_VR_RMS_UMAINS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_VR_RMS_UMAINS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_VR_RMS_UMAINS_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_RMS_UMAINS_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_RMS_UMAINS_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_RMS_UMAINS_OUT_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_RMS_UMAINS_OUT_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_RMS_UMAINS_OUT_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_RMS_UMAINS_OUT_VALUE_ALL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона  для  всех  значений.  */
REG(MC_REG_ID_VR_RMS_UMAINS_MIN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  нижней  границы.  */
REG(MC_REG_ID_VR_RMS_UMAINS_MAX_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  верхней  границы.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_OUT_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_OUT_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_OUT_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_OUT_VALUE_ALL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона  для  всех  значений.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_MIN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  нижней  границы.  */
REG(MC_REG_ID_VR_FILTER_FREQ_UMAINS_MAX_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  верхней  границы.  */
REG(MC_REG_ID_VR_RMS_UCELL_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_VR_RMS_UCELL_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_VR_RMS_UCELL_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_VR_RMS_UCELL_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_RMS_UCELL_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_RMS_UCELL_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_VR_RMS_UCELL_OUT_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_RMS_UCELL_OUT_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_RMS_UCELL_OUT_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона.  */
REG(MC_REG_ID_VR_RMS_UCELL_OUT_VALUE_ALL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  допустимого  диапазона  для  всех  значений.  */
REG(MC_REG_ID_VR_RMS_UCELL_MIN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  нижней  границы.  */
REG(MC_REG_ID_VR_RMS_UCELL_MAX_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  верхней  границы.  */
REG(MC_REG_ID_CELL_CB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_CELL_CB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_CELL_CB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_CELL_CB_IN_NO_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  NO  контакта  выключателя  ячейки.  */
REG(MC_REG_ID_CELL_CB_IN_NC_STATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  NC  контакта  выключателя  ячейки.  */
REG(MC_REG_ID_CELL_CB_OUT_STATE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  выключателя  ячейки.  */
REG(MC_REG_ID_FIELD_TRIG_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FIELD_TRIG_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FIELD_TRIG_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FIELD_TRIG_OUT_RUN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  триггера  включения  двигателя.  */
REG(MC_REG_ID_FIELD_TRIG_OUT_FIELD_ON,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояние  триггера  включения  возбуждения.  */
REG(MC_REG_ID_FIELD_TRIG_OUT_RSTART_ON,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Триггер  управления  пусковым  сопротивлением.  */
REG(MC_REG_ID_FIELD_TRIG_OUT_START_FORCING_END,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Триггер  окончания  форсировки  при  запуске.  */
REG(MC_REG_ID_FIELD_TRIG_OUT_FIELD_SUPP_END,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Триггер  окончания  гашения  поля  при  останове.  */
REG(MC_REG_ID_THR_RUN_TRIG_I_S_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_RUN_TRIG_I_S_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_RUN_TRIG_I_S_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_RUN_TRIG_I_S_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_RUN_TRIG_I_S_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_RUN_TRIG_I_S_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_AM_RUN_TRIG_I_S_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_AM_RUN_TRIG_I_S_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_AM_RUN_TRIG_I_S_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_AM_RUN_TRIG_I_S_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_RUN_TRIG_I_S_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_RUN_TRIG_I_S_MASK0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_TMR_RUN_TRIG_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_RUN_TRIG_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_RUN_TRIG_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_RUN_TRIG_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_TMR_RUN_TRIG_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_TMR_RUN_TRIG_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_RUN_TRIG_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_RUN_TRIG_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_RUN_TRIG_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_RUN_TRIG_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_THR_PRIM_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_PRIM_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_PRIM_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_PRIM_SLIP_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_PRIM_SLIP_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_PRIM_SLIP_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_THR_PRIM_I_S_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_PRIM_I_S_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_PRIM_I_S_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_PRIM_I_S_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_PRIM_I_S_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_PRIM_I_S_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_THR_PRIM_T_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_PRIM_T_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_PRIM_T_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_PRIM_T_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_PRIM_T_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_PRIM_T_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_MASK0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_MASK1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_AM_PRIM_FIELD_ON_MASK2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_THR_SEC_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_SEC_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_SEC_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_SEC_SLIP_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_SEC_SLIP_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_SEC_SLIP_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_THR_SEC_I_S_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_SEC_I_S_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_SEC_I_S_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_SEC_I_S_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_SEC_I_S_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_SEC_I_S_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_THR_SEC_T_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_SEC_T_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_SEC_T_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_SEC_T_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_SEC_T_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_SEC_T_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_MASK0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_MASK1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_AM_SEC_FIELD_ON_MASK2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_TMR_FIELD_ON_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_FIELD_ON_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_ON_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_ON_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_TMR_FIELD_ON_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_TMR_FIELD_ON_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_ON_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_ON_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_FIELD_ON_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_FIELD_ON_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_THR_FIELD_ON_I_R_SYNC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_FIELD_ON_I_R_SYNC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_FIELD_ON_I_R_SYNC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_FIELD_ON_I_R_SYNC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_FIELD_ON_I_R_SYNC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_FIELD_ON_I_R_SYNC_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_FIELD_ON_I_R_SYNC_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_THR_VALUE_FOR_SLIP_LT_ZERO_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_VALUE_FOR_SLIP_LT_ZERO_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_VALUE_FOR_SLIP_LT_ZERO_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_VALUE_FOR_SLIP_LT_ZERO_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_VALUE_FOR_SLIP_LT_ZERO_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_VALUE_FOR_SLIP_LT_ZERO_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_FIELD_ON_RSTART_OFF_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_TMR_START_MIN_FORCING_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_START_MIN_FORCING_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_START_MIN_FORCING_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_START_MIN_FORCING_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_START_MIN_FORCING_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_START_MIN_FORCING_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_TMR_START_MAX_FORCING_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_START_MAX_FORCING_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_START_MAX_FORCING_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_START_MAX_FORCING_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_START_MAX_FORCING_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_START_MAX_FORCING_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_START_STAB_FORCING_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_THR_START_Q_LE_ZERO_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_START_Q_LE_ZERO_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_START_Q_LE_ZERO_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_START_Q_LE_ZERO_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_START_Q_LE_ZERO_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_START_Q_LE_ZERO_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_THR_FIELD_SUPP_I_R_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_THR_FIELD_SUPP_I_R_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_THR_FIELD_SUPP_I_R_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_THR_FIELD_SUPP_I_R_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Значение  для  сравнения.  */
REG(MC_REG_ID_THR_FIELD_SUPP_I_R_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Результат  сравнения  значения  с  порогом.  */
REG(MC_REG_ID_THR_FIELD_SUPP_I_R_THRESHOLD,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Порог.  */
REG(MC_REG_ID_TMR_FIELD_SUPP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TMR_FIELD_SUPP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TMR_FIELD_SUPP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TMR_FIELD_SUPP_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_TMR_FIELD_SUPP_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_TMR_FIELD_SUPP_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_CNT_START_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_CNT_START_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_CNT_START_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_CNT_START_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Значение  счётчика.  */
REG(MC_REG_ID_FILTER_ZCD_UA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_ZCD_UA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_ZCD_UA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_ZCD_UA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_UA_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_UA_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_ZCD_UA_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_ZCD_UB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_ZCD_UB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_ZCD_UB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_ZCD_UB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_UB_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_UB_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_ZCD_UB_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_ZCD_UC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_ZCD_UC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_ZCD_UC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_ZCD_UC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_UC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_UC_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_ZCD_UC_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_ZCD_SLIP_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_FREQ_UA_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_FREQ_UA_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_FREQ_UA_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_FREQ_UA_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_UA_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_UA_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_FREQ_UA_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_FREQ_UB_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_FREQ_UB_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_FREQ_UB_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_FREQ_UB_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_UB_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_UB_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_FREQ_UB_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_FREQ_UC_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_FREQ_UC_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_FREQ_UC_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_FREQ_UC_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_UC_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_UC_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_FREQ_UC_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_FREQ_SLIP_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_MEAN_IARM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_MEAN_IARM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_MEAN_IARM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_MEAN_IARM_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_MEAN_IARM_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_MEAN_IARM_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_MEAN_IARM_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_MEAN_UARM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_MEAN_UARM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_MEAN_UARM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_MEAN_UARM_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_MEAN_UARM_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_MEAN_UARM_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_MEAN_UARM_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Фильтруеый  сигнал.  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Отфильтрованный  сигнал.  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_T,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра.  */
REG(MC_REG_ID_FILTER_MEAN_IRSTART_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_MUX_FIELD_REGS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_FIELD_REGS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_FIELD_REGS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_FIELD_REGS_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_FIELD_REGS_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_FIELD_REGS_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_FIELD_REGS_IN_VALUE3,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_FIELD_REGS_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_FIELD_REGS_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  данные.  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_MIN_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  нижней  границы.  */
REG(MC_REG_ID_LIM_FIELD_REGS_CURR_REF_MAX_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_CONF,  0x000000)  /*  Значение  верхней  границы.  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_FIELD_FORCE_REF_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_IN_DEC,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  декремента.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_IN_INC,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  инкремента.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_TIME,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Время  изменения  величины  от  0  до  100%.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_MIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Минимальное  значение.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_MAX,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Максимальное  значение.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Значение.  */
REG(MC_REG_ID_MOT_POT_FIELD_TEST_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_IN_DEC,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  декремента.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_IN_INC,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  инкремента.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_TIME,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Время  изменения  величины  от  0  до  100%.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_MIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Минимальное  значение.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_MAX,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Максимальное  значение.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Значение.  */
REG(MC_REG_ID_MOT_POT_MANUAL_CURR_REF_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Период  дискретизации.  */
REG(MC_REG_ID_MUX_CURR_REF_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MUX_CURR_REF_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MUX_CURR_REF_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MUX_CURR_REF_IN_VALUE0,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_CURR_REF_IN_VALUE1,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_CURR_REF_IN_VALUE2,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_CURR_REF_IN_VALUE3,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Входные  значения.  */
REG(MC_REG_ID_MUX_CURR_REF_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение.  */
REG(MC_REG_ID_MUX_CURR_REF_SEL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Селектор  значений.  */
REG(MC_REG_ID_PID_I_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PID_I_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PID_I_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PID_I_IN_REF,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Задание.  */
REG(MC_REG_ID_PID_I_IN_FBK,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Обратная  связь.  */
REG(MC_REG_ID_PID_I_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Воздействие.  */
REG(MC_REG_ID_PID_I_KP,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Коэффициент  пропорциональной  составляющей.  */
REG(MC_REG_ID_PID_I_KI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Коэффициент  интегральной  составляющей.  */
REG(MC_REG_ID_PID_I_KD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Коэффициент  дифференциальной  составляющей.  */
REG(MC_REG_ID_PID_I_KF,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Коэффициент  фильтра  дифференциальной  составляющей.  */
REG(MC_REG_ID_PID_I_MIN,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальное  значение  выхода.  */
REG(MC_REG_ID_PID_I_MAX,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальное  значение  выхода.  */
REG(MC_REG_ID_PID_COEFS_I_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PID_COEFS_I_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PID_COEFS_I_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PID_COEFS_I_OUT_KP,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PID_COEFS_I_OUT_KI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PID_COEFS_I_OUT_KD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PID_COEFS_I_OUT_KF,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PID_COEFS_I_KP,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Коэффициент  пропорциональной  составляющей.  */
REG(MC_REG_ID_PID_COEFS_I_TI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  интегрирования.  */
REG(MC_REG_ID_PID_COEFS_I_TD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  дифференцирования.  */
REG(MC_REG_ID_PID_COEFS_I_TF,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  Постоянная  времени  фильтра  дифференциальной  составляющей.  */
REG(MC_REG_ID_PID_COEFS_I_TS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Время  дискретизации  регулятора.  */
REG(MC_REG_ID_PH3C_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PH3C_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_IN_UA_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  фазы  AB,  в  периодических  единицах,  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_IN_UB_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  фазы  BC,  в  периодических  единицах,  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_IN_UC_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  фазы  CA,  в  периодических  единицах,  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_IN_CONTROL_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Величина  управления,  0  -  0%,  1  -  100%  от  максимума  (до  ограничения).  */
REG(MC_REG_ID_PH3C_OUT_CONTROL0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Управление.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Управление.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Управление.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Управление.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Управление.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Управление.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL_DELAY_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  до  импульса  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_OUT_CONTROL_MAX_DURATION_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальная  продолжительность  (угол)  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_OUT_MIN_CONTROL_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальная  величина  управления  (максимальный  электрический  угол  коммутации).  */
REG(MC_REG_ID_PH3C_OUT_MAX_CONTROL_VALUE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальная  величина  управления  (минимальный  электрический  угол  коммутации).  */
REG(MC_REG_ID_PH3C_MIN_CONTROL_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Минимальный  угол  управления,  в  электрических  градусах.  */
REG(MC_REG_ID_PH3C_MAX_CONTROL_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Максимальный  угол  управления,  в  электрических  градусах.  */
REG(MC_REG_ID_PH3C_PHC0_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_PHC0_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_PHC0_IN_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  слежения,  в  периодических  единицах  -  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_PHC0_IN_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC0_OUT_CYCLE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  цикла  управления.  */
REG(MC_REG_ID_PH3C_PHC0_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  периода.  */
REG(MC_REG_ID_PH3C_PHC0_OUT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  управления.  */
REG(MC_REG_ID_PH3C_PHC0_OUT_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах  -  [0;  2*pi  +  da).  */
REG(MC_REG_ID_PH3C_PHC0_OUT_CONTROL_LATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  опоздания  (угол  текущего  семпла  больше  чем  угол  начала  управления).  */
REG(MC_REG_ID_PH3C_PHC0_OUT_CONTROL_BETWEEN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  нахождения  начала  управления  между  текущим  и  следующим  семплом.  */
REG(MC_REG_ID_PH3C_PHC0_R_ANGLE_WIN_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол,  в  периодических  единицах,  окно  для  управления  от  текущего  угла.  */
REG(MC_REG_ID_PH3C_PHC0_R_MIN_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC0_R_MAX_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC1_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_PHC1_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_PHC1_IN_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  слежения,  в  периодических  единицах  -  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_PHC1_IN_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC1_OUT_CYCLE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  цикла  управления.  */
REG(MC_REG_ID_PH3C_PHC1_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  периода.  */
REG(MC_REG_ID_PH3C_PHC1_OUT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  управления.  */
REG(MC_REG_ID_PH3C_PHC1_OUT_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах  -  [0;  2*pi  +  da).  */
REG(MC_REG_ID_PH3C_PHC1_OUT_CONTROL_LATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  опоздания  (угол  текущего  семпла  больше  чем  угол  начала  управления).  */
REG(MC_REG_ID_PH3C_PHC1_OUT_CONTROL_BETWEEN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  нахождения  начала  управления  между  текущим  и  следующим  семплом.  */
REG(MC_REG_ID_PH3C_PHC1_R_ANGLE_WIN_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол,  в  периодических  единицах,  окно  для  управления  от  текущего  угла.  */
REG(MC_REG_ID_PH3C_PHC1_R_MIN_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC1_R_MAX_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC2_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_PHC2_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_PHC2_IN_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  слежения,  в  периодических  единицах  -  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_PHC2_IN_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC2_OUT_CYCLE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  цикла  управления.  */
REG(MC_REG_ID_PH3C_PHC2_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  периода.  */
REG(MC_REG_ID_PH3C_PHC2_OUT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  управления.  */
REG(MC_REG_ID_PH3C_PHC2_OUT_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах  -  [0;  2*pi  +  da).  */
REG(MC_REG_ID_PH3C_PHC2_OUT_CONTROL_LATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  опоздания  (угол  текущего  семпла  больше  чем  угол  начала  управления).  */
REG(MC_REG_ID_PH3C_PHC2_OUT_CONTROL_BETWEEN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  нахождения  начала  управления  между  текущим  и  следующим  семплом.  */
REG(MC_REG_ID_PH3C_PHC2_R_ANGLE_WIN_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол,  в  периодических  единицах,  окно  для  управления  от  текущего  угла.  */
REG(MC_REG_ID_PH3C_PHC2_R_MIN_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC2_R_MAX_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC3_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_PHC3_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_PHC3_IN_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  слежения,  в  периодических  единицах  -  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_PHC3_IN_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC3_OUT_CYCLE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  цикла  управления.  */
REG(MC_REG_ID_PH3C_PHC3_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  периода.  */
REG(MC_REG_ID_PH3C_PHC3_OUT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  управления.  */
REG(MC_REG_ID_PH3C_PHC3_OUT_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах  -  [0;  2*pi  +  da).  */
REG(MC_REG_ID_PH3C_PHC3_OUT_CONTROL_LATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  опоздания  (угол  текущего  семпла  больше  чем  угол  начала  управления).  */
REG(MC_REG_ID_PH3C_PHC3_OUT_CONTROL_BETWEEN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  нахождения  начала  управления  между  текущим  и  следующим  семплом.  */
REG(MC_REG_ID_PH3C_PHC3_R_ANGLE_WIN_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол,  в  периодических  единицах,  окно  для  управления  от  текущего  угла.  */
REG(MC_REG_ID_PH3C_PHC3_R_MIN_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC3_R_MAX_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC4_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_PHC4_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_PHC4_IN_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  слежения,  в  периодических  единицах  -  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_PHC4_IN_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC4_OUT_CYCLE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  цикла  управления.  */
REG(MC_REG_ID_PH3C_PHC4_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  периода.  */
REG(MC_REG_ID_PH3C_PHC4_OUT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  управления.  */
REG(MC_REG_ID_PH3C_PHC4_OUT_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах  -  [0;  2*pi  +  da).  */
REG(MC_REG_ID_PH3C_PHC4_OUT_CONTROL_LATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  опоздания  (угол  текущего  семпла  больше  чем  угол  начала  управления).  */
REG(MC_REG_ID_PH3C_PHC4_OUT_CONTROL_BETWEEN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  нахождения  начала  управления  между  текущим  и  следующим  семплом.  */
REG(MC_REG_ID_PH3C_PHC4_R_ANGLE_WIN_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол,  в  периодических  единицах,  окно  для  управления  от  текущего  угла.  */
REG(MC_REG_ID_PH3C_PHC4_R_MIN_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC4_R_MAX_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC5_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PH3C_PHC5_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PH3C_PHC5_IN_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  слежения,  в  периодических  единицах  -  [0;  2*pi).  */
REG(MC_REG_ID_PH3C_PHC5_IN_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC5_OUT_CYCLE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  цикла  управления.  */
REG(MC_REG_ID_PH3C_PHC5_OUT_PERIOD,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  периода.  */
REG(MC_REG_ID_PH3C_PHC5_OUT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  начала  управления.  */
REG(MC_REG_ID_PH3C_PHC5_OUT_CONTROL_ANGLE_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  начала  управления,  в  периодических  единицах  -  [0;  2*pi  +  da).  */
REG(MC_REG_ID_PH3C_PHC5_OUT_CONTROL_LATE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  опоздания  (угол  текущего  семпла  больше  чем  угол  начала  управления).  */
REG(MC_REG_ID_PH3C_PHC5_OUT_CONTROL_BETWEEN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  нахождения  начала  управления  между  текущим  и  следующим  семплом.  */
REG(MC_REG_ID_PH3C_PHC5_R_ANGLE_WIN_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол,  в  периодических  единицах,  окно  для  управления  от  текущего  угла.  */
REG(MC_REG_ID_PH3C_PHC5_R_MIN_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Минимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_PH3C_PHC5_R_MAX_ANGLE_TO_CONTROL_PU,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальный  угол  для  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_TRIACS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_TRIACS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_TRIACS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слова  управления  тиристорами.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слова  управления  тиристорами.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слова  управления  тиристорами.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слова  управления  тиристорами.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слова  управления  тиристорами.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слова  управления  тиристорами.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL_DELAY_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Угол  до  импульса  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_TRIACS_IN_CONTROL_MAX_DURATION_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Максимальная  продолжительность  (угол)  управления,  в  периодических  единицах.  */
REG(MC_REG_ID_LRM_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_LRM_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_LRM_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_LRM_WARNINGS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждений.  */
REG(MC_REG_ID_LRM_IN_UA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_UB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_UC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_UREF_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL3,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL4,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL5,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL_DELAY_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_CONTROL_DURATION_ANGLE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_DT,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_STATOR_UA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_STATOR_UB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_STATOR_UC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_STATOR_ON,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_START_R_ON,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_IN_K_MC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_IA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_IB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_IC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_UFLD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_IFLD,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_M,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_W,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_STATOR_IA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_STATOR_IB,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_STATOR_IC,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_OUT_IRSTART,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_LRM_I_HOLD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_RS,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_RR,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_RF,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LSD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LSQ,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LRD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LRQ,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LFD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LMSRD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LMSRQ,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LMSFD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_LMRFD,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_P,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_MC,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_KF,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_J,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_RSTART,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_LRM_START_R_U_THR,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_MOTOR_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_MOTOR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_MOTOR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_MOTOR_WARNINGS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждений.  */
REG(MC_REG_ID_MOTOR_F_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальная  частота  статора,  Гц.  */
REG(MC_REG_ID_MOTOR_S_U_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальное  напряжение  статора,  В.  */
REG(MC_REG_ID_MOTOR_S_I_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальный  ток  статора,  А.  */
REG(MC_REG_ID_MOTOR_U_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальное  напряжение  ротора,  В.  */
REG(MC_REG_ID_MOTOR_I_NOM,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_CONF,  0x000000)  /*  Номинальный  ток  ротора,  А.  */
REG(MC_REG_ID_MOTOR_F_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовая  частота.  */
REG(MC_REG_ID_MOTOR_F_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  частота,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_W_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовая  угловая  частота.  */
REG(MC_REG_ID_MOTOR_W_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  угловая  частота,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_T_BASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  время.  */
REG(MC_REG_ID_MOTOR_T_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовое  время,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_U_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовое  напряжение.  */
REG(MC_REG_ID_MOTOR_S_U_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  напряжение,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_I_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовый  ток.  */
REG(MC_REG_ID_MOTOR_S_I_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовый  ток,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_P_BASE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Базовая  мощность.  */
REG(MC_REG_ID_MOTOR_S_P_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  мощность,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_M_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовый  момент.  */
REG(MC_REG_ID_MOTOR_S_M_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовый  момент,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_J_BASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовый  момент  инерции.  */
REG(MC_REG_ID_MOTOR_S_J_BASE_INV,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Базовый  момент  инерции,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_PSI_BASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  потокосцепление.  */
REG(MC_REG_ID_MOTOR_S_PSI_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  потокосцепление,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_R_BASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  сопротивление.  */
REG(MC_REG_ID_MOTOR_S_R_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  сопротивление,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_L_BASE,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  индуктивность.  */
REG(MC_REG_ID_MOTOR_S_L_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовая  индуктивность,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_R_U_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовое  напряжение.  */
REG(MC_REG_ID_MOTOR_R_U_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовое  напряжение,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_R_I_BASE,  &mc_regs_data_union,  REG_TYPE_IQ15,  REG_FLAG_NONE,  0x000000)  /*  Базовый  ток.  */
REG(MC_REG_ID_MOTOR_R_I_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовый  ток,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_R_P_BASE,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Базовая  мощность.  */
REG(MC_REG_ID_MOTOR_R_P_BASE_INV,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Базовая  мощность,  инвертированное  значение.  */
REG(MC_REG_ID_MOTOR_S_K_U_MAINS_TO_MOT,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Напряжение  относительно  сети  в  напряжение  относительно  статора  двигателя.  */
REG(MC_REG_ID_MOTOR_S_K_I_MAINS_TO_MOT,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  относительно  сети  в  ток  относительно  статора  двигателя.  */
REG(MC_REG_ID_MOTOR_S_K_I_MOT_TO_MAINS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  относительно  статора  двигателя  в  ток  относительно  сети.  */
REG(MC_REG_ID_MOTOR_R_K_U_MAINS_TO_MOT,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Напряжение  относительно  сети  в  напряжение  относительно  ротора  двигателя.  */
REG(MC_REG_ID_MOTOR_R_K_I_MAINS_TO_MOT,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  относительно  сети  в  ток  относительно  ротора  двигателя.  */
REG(MC_REG_ID_MOTOR_R_K_I_MOT_TO_MAINS,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_NONE,  0x000000)  /*  Ток  относительно  ротора  двигателя  в  ток  относительно  сети.  */
REG(MC_REG_ID_PROT_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_PROT_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_ERRORS0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  ошибок  0.  */
REG(MC_REG_ID_PROT_ERRORS1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  ошибок  1.  */
REG(MC_REG_ID_PROT_ERRORS2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  ошибок  1.  */
REG(MC_REG_ID_PROT_WARNINGS0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждений  0.  */
REG(MC_REG_ID_PROT_WARNINGS1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждений  1.  */
REG(MC_REG_ID_PROT_WARNINGS2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждений  2.  */
REG(MC_REG_ID_PROT_OUT_HAS_ERRORS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  наличия  ошибок.  */
REG(MC_REG_ID_PROT_OUT_ERROR_OCCURED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  возникновения  новой  ошибки.  */
REG(MC_REG_ID_PROT_MAINS_LOST_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_LOST_U_LOW,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_INVALID_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_INVALID_A_DELTA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_INVALID_F_DELTA,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_U_LOW,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_U_HI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_I_HI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_U_HI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_OVERCURRENT_ENABLED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_OVERCURRENT_I_HI,  &mc_regs_data_union,  REG_TYPE_IQ24,  REG_FLAG_CONF,  0x000000)  /*  */
REG(MC_REG_ID_PROT_RAW_ERRORS0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PROT_RAW_ERRORS1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PROT_RAW_ERRORS2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MASK_ERRORS0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MASK_ERRORS1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MASK_ERRORS2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_MAINS_LOST_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_MAINS_INVALID_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_MAINS_UNDERVOLTAGE_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_MAINS_OVERVOLTAGE_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_MAINS_OVERCURRENT_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_OVERVOLTAGE_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_IN_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Входное  значение  сигнала.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_OUT_VALUE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Выходное  значение  сигнала.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_R_TMR_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_R_TMR_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_R_TMR_OUT_EXPIRED,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Флаг  истечения  времени.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_R_TMR_OUT_TIMEOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Строб  тайм-аута.  */
REG(MC_REG_ID_PROT_OVERCURRENT_TIMER_R_TMR_P_INTERVAL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_CONF,  0x000000)  /*  Интервал  таймера,  мс.  */
REG(MC_REG_ID_CANOPEN_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_CANOPEN_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_CANOPEN_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_STORAGE_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_STORAGE_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_STORAGE_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SETTINGS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_SETTINGS_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_SETTINGS_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_SETTINGS_ERRORS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Ошибки.  */
REG(MC_REG_ID_EVENT_LOG_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_READONLY,  0x000000)  /*  Number  of  sub  entries  count  */
REG(MC_REG_ID_EVENT_LOG_CONTROL,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  управления.  */
REG(MC_REG_ID_EVENT_LOG_STATUS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  состояния.  */
REG(MC_REG_ID_EVENT_LOG_IN_EVENT_TYPE,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Тип  события  для  записи.  */
REG(MC_REG_ID_EVENT_LOG_IN_EVENT_N,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Номер  события  для  чтения.  */
REG(MC_REG_ID_EVENT_LOG_IN_OSC_CH_N,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Номер  канала  для  чтения.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_MAGIC,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  заголовка.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_INDEX,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Индекс  события.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_TYPE,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Тип  события.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_RESERVED00,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Зарезервировано.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_RESERVED01,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Зарезервировано.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_RESERVED02,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Зарезервировано.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_HEADER_CRC,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Контрольная  сумма.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_TIME,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Время  события.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_ERROR0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  ошибки  0.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_ERROR1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  ошибки  1.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_ERROR2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  ошибки  2.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_REG_ERROR0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Регистр  ошибки  0.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_REG_ERROR1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Регистр  ошибки  1.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_REG_ERROR2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Регистр  ошибки  2.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_WARNING0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждения  0.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_WARNING1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждения  1.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_WARNING2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Слово  предупреждения  2.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_REG_WARNING0,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Регистр  предупреждения  0.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_REG_WARNING1,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Регистр  предупреждения  1.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_REG_WARNING2,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Регистр  предупреждения  2.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_DIN,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояния  цифровых  входов.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_DOUT,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Состояния  цифровых  выходов.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_INFO_CRC,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Контрольная  сумма.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_FS,  &mc_regs_data_union,  REG_TYPE_U32,  REG_FLAG_NONE,  0x000000)  /*  Частота  дискретизации.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_CHANNELS_COUNT,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Число  каналов.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_RESERVED00,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Зарезервировано.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_RESERVED01,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Зарезервировано.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_RESERVED02,  &mc_regs_data_union,  REG_TYPE_U8,  REG_FLAG_NONE,  0x000000)  /*  Зарезервировано.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_SAMPLES_COUNT,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Число  семплов.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_EVENT_SAMPLE,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Семпл  возникновения  события.  */
REG(MC_REG_ID_EVENT_LOG_EVENT_DATA_OSC_INFO_CRC,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Контрольная  сумма.  */
REG(MC_REG_ID_EVENT_LOG_OSC_CHANNEL_DATA_CHANNEL_INFO_REG_ID,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Идентификатор  осциллографируемого  регистра.  */
REG(MC_REG_ID_EVENT_LOG_OSC_CHANNEL_DATA_CHANNEL_INFO_OFFSET,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Смещение.  */
REG(MC_REG_ID_EVENT_LOG_OSC_CHANNEL_DATA_CHANNEL_INFO_GAIN,  &mc_regs_data_union,  REG_TYPE_I32,  REG_FLAG_NONE,  0x000000)  /*  Усиление.  */
REG(MC_REG_ID_EVENT_LOG_OSC_CHANNEL_DATA_CHANNEL_INFO_CRC,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Контрольная  сумма.  */
REG(MC_REG_ID_EVENT_LOG_OSC_CHANNEL_DATA_CHANNEL_DATA_SAMPLES,  &mc_regs_data_union,  REG_TYPE_MEM,  REG_FLAG_NONE,  0x000000)  /*  Данные  осциллограммы.  */
REG(MC_REG_ID_EVENT_LOG_OSC_CHANNEL_DATA_CHANNEL_DATA_CRC,  &mc_regs_data_union,  REG_TYPE_U16,  REG_FLAG_NONE,  0x000000)  /*  Контрольная  сумма.  */

REGS_END()


#endif  /*MC_REG_LIST_DATA_H*/
