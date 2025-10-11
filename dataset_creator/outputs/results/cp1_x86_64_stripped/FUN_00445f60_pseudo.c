
undefined4 FUN_00445f60(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_2 != 0) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d830(lVar2,&local_28);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",0xfc,
                     "aes_wrap_set_ctx_params");
        FUN_0051f8f0(0x39,0x67,0);
        uVar3 = 0;
        goto LAB_00445fc1;
      }
      if (*(long *)(param_1 + 0x18) != local_28) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",0x100,
                     "aes_wrap_set_ctx_params");
        FUN_0051f8f0(0x39,0x69,0);
        goto LAB_00445fc1;
      }
    }
  }
  uVar3 = 1;
LAB_00445fc1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

