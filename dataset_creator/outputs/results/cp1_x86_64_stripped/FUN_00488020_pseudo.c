
bool FUN_00488020(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_0041cdd0(param_2,"ivlen");
  if ((lVar2 == 0) ||
     (iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
    lVar2 = FUN_0041cdd0(param_2,"keylen");
    if ((lVar2 != 0) && (iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)
       ) {
      FUN_0051f420();
      uVar4 = 0x94;
      goto LAB_00488239;
    }
    lVar2 = FUN_0041cdd0(param_2,"taglen");
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == -1) {
        lVar3 = 0x10;
      }
      iVar1 = thunk_FUN_0041d9c0(lVar2,lVar3);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar4 = 0x9d;
        goto LAB_00488239;
      }
    }
    lVar2 = FUN_0041cdd0(param_2,"iv");
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return false;
      }
      if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x10)) {
        FUN_0051f420();
        uVar4 = 0xa7;
        goto LAB_004882e1;
      }
      iVar1 = FUN_0041e220(lVar2,param_1 + 0x55);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) {
        FUN_0051f420();
        uVar4 = 0xac;
        goto LAB_00488239;
      }
    }
    lVar2 = FUN_0041cdd0(param_2,"updated-iv");
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return false;
      }
      if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x10)) {
        FUN_0051f420();
        uVar4 = 0xb6;
LAB_004882e1:
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",uVar4,
                     "ossl_gcm_get_ctx_params");
        FUN_0051f8f0(0x39,0x6d,0);
        return false;
      }
      iVar1 = FUN_0041e220(lVar2,param_1 + 0x55);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) {
        FUN_0051f420();
        uVar4 = 0xbb;
        goto LAB_00488239;
      }
    }
    lVar2 = FUN_0041cdd0(param_2,"tlsaadpad");
    if ((lVar2 == 0) ||
       (iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) {
      lVar2 = FUN_0041cdd0(param_2,"tag");
      if (lVar2 != 0) {
        if (((0xf < *(long *)(lVar2 + 0x18) - 1U) || ((*(byte *)(param_1 + 0x54) & 1) == 0)) ||
           (*(long *)(param_1 + 0x18) == -1)) {
          FUN_0051f420(lVar2);
          FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0xcc,
                       "ossl_gcm_get_ctx_params");
          FUN_0051f8f0(0x39,0x6e,0);
          return false;
        }
        iVar1 = FUN_0041e220(lVar2,param_1 + 0xd5);
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar4 = 0xd0;
          goto LAB_00488239;
        }
      }
      lVar2 = FUN_0041cdd0(param_2,"tlsivgen");
      if (lVar2 == 0) {
        return true;
      }
      if ((*(long *)(lVar2 + 0x10) != 0) && (*(int *)(lVar2 + 8) == 5)) {
        iVar1 = FUN_00487bf0(param_1,*(long *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
        return iVar1 != 0;
      }
      return false;
    }
    FUN_0051f420();
    uVar4 = 0xc2;
  }
  else {
    FUN_0051f420();
    uVar4 = 0x8f;
  }
LAB_00488239:
  FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",uVar4,
               "ossl_gcm_get_ctx_params");
  FUN_0051f8f0(0x39,0x68,0);
  return false;
}

