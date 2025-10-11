
undefined8
aes_encrypt_ccm(void *param_1,uint param_2,undefined8 param_3,ushort param_4,undefined8 param_5,
               ushort param_6,void *param_7,int *param_8,uint param_9,undefined8 param_10,
               undefined4 param_11)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_148;
  int local_144;
  void *local_140;
  undefined1 local_138 [240];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((param_9 == 4) || (param_9 == 6)) || (param_9 == 8)) ||
      ((param_9 == 10 || (param_9 == 0xc)))) || ((param_9 == 0xe || (param_9 == 0x10)))) {
    if ((param_6 < 7) || (0xd < param_6)) {
      uVar1 = 0;
    }
    else if (param_4 < 0x8001) {
      local_140 = malloc((ulong)(param_2 + param_4 + 0x30));
      if (local_140 == (void *)0x0) {
        uVar1 = 0;
      }
      else {
        aes_key_setup(param_10,local_138,param_11);
        local_144 = 0xf - (uint)param_6;
        ccm_prepare_first_format_blk(local_140,param_4,param_2,local_144,param_9,param_5,param_6);
        local_148 = 0x10;
        ccm_format_assoc_data(local_140,&local_148,param_3,param_4);
        ccm_format_payload_data(local_140,&local_148,param_1,param_2);
        ccm_prepare_first_ctr_blk(&local_38,param_5,param_6,local_144);
        memset(&local_48,0,0x10);
        aes_encrypt_cbc_mac(local_140,(long)local_148,local_28,local_138,param_11,&local_48);
        memcpy(param_7,param_1,(ulong)param_2);
        memcpy((void *)((ulong)param_2 + (long)param_7),local_28,(ulong)param_9);
        local_48 = local_38;
        local_40 = local_30;
        increment_iv(&local_48,0xf - param_9);
        aes_encrypt_ctr(param_7,param_2,param_7,local_138,param_11,&local_48);
        aes_encrypt_ctr((ulong)param_2 + (long)param_7,param_9,(ulong)param_2 + (long)param_7,
                        local_138,param_11,&local_38);
        free(local_140);
        *param_8 = param_2 + param_9;
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

