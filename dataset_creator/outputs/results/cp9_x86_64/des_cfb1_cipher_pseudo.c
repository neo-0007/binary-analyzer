
undefined8 des_cfb1_cipher(long param_1,ulong param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  int enc;
  DES_key_schedule *schedule;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long lStack_80;
  ulong local_78;
  long local_70;
  ulong local_58;
  ulong local_50;
  uchar local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3b == 0) {
    local_50 = param_4;
    if (param_4 == 0) goto LAB_0052262f;
  }
  else {
    local_50 = 0x800000000000000;
  }
  local_78 = param_2;
  local_70 = param_3;
  local_58 = param_4;
  do {
    if (local_50 << 3 != 0) {
      uVar4 = 0;
      lStack_80 = param_3;
      do {
        uVar5 = uVar4 >> 3;
        local_42 = (uchar)(((int)(uint)*(byte *)(local_70 + uVar5) >> (~(byte)uVar4 & 7)) << 7);
        enc = EVP_CIPHER_CTX_is_encrypting(param_1,param_2,lStack_80);
        lStack_80 = 0x5225a4;
        schedule = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        DES_cfb_encrypt(&local_42,&local_41,1,1,schedule,(DES_cblock *)(param_1 + 0x28),enc);
        bVar2 = (byte)uVar4 & 7;
        uVar4 = uVar4 + 1;
        pbVar1 = (byte *)(local_78 + uVar5);
        uVar3 = (int)(local_41 & 0x80) >> bVar2;
        param_2 = (ulong)uVar3;
        *pbVar1 = ~(byte)(0x80 >> bVar2) & *pbVar1 | (byte)uVar3;
        param_3 = 0x5225a4;
      } while (uVar4 != local_50 << 3);
    }
    local_58 = local_58 - local_50;
    local_70 = local_70 + local_50;
    local_78 = local_78 + local_50;
    if (local_58 < local_50) {
      local_50 = local_58;
    }
  } while (local_58 != 0);
LAB_0052262f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

