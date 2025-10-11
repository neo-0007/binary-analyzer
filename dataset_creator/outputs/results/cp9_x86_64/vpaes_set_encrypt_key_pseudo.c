
undefined8 vpaes_set_encrypt_key(undefined8 param_1,uint param_2,long param_3)

{
  *(uint *)(param_3 + 0xf0) = (param_2 >> 5) + 5;
  _vpaes_schedule_core();
  return 0;
}

