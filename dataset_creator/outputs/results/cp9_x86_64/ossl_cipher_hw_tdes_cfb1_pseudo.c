
undefined8 ossl_cipher_hw_tdes_cfb1(long param_1,long param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uchar local_42;
  byte local_41;
  long local_40;
  
  bVar3 = *(byte *)(param_1 + 0x3c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_4 * 8;
  if ((bVar3 & 0x40) != 0) {
    uVar2 = param_4;
  }
  if (uVar2 != 0) {
    uVar4 = 0;
    while( true ) {
      uVar5 = uVar4 >> 3;
      local_42 = (uchar)(((int)(uint)*(byte *)(param_3 + uVar5) >> (~(byte)uVar4 & 7)) << 7);
      DES_ede3_cfb_encrypt
                (&local_42,&local_41,1,1,(DES_key_schedule *)(param_1 + 0xc0),
                 (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
                 (DES_cblock *)(param_1 + 0x94),bVar3 >> 1 & 1);
      bVar3 = (byte)uVar4 & 7;
      uVar4 = uVar4 + 1;
      pbVar1 = (byte *)(param_2 + uVar5);
      *pbVar1 = ~(byte)(0x80 >> bVar3) & *pbVar1 | (byte)((int)(local_41 & 0x80) >> bVar3);
      if (uVar2 == uVar4) break;
      bVar3 = *(byte *)(param_1 + 0x3c);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

