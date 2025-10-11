
undefined4 FUN_00449e10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_0041cdd0(param_2,"keylen");
  if (lVar3 == 0) {
LAB_00449e5b:
    lVar3 = thunk_FUN_0041cdd0(param_2,"ivlen");
    if (lVar3 != 0) {
      iVar1 = thunk_FUN_0041d830(lVar3,&local_28);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar4 = 0x7e;
        goto LAB_00449f41;
      }
      if (local_28 != 0x10) {
        FUN_0051f420();
        uVar2 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20.c",0x82,
                     "chacha20_set_ctx_params");
        FUN_0051f8f0(0x39,0x6d,0);
        goto LAB_00449e92;
      }
    }
    uVar2 = 1;
  }
  else {
    iVar1 = thunk_FUN_0041d830(lVar3,&local_28);
    if (iVar1 != 0) {
      if (local_28 != 0x20) {
        FUN_0051f420();
        uVar2 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20.c",0x77,
                     "chacha20_set_ctx_params");
        FUN_0051f8f0(0x39,0x69,0);
        goto LAB_00449e92;
      }
      goto LAB_00449e5b;
    }
    FUN_0051f420();
    uVar4 = 0x73;
LAB_00449f41:
    uVar2 = 0;
    FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20.c",uVar4,
                 "chacha20_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
  }
LAB_00449e92:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

