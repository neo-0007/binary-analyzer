
void aes_encrypt_ctr(void *param_1,ulong param_2,void *param_3,undefined8 param_4,undefined4 param_5
                    ,undefined8 *param_6)

{
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 != param_3) {
    memcpy(param_3,param_1,param_2);
  }
  local_30 = param_6[1];
  local_38 = *param_6;
  if (0x10 < param_2) {
    for (local_48 = 0; local_48 < param_2 - 0x10; local_48 = local_48 + 0x10) {
      aes_encrypt(&local_38,local_28,param_4,param_5);
      xor_buf(local_28,(long)param_3 + local_48,0x10);
      increment_iv(&local_38,0x10);
    }
  }
  aes_encrypt(&local_38,local_28,param_4,param_5);
  xor_buf(local_28,(long)param_3 + local_48,param_2 - local_48);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

