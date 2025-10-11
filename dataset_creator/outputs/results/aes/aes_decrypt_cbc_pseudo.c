
undefined8
aes_decrypt_cbc(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined4 param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 & 0xf) == 0) {
    local_20 = param_6[1];
    local_28 = *param_6;
    for (local_50 = 0; local_50 < (int)(param_2 >> 4); local_50 = local_50 + 1) {
      puVar2 = (undefined8 *)(param_1 + (local_50 << 4));
      local_40 = puVar2[1];
      local_48 = *puVar2;
      aes_decrypt(&local_48,&local_38,param_4,param_5);
      xor_buf(&local_28,&local_38,0x10);
      puVar2 = (undefined8 *)((local_50 << 4) + param_3);
      *puVar2 = local_38;
      puVar2[1] = local_30;
      local_28 = local_48;
      local_20 = local_40;
    }
    uVar1 = 1;
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

