
undefined8 FUN_004af4f0(uint param_1,int param_2,long param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  ulong local_d8 [19];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x400) {
    uVar2 = 1;
    if (param_3 != 0) {
      lVar3 = FUN_007607a0(0);
      uVar2 = 0;
      if (lVar3 < param_3) {
        puVar1 = local_d8 + 2;
        local_d8[0] = param_3 - lVar3;
        puVar4 = puVar1;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
        }
        lVar3 = FUN_00771f40((long)(int)param_1);
        local_d8[1] = 0;
        local_d8[lVar3 + 2] = local_d8[lVar3 + 2] | 1L << ((byte)param_1 & 0x3f);
        puVar4 = (ulong *)0x0;
        if (param_2 != 0) {
          puVar4 = puVar1;
          puVar1 = (ulong *)0x0;
        }
        uVar2 = FUN_0076ed70(param_1 + 1,puVar4,puVar1,0,local_d8);
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

