
undefined8
aes_decrypt_ccm(void *param_1,uint param_2,undefined8 param_3,ushort param_4,undefined8 param_5,
               ushort param_6,void *param_7,uint *param_8,uint param_9,undefined4 *param_10,
               undefined8 param_11,undefined4 param_12)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_158;
  int local_154;
  void *local_150;
  undefined1 local_148 [240];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 < param_2) {
    local_150 = malloc((ulong)(param_2 + param_4 + 0x30));
    if (local_150 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      aes_key_setup(param_11,local_148,param_12);
      *param_8 = param_2 - param_9;
      local_154 = 0xf - (uint)param_6;
      memcpy(param_7,param_1,(ulong)*param_8);
      memcpy(local_38,(void *)((ulong)*param_8 + (long)param_1),(ulong)param_9);
      ccm_prepare_first_ctr_blk(&local_48,param_5,param_6,local_154);
      local_58 = local_48;
      local_50 = local_40;
      increment_iv(&local_58,0xf - param_9);
      aes_decrypt_ctr(param_7,*param_8,param_7,local_148,param_12,&local_58);
      if (param_10 != (undefined4 *)0x0) {
        aes_decrypt_ctr(local_38,param_9,local_38,local_148,param_12,&local_48);
        local_154 = 0xf - (uint)param_6;
        ccm_prepare_first_format_blk(local_150,param_4,*param_8,local_154,param_9,param_5,param_6);
        local_158 = 0x10;
        ccm_format_assoc_data(local_150,&local_158,param_3,param_4);
        ccm_format_payload_data(local_150,&local_158,param_7,*param_8);
        memset(&local_58,0,0x10);
        aes_encrypt_cbc_mac(local_150,(long)local_158,local_28,local_148,param_12,&local_58);
        iVar1 = memcmp(local_38,local_28,(ulong)param_9);
        if (iVar1 == 0) {
          *param_10 = 1;
        }
        else {
          *param_10 = 0;
          memset(param_7,0,(ulong)*param_8);
        }
      }
      free(local_150);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

