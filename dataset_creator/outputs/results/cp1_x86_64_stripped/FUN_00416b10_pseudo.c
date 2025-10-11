
undefined8 FUN_00416b10(int *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    uVar3 = 0x27c;
  }
  else {
    if (*param_1 != 0x10) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/signature.c",0x281,"EVP_PKEY_sign");
      FUN_0051f8f0(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00416b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(param_1 + 10) + 0x40))();
      return uVar3;
    }
    lVar1 = *(long *)(param_1 + 0x1e);
    if ((lVar1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x48), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(byte *)(lVar1 + 4) & 2) != 0) {
        iVar2 = FUN_0040fb50(*(undefined8 *)(param_1 + 0x22));
        uVar4 = (ulong)iVar2;
        if (uVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/signature.c",0x293,"EVP_PKEY_sign");
          FUN_0051f8f0(6,0xa3,0);
          return 0;
        }
        if (param_2 == 0) {
          *param_3 = uVar4;
          return 1;
        }
        if (*param_3 < uVar4) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/signature.c",0x293,"EVP_PKEY_sign");
          FUN_0051f8f0(6,0x9b,0);
          return 0;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x1e) + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x00416b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar3;
    }
    FUN_0051f420();
    uVar3 = 0x28f;
  }
  FUN_0051f540("../crypto/evp/signature.c",uVar3,"EVP_PKEY_sign");
  FUN_0051f8f0(6,0x96,0);
  return 0xfffffffe;
}

