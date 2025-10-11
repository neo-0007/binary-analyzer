
undefined4 FUN_00444060(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_0041cdd0(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x19f;
      goto LAB_00444249;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x1a4;
      goto LAB_00444249;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"taglen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x368));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x1aa;
      goto LAB_00444249;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"iv");
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x20)) {
      FUN_0051f420();
      uVar3 = 0x1b2;
      goto LAB_00444201;
    }
    iVar1 = FUN_0041e220(lVar2,param_1 + 0x74);
    if (iVar1 == 0) {
      iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x1b7;
        goto LAB_00444249;
      }
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"updated-iv");
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x20)) {
      FUN_0051f420();
      uVar3 = 0x1be;
LAB_00444201:
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                   "aes_ocb_get_ctx_params");
      FUN_0051f8f0(0x39,0x6d,0);
      return 0;
    }
    iVar1 = FUN_0041e220(lVar2,param_1 + 0x94);
    if (iVar1 == 0) {
      iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x1c3;
LAB_00444249:
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                     "aes_ocb_get_ctx_params");
        FUN_0051f8f0(0x39,0x68,0);
        return 0;
      }
    }
  }
  uVar4 = 1;
  lVar2 = FUN_0041cdd0(param_2,"tag");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 5) {
      if (((*(byte *)(param_1 + 0x3c) & 2) == 0) ||
         (*(long *)(lVar2 + 0x18) != *(long *)(param_1 + 0x368))) {
        FUN_0051f420();
        uVar4 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x1ce,
                     "aes_ocb_get_ctx_params");
        FUN_0051f8f0(0x39,0x76,0);
      }
      else {
        thunk_FUN_00713a50(*(undefined8 *)(lVar2 + 0x10),param_1 + 0x380);
      }
    }
    else {
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x1ca,
                   "aes_ocb_get_ctx_params");
      FUN_0051f8f0(0x39,0x67,0);
    }
  }
  return uVar4;
}

