
undefined4 FUN_00444520(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_0041cdd0(param_2,"tag");
  if (lVar3 == 0) goto LAB_004445ad;
  if (*(int *)(lVar3 + 8) != 5) {
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x16f,
                 "aes_ocb_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
    goto LAB_00444579;
  }
  uVar1 = *(ulong *)(lVar3 + 0x18);
  if (*(long *)(lVar3 + 0x10) == 0) {
    if (uVar1 < 0x11) {
      *(ulong *)(param_1 + 0x368) = uVar1;
      goto LAB_004445ad;
    }
  }
  else if ((*(ulong *)(param_1 + 0x368) == uVar1) && ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    thunk_FUN_00713a50(param_1 + 0x380);
LAB_004445ad:
    lVar3 = thunk_FUN_0041cdd0(param_2,"ivlen");
    if (lVar3 != 0) {
      iVar2 = thunk_FUN_0041d830(lVar3,&local_30);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x180,
                     "aes_ocb_set_ctx_params");
        FUN_0051f8f0(0x39,0x67,0);
        uVar4 = 0;
        goto LAB_00444579;
      }
      if (0xe < local_30 - 1U) goto LAB_00444576;
      *(long *)(param_1 + 0x20) = local_30;
    }
    uVar4 = 1;
    lVar3 = thunk_FUN_0041cdd0(param_2,"keylen");
    if (lVar3 == 0) goto LAB_00444579;
    iVar2 = thunk_FUN_0041d830(lVar3,&local_28);
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x18d,
                   "aes_ocb_set_ctx_params");
      FUN_0051f8f0(0x39,0x67,0);
    }
    else {
      if (*(long *)(param_1 + 0x18) == local_28) goto LAB_00444579;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x191,
                   "aes_ocb_set_ctx_params");
      FUN_0051f8f0(0x39,0x69,0);
    }
  }
LAB_00444576:
  uVar4 = 0;
LAB_00444579:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

