
undefined4 FUN_004453c0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_2c;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  if (param_2 != 0) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"tag");
    if (lVar2 == 0) {
LAB_00445435:
      lVar2 = thunk_FUN_0041cdd0(param_2,"speed");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041d240(lVar2,&local_2c);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/ciphers/cipher_aes_siv.c",0xdf,
                       "aes_siv_set_ctx_params");
          FUN_0051f8f0(0x39,0x67,0);
          uVar3 = 0;
          goto LAB_004454b6;
        }
        (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(param_1,local_2c);
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"keylen");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041d830(lVar2,&local_28);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/ciphers/cipher_aes_siv.c",0xe9,
                       "aes_siv_set_ctx_params");
          FUN_0051f8f0(0x39,0x67,0);
        }
        else if (*(long *)(param_1 + 8) == local_28) goto LAB_004454b0;
        uVar3 = 0;
        goto LAB_004454b6;
      }
    }
    else if ((*(byte *)(param_1 + 4) & 1) == 0) {
      if (*(int *)(lVar2 + 8) == 5) {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x18))
                          (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 != 0) goto LAB_00445435;
      }
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_siv.c",0xd8,
                   "aes_siv_set_ctx_params");
      FUN_0051f8f0(0x39,0x67,0);
      goto LAB_004454b6;
    }
  }
LAB_004454b0:
  uVar3 = 1;
LAB_004454b6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

