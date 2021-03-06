/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: kurapayload.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "kurapayload.pb-c.h"
void   kuradatatypes__kura_payload__kura_metric__init
                     (Kuradatatypes__KuraPayload__KuraMetric         *message)
{
  static Kuradatatypes__KuraPayload__KuraMetric init_value = KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__INIT;
  *message = init_value;
}
void   kuradatatypes__kura_payload__kura_position__init
                     (Kuradatatypes__KuraPayload__KuraPosition         *message)
{
  static Kuradatatypes__KuraPayload__KuraPosition init_value = KURADATATYPES__KURA_PAYLOAD__KURA_POSITION__INIT;
  *message = init_value;
}
void   kuradatatypes__kura_payload__init
                     (Kuradatatypes__KuraPayload         *message)
{
  static Kuradatatypes__KuraPayload init_value = KURADATATYPES__KURA_PAYLOAD__INIT;
  *message = init_value;
}
size_t kuradatatypes__kura_payload__get_packed_size
                     (const Kuradatatypes__KuraPayload *message)
{
  assert(message->base.descriptor == &kuradatatypes__kura_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kuradatatypes__kura_payload__pack
                     (const Kuradatatypes__KuraPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kuradatatypes__kura_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kuradatatypes__kura_payload__pack_to_buffer
                     (const Kuradatatypes__KuraPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kuradatatypes__kura_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Kuradatatypes__KuraPayload *
       kuradatatypes__kura_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Kuradatatypes__KuraPayload *)
     protobuf_c_message_unpack (&kuradatatypes__kura_payload__descriptor,
                                allocator, len, data);
}
void   kuradatatypes__kura_payload__free_unpacked
                     (Kuradatatypes__KuraPayload *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &kuradatatypes__kura_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue kuradatatypes__kura_payload__kura_metric__value_type__enum_values_by_number[7] =
{
  { "DOUBLE", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__DOUBLE", 0 },
  { "FLOAT", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__FLOAT", 1 },
  { "INT64", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__INT64", 2 },
  { "INT32", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__INT32", 3 },
  { "BOOL", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__BOOL", 4 },
  { "STRING", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__STRING", 5 },
  { "BYTES", "KURADATATYPES__KURA_PAYLOAD__KURA_METRIC__VALUE_TYPE__BYTES", 6 },
};
static const ProtobufCIntRange kuradatatypes__kura_payload__kura_metric__value_type__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex kuradatatypes__kura_payload__kura_metric__value_type__enum_values_by_name[7] =
{
  { "BOOL", 4 },
  { "BYTES", 6 },
  { "DOUBLE", 0 },
  { "FLOAT", 1 },
  { "INT32", 3 },
  { "INT64", 2 },
  { "STRING", 5 },
};
const ProtobufCEnumDescriptor kuradatatypes__kura_payload__kura_metric__value_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "kuradatatypes.KuraPayload.KuraMetric.ValueType",
  "ValueType",
  "Kuradatatypes__KuraPayload__KuraMetric__ValueType",
  "kuradatatypes",
  7,
  kuradatatypes__kura_payload__kura_metric__value_type__enum_values_by_number,
  7,
  kuradatatypes__kura_payload__kura_metric__value_type__enum_values_by_name,
  1,
  kuradatatypes__kura_payload__kura_metric__value_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor kuradatatypes__kura_payload__kura_metric__field_descriptors[9] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, type),
    &kuradatatypes__kura_payload__kura_metric__value_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "double_value",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, has_double_value),
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, double_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "float_value",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, has_float_value),
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, float_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "long_value",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, has_long_value),
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, long_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "int_value",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, has_int_value),
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, int_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bool_value",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, has_bool_value),
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, bool_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "string_value",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, string_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bytes_value",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, has_bytes_value),
    offsetof(Kuradatatypes__KuraPayload__KuraMetric, bytes_value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kuradatatypes__kura_payload__kura_metric__field_indices_by_name[] = {
  6,   /* field[6] = bool_value */
  8,   /* field[8] = bytes_value */
  2,   /* field[2] = double_value */
  3,   /* field[3] = float_value */
  5,   /* field[5] = int_value */
  4,   /* field[4] = long_value */
  0,   /* field[0] = name */
  7,   /* field[7] = string_value */
  1,   /* field[1] = type */
};
static const ProtobufCIntRange kuradatatypes__kura_payload__kura_metric__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor kuradatatypes__kura_payload__kura_metric__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "kuradatatypes.KuraPayload.KuraMetric",
  "KuraMetric",
  "Kuradatatypes__KuraPayload__KuraMetric",
  "kuradatatypes",
  sizeof(Kuradatatypes__KuraPayload__KuraMetric),
  9,
  kuradatatypes__kura_payload__kura_metric__field_descriptors,
  kuradatatypes__kura_payload__kura_metric__field_indices_by_name,
  1,  kuradatatypes__kura_payload__kura_metric__number_ranges,
  (ProtobufCMessageInit) kuradatatypes__kura_payload__kura_metric__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor kuradatatypes__kura_payload__kura_position__field_descriptors[9] =
{
  {
    "latitude",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, latitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "longitude",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, longitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "altitude",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_altitude),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, altitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "precision",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_precision),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, precision),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "heading",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_heading),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, heading),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "speed",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_speed),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, speed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_timestamp),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "satellites",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_satellites),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, satellites),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, has_status),
    offsetof(Kuradatatypes__KuraPayload__KuraPosition, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kuradatatypes__kura_payload__kura_position__field_indices_by_name[] = {
  2,   /* field[2] = altitude */
  4,   /* field[4] = heading */
  0,   /* field[0] = latitude */
  1,   /* field[1] = longitude */
  3,   /* field[3] = precision */
  7,   /* field[7] = satellites */
  5,   /* field[5] = speed */
  8,   /* field[8] = status */
  6,   /* field[6] = timestamp */
};
static const ProtobufCIntRange kuradatatypes__kura_payload__kura_position__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor kuradatatypes__kura_payload__kura_position__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "kuradatatypes.KuraPayload.KuraPosition",
  "KuraPosition",
  "Kuradatatypes__KuraPayload__KuraPosition",
  "kuradatatypes",
  sizeof(Kuradatatypes__KuraPayload__KuraPosition),
  9,
  kuradatatypes__kura_payload__kura_position__field_descriptors,
  kuradatatypes__kura_payload__kura_position__field_indices_by_name,
  1,  kuradatatypes__kura_payload__kura_position__number_ranges,
  (ProtobufCMessageInit) kuradatatypes__kura_payload__kura_position__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor kuradatatypes__kura_payload__field_descriptors[4] =
{
  {
    "timestamp",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Kuradatatypes__KuraPayload, has_timestamp),
    offsetof(Kuradatatypes__KuraPayload, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "position",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Kuradatatypes__KuraPayload, position),
    &kuradatatypes__kura_payload__kura_position__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "metric",
    5000,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Kuradatatypes__KuraPayload, n_metric),
    offsetof(Kuradatatypes__KuraPayload, metric),
    &kuradatatypes__kura_payload__kura_metric__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "body",
    5001,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Kuradatatypes__KuraPayload, has_body),
    offsetof(Kuradatatypes__KuraPayload, body),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kuradatatypes__kura_payload__field_indices_by_name[] = {
  3,   /* field[3] = body */
  2,   /* field[2] = metric */
  1,   /* field[1] = position */
  0,   /* field[0] = timestamp */
};
static const ProtobufCIntRange kuradatatypes__kura_payload__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 5000, 2 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor kuradatatypes__kura_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "kuradatatypes.KuraPayload",
  "KuraPayload",
  "Kuradatatypes__KuraPayload",
  "kuradatatypes",
  sizeof(Kuradatatypes__KuraPayload),
  4,
  kuradatatypes__kura_payload__field_descriptors,
  kuradatatypes__kura_payload__field_indices_by_name,
  2,  kuradatatypes__kura_payload__number_ranges,
  (ProtobufCMessageInit) kuradatatypes__kura_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
