
stack_st_CONF_VALUE *
i2v_BASIC_CONSTRAINTS(undefined8 param_1,int *param_2,stack_st_CONF_VALUE *param_3)

{
  stack_st_CONF_VALUE *local_20 [2];
  
  local_20[0] = param_3;
  X509V3_add_value_bool("CA",*param_2,local_20);
  X509V3_add_value_int("pathlen",*(ASN1_INTEGER **)(param_2 + 2),local_20);
  return local_20[0];
}

