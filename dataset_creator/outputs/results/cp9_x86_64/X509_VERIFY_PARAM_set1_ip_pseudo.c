
undefined8 X509_VERIFY_PARAM_set1_ip(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 0xfffffffffffffffb) != 0) && (param_3 != 0x10)) {
    return 0;
  }
  uVar1 = int_x509_param_set1(param_1 + 0x60,param_1 + 0x68,param_2,param_3);
  return uVar1;
}

