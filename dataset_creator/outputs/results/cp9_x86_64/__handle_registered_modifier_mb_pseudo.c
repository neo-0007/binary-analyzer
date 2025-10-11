
bool __handle_registered_modifier_mb(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  
  pbVar2 = (byte *)*param_1;
  plVar7 = *(long **)(__printf_modifier_table + (ulong)*pbVar2 * 8);
  if (plVar7 == (long *)0x0) {
    return true;
  }
  pbVar8 = (byte *)0x0;
  iVar4 = 0;
  iVar6 = 0;
  do {
    puVar5 = (uint *)((long)plVar7 + 0xc);
    bVar1 = pbVar2[1];
    pbVar3 = pbVar2;
    while (pbVar3 = pbVar3 + 1, bVar1 != 0) {
      if (*puVar5 == 0) goto LAB_007b6432;
      if ((uint)bVar1 != *puVar5) goto LAB_007b6449;
      puVar5 = puVar5 + 1;
      bVar1 = pbVar3[1];
    }
    if (*puVar5 == 0) {
LAB_007b6432:
      if ((long)iVar4 < (long)pbVar3 - (long)pbVar2) {
        iVar6 = (int)plVar7[1];
        iVar4 = (int)((long)pbVar3 - (long)pbVar2);
        pbVar8 = pbVar3;
      }
    }
LAB_007b6449:
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      if (iVar6 != 0) {
        *(ushort *)(param_2 + 0xe) = *(ushort *)(param_2 + 0xe) | (ushort)iVar6;
        *param_1 = pbVar8;
      }
      return iVar6 == 0;
    }
  } while( true );
}

