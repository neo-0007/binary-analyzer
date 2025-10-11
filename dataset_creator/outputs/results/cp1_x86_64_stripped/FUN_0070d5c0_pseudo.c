
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070d5c0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_38 [2];
  uint local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  DAT_0094a9a8 = 1;
  lVar1 = FUN_00791d20(&DAT_0094a998,8,1);
  if (lVar1 != 8) {
    FUN_00767f90(1,local_38);
    uVar4 = local_38[0] ^ local_30;
    uVar4 = uVar4 ^ (uVar4 >> 8 | uVar4 << 0x18);
    DAT_0094a998 = (ulong)uVar4;
    FUN_00767f90(1,local_38);
    local_38[0] = local_38[0] ^ local_30;
    DAT_0094a998 = CONCAT44(uVar4,local_38[0] ^ (local_38[0] >> 8 | local_38[0] << 0x18));
  }
  *(undefined4 **)(in_FS_OFFSET + -0x20) = &DAT_0093e160;
  puVar2 = &DAT_0093e1c0;
  do {
    puVar3 = puVar2 + 2;
    *puVar3 = puVar2;
    puVar2[3] = puVar2;
    puVar2 = puVar3;
  } while (puVar3 != (undefined8 *)&DAT_0093e9b0);
  DAT_0094a9c0 = 0x80;
  _DAT_0093e168 = 0;
  DAT_0093e1c0 = &DAT_0093e1c0;
  FUN_0078d220(0xe,local_38,FUN_0070bfe0);
  FUN_0078d220(3,local_38,FUN_0070c040);
  FUN_0078d220(0x1b,local_38,FUN_0070c000);
  FUN_0078d220(2,local_38,&LAB_0070bfc0);
  FUN_0078d220(0x14,local_38,FUN_0070c020);
  FUN_0078d220(0x1a,local_38,FUN_0070bd40);
  FUN_0078d220(0x1e,local_38,FUN_0070bd50);
  FUN_0078d220(0x21,local_38,FUN_0070bd60);
  FUN_0078d220(0x1d,local_38,FUN_0070bda0);
  FUN_0078d220(0x16,local_38,FUN_0070bdc0);
  FUN_0078d220(0xb,local_38,FUN_0070bf30);
  FUN_0078d220(9,local_38,&DAT_0070c0f0);
  if (DAT_0093e0f0 != 0) {
    DAT_0094a9c8 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

