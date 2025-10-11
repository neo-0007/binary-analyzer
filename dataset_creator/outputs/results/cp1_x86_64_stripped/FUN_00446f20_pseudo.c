
undefined4
FUN_00446f20(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,long param_6,
            byte param_7)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) &&
     ((*(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfd | (param_7 & 1) * '\x02',
      param_4 == 0 || (iVar1 = FUN_004866d0(param_1,param_4,param_5), iVar1 != 0)))) {
    if (param_2 != 0) {
      if (*(ulong *)(param_1 + 0x18) != param_3) {
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0x56,"aes_xts_init");
        FUN_0051f8f0(0x39,0x69,0);
        goto LAB_0044702b;
      }
      if (((DAT_007e1938 == 0) || ((param_7 & 1) != 0)) &&
         (iVar1 = FUN_00422820(param_2,param_2 + (param_3 >> 1)), iVar1 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0x3b,
                     "aes_xts_check_keys_differ");
        FUN_0051f8f0(0x39,0x95,0);
        uVar3 = 0;
        goto LAB_0044702b;
      }
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 == 0) goto LAB_00447028;
    }
    if ((param_6 == 0) || (lVar2 = thunk_FUN_0041cdd0(param_6,"keylen"), lVar2 == 0)) {
LAB_00447090:
      uVar3 = 1;
      goto LAB_0044702b;
    }
    iVar1 = thunk_FUN_0041d830(lVar2,&local_48);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0xf4,
                   "aes_xts_set_ctx_params");
      FUN_0051f8f0(0x39,0x67,0);
    }
    else if (*(long *)(param_1 + 0x18) == local_48) goto LAB_00447090;
  }
LAB_00447028:
  uVar3 = 0;
LAB_0044702b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

