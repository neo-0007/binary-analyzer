
undefined8 FUN_00447390(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d830(lVar2,&local_18);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0xf4,
                     "aes_xts_set_ctx_params");
        FUN_0051f8f0(0x39,0x67,0);
      }
      else if (*(long *)(param_1 + 0x18) == local_18) goto LAB_004473e0;
      uVar3 = 0;
      goto LAB_004473e5;
    }
  }
LAB_004473e0:
  uVar3 = 1;
LAB_004473e5:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

