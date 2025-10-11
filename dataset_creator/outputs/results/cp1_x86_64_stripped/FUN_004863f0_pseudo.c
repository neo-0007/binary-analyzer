
undefined4 FUN_004863f0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"padding");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d240(lVar2,&local_24);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe | local_24 != 0;
        goto LAB_0048645c;
      }
      FUN_0051f420();
      uVar3 = 0x25c;
LAB_00486561:
      uVar4 = 0;
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",uVar3,
                   "ossl_cipher_generic_set_ctx_params");
      FUN_0051f8f0(0x39,0x67,0);
      goto LAB_0048652f;
    }
LAB_0048645c:
    lVar2 = thunk_FUN_0041cdd0(param_2,"use-bits");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d240(lVar2,&local_24);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x266;
        goto LAB_00486561;
      }
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xbf | (local_24 != 0) << 6;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"tls-version");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d240(lVar2,param_1 + 0x40);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x26e;
        goto LAB_00486561;
      }
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"tls-mac-size");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d830(lVar2,param_1 + 0x58);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x275;
        goto LAB_00486561;
      }
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"num");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d240(lVar2,&local_24);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x27e;
        goto LAB_00486561;
      }
      *(int *)(param_1 + 0x70) = local_24;
    }
  }
  uVar4 = 1;
LAB_0048652f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

