
undefined4 FUN_00486180(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x226;
      goto LAB_00486361;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"padding");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d380(lVar2,*(byte *)(param_1 + 0x3c) & 1);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x22b;
      goto LAB_00486361;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"iv");
  if (lVar2 != 0) {
    iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = FUN_0041e220(lVar2,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x232;
        goto LAB_00486361;
      }
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"updated-iv");
  if (lVar2 != 0) {
    iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = FUN_0041e220(lVar2,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x239;
        goto LAB_00486361;
      }
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"num");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d380(lVar2,*(undefined4 *)(param_1 + 0x70));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x23e;
      goto LAB_00486361;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x243;
      goto LAB_00486361;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"tls-mac");
  if (lVar2 != 0) {
    iVar1 = FUN_0041e3e0(lVar2,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x249;
LAB_00486361:
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",uVar3,
                   "ossl_cipher_generic_get_ctx_params");
      FUN_0051f8f0(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}

