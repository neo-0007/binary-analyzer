
undefined8
FUN_0062d290(long param_1,undefined8 param_2,short *param_3,short *param_4,undefined8 *param_5,
            uint *param_6,uint *param_7,undefined8 *param_8)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  short *psVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  short *local_58;
  short *local_50;
  long local_40;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  local_58 = param_3;
  if (((((*(byte *)(param_1 + 0x20) & 4) != 0) && (2 < (ulong)((long)param_4 - (long)param_3))) &&
      (*param_3 == -0x4411)) && ((char)param_3[1] == -0x41)) {
    local_58 = (short *)((long)param_3 + 3);
  }
  local_50 = param_4;
  while (puVar4 = param_6, param_4 != local_58) {
    while( true ) {
      psVar5 = local_58;
      if (param_7 == puVar4) {
        uVar3 = 0;
        goto LAB_0062d34d;
      }
      auVar6 = FUN_0062c540(&local_58,uVar1,uVar3);
      uVar3 = auVar6._8_8_;
      uVar2 = auVar6._0_4_;
      if (uVar2 == 0xfffffffe) {
        uVar3 = 1;
        psVar5 = local_58;
        goto LAB_0062d34d;
      }
      if (uVar1 < (auVar6._0_8_ & 0xffffffff)) {
        uVar3 = 2;
        psVar5 = local_58;
        goto LAB_0062d34d;
      }
      if (uVar2 < 0x10000) break;
      if ((ulong)((long)param_7 - (long)puVar4) < 5) {
        uVar3 = 1;
        goto LAB_0062d34d;
      }
      param_6 = puVar4 + 2;
      puVar4[1] = (uint)(ushort)((auVar6._0_2_ & 0x3ff) + 0xdc00);
      *puVar4 = (uint)(ushort)((short)(auVar6._0_8_ >> 10) + 0xd7c0);
      puVar4 = param_6;
      if (param_4 == local_58) goto LAB_0062d3b2;
    }
    *puVar4 = uVar2;
    param_6 = puVar4 + 1;
  }
LAB_0062d3b2:
  uVar3 = 0;
  puVar4 = param_6;
  psVar5 = local_58;
LAB_0062d34d:
  *param_5 = psVar5;
  *param_8 = puVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

