
void CRYPTO_cfb128_1_encrypt
               (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar2 = (byte)uVar4;
      bVar3 = ~bVar2 & 7;
      local_42 = (undefined1)(((int)(uint)*(byte *)(param_1 + (uVar4 >> 3)) >> bVar3) << 7);
      cfbr_encrypt_block(&local_42,&local_41,1,param_4,param_5,param_7,param_8);
      pbVar1 = (byte *)(param_2 + (uVar4 >> 3));
      uVar4 = uVar4 + 1;
      *pbVar1 = ~(byte)(1 << bVar3) & *pbVar1 | (byte)((int)(local_41 & 0x80) >> (bVar2 & 7));
    } while (param_3 != uVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

