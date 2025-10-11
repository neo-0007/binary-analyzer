
void _dl_setup_hash(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_1[0x54] == 0) {
    if (param_1[0xc] != 0) {
      puVar5 = *(uint **)(param_1[0xc] + 8);
      if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
        puVar5 = (uint *)((long)puVar5 + *param_1);
      }
      uVar2 = *puVar5;
      *(uint *)((long)param_1 + 0x2f4) = uVar2;
      param_1[0x61] = (long)(puVar5 + 2 + uVar2);
      param_1[0x62] = (long)(puVar5 + 2);
    }
    return;
  }
  puVar5 = *(uint **)(param_1[0x54] + 8);
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
    puVar5 = (uint *)((long)puVar5 + *param_1);
  }
  uVar2 = *puVar5;
  *(uint *)((long)param_1 + 0x2f4) = uVar2;
  uVar3 = puVar5[2];
  uVar4 = puVar5[1];
  if ((uVar3 - 1 & uVar3) == 0) {
    *(uint *)(param_1 + 0x5f) = uVar3 - 1;
    puVar1 = puVar5 + 4;
    *(uint *)((long)param_1 + 0x2fc) = puVar5[3];
    param_1[0x62] = (long)(puVar1 + uVar3 * 2 + ((ulong)uVar2 - (ulong)uVar4));
    param_1[0x60] = (long)puVar1;
    param_1[0x61] = (long)(puVar1 + uVar3 * 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(bitmask_nwords & (bitmask_nwords - 1)) == 0","dl-setup_hash.c",0x24,
                "_dl_setup_hash");
}

