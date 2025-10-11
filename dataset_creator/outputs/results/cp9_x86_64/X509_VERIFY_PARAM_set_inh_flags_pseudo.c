
undefined8 X509_VERIFY_PARAM_set_inh_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 1;
}

