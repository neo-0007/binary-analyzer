
bool FUN_007bfdd0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  
  puVar2 = (uint *)*param_1;
  plVar8 = *(long **)(DAT_0094b488 + (ulong)*puVar2 * 8);
  if (plVar8 == (long *)0x0) {
    return true;
  }
  puVar9 = (uint *)0x0;
  iVar4 = 0;
  iVar7 = 0;
  do {
    puVar5 = (uint *)((long)plVar8 + 0xc);
    uVar1 = puVar2[1];
    puVar3 = puVar2;
    while (puVar3 = puVar3 + 1, uVar1 != 0) {
      if (*puVar5 == 0) goto LAB_007bfe41;
      if (*puVar5 != uVar1) goto LAB_007bfe5c;
      puVar5 = puVar5 + 1;
      uVar1 = puVar3[1];
    }
    if (*puVar5 == 0) {
LAB_007bfe41:
      lVar6 = (long)puVar3 - (long)puVar2 >> 2;
      if (iVar4 < lVar6) {
        iVar7 = (int)plVar8[1];
        iVar4 = (int)lVar6;
        puVar9 = puVar3;
      }
    }
LAB_007bfe5c:
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      if (iVar7 != 0) {
        *(ushort *)(param_2 + 0xe) = *(ushort *)(param_2 + 0xe) | (ushort)iVar7;
        *param_1 = puVar9;
      }
      return iVar7 == 0;
    }
  } while( true );
}

