
undefined4 FUN_00510b60(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 2) {
    iVar2 = FUN_004e6ef0(*param_1,(long)param_1 + 0x11,param_1[10],param_1[1]);
    if (iVar2 == 0) {
      FUN_0051f420();
      uVar3 = 0x25;
LAB_00510c18:
      FUN_0051f540("../crypto/ec/ecx_backend.c",uVar3,"ossl_ecx_public_from_private");
      FUN_0051f8f0(0x10,0xa6,0);
      return 0;
    }
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      FUN_004e7030((long)param_1 + 0x11,param_1[10]);
      return 1;
    }
    thunk_FUN_004ddd70((long)param_1 + 0x11,param_1[10]);
  }
  else if ((uVar1 == 3) &&
          (iVar2 = FUN_004dee70(*param_1,(long)param_1 + 0x11,param_1[10],param_1[1]), iVar2 == 0))
  {
    FUN_0051f420();
    uVar3 = 0x2f;
    goto LAB_00510c18;
  }
  return 1;
}

