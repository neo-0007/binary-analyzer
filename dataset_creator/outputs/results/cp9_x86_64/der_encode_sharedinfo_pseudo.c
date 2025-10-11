
bool der_encode_sharedinfo
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
               long param_10,undefined8 param_11,long param_12,undefined8 param_13,long param_14,
               undefined8 param_15,int param_16,long *param_17)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    iVar1 = WPACKET_init_null_der();
  }
  else {
    iVar1 = WPACKET_init_der();
  }
  if ((((((iVar1 != 0) && (iVar1 = ossl_DER_w_begin_sequence(param_1,0xffffffff), iVar1 != 0)) &&
        ((param_14 == 0 ||
         (iVar1 = ossl_DER_w_octet_string(param_1,3,param_14,param_15), iVar1 != 0)))) &&
       (((param_12 == 0 ||
         (iVar1 = ossl_DER_w_octet_string(param_1,2,param_12,param_13), iVar1 != 0)) &&
        ((param_16 == 0 || (iVar1 = ossl_DER_w_octet_string_uint32(param_1,2,param_16), iVar1 != 0))
        )))) && (((param_10 == 0 ||
                  (iVar1 = ossl_DER_w_octet_string(param_1,1,param_10,param_11), iVar1 != 0)) &&
                 ((param_8 == 0 ||
                  (iVar1 = ossl_DER_w_octet_string(param_1,0,param_8,param_9), iVar1 != 0)))))) &&
     ((((param_6 == 0 ||
        (iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,param_6,param_7), iVar1 != 0)) &&
       (iVar1 = ossl_DER_w_begin_sequence(param_1,0xffffffff), iVar1 != 0)) &&
      (iVar1 = ossl_DER_w_octet_string_uint32(param_1,0xffffffff,1), iVar1 != 0)))) {
    if (param_17 != (long *)0x0) {
      lVar2 = WPACKET_get_curr(param_1);
      *param_17 = lVar2;
      if (lVar2 == 0) {
        return false;
      }
    }
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,param_4,param_5);
    if (((iVar1 != 0) && (iVar1 = ossl_DER_w_end_sequence(param_1,0xffffffff), iVar1 != 0)) &&
       (iVar1 = ossl_DER_w_end_sequence(param_1,0xffffffff), iVar1 != 0)) {
      iVar1 = WPACKET_finish(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

