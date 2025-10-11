
undefined8 FUN_004cc420(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/cmp/cmp_util.c",0xf8,"ossl_cmp_asn1_octet_string_set1");
    FUN_0051f8f0(0x3a,0x67,0);
    uVar1 = 0;
  }
  else {
    lVar2 = *param_1;
    if (lVar2 == param_2) {
      return 1;
    }
    if (param_2 != 0) {
      param_2 = thunk_FUN_004a22a0(param_2);
      if (param_2 == 0) {
        return 0;
      }
      lVar2 = *param_1;
    }
    thunk_FUN_004a2270(lVar2);
    *param_1 = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

