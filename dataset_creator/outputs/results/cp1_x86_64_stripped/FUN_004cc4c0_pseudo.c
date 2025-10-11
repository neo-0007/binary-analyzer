
undefined8 FUN_004cc4c0(long *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/cmp/cmp_util.c",0x110,"ossl_cmp_asn1_octet_string_set1_bytes");
    FUN_0051f8f0(0x3a,0x67,0);
    uVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_004a7670();
      if (lVar2 == 0) {
LAB_004cc520:
        thunk_FUN_004a2270(lVar2);
        return 0;
      }
      iVar1 = thunk_FUN_004a1fa0(lVar2,param_2,param_3);
      if (iVar1 == 0) goto LAB_004cc520;
    }
    thunk_FUN_004a2270(*param_1);
    *param_1 = lVar2;
    uVar3 = 1;
  }
  return uVar3;
}

