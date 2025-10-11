
long FUN_0040fa00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0x676,"EVP_PKEY_dup");
    FUN_0051f8f0(6,0xc0102,0);
    return 0;
  }
  lVar3 = FUN_0040ec60();
  if (lVar3 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
LAB_0040fa33:
      iVar2 = FUN_0053dc40(lVar3,param_1,0x87);
      goto joined_r0x0040faac;
    }
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) goto LAB_0040fa33;
    if ((*(long *)(param_1 + 2) == 0) ||
       (pcVar1 = *(code **)(*(long *)(param_1 + 2) + 0x130), pcVar1 == (code *)0x0)) {
      if ((*(long *)(param_1 + 8) != 0) || (iVar2 = FUN_0040f1a0(lVar3), iVar2 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/p_lib.c",0x68e,"EVP_PKEY_dup");
        FUN_0051f8f0(6,0xe0,0);
        goto LAB_0040faae;
      }
      goto LAB_0040fa47;
    }
    iVar2 = (*pcVar1)(lVar3,param_1);
joined_r0x0040faac:
    if (iVar2 == 0) goto LAB_0040faae;
  }
LAB_0040fa47:
  iVar2 = FUN_004196d0(0x11,lVar3 + 0x50,param_1 + 0x14);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar4 = FUN_00437e20();
      *(long *)(lVar3 + 0x40) = lVar4;
      if (lVar4 == 0) goto LAB_0040faae;
    }
    return lVar3;
  }
LAB_0040faae:
  FUN_0040f4f0(lVar3);
  return 0;
}

