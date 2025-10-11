
undefined8 FUN_0054a4e0(int *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar6 = 1;
  uVar3 = param_2;
  do {
    uVar3 = uVar3 >> 0xc;
    if (uVar3 == 0) break;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 6);
  if (*param_1 < iVar6) {
    do {
      puVar4 = (undefined8 *)FUN_0041aec0(0x8000,"../crypto/sparse_array.c",0xb3);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      iVar5 = *param_1;
      *puVar4 = *(undefined8 *)(param_1 + 6);
      *(undefined8 **)(param_1 + 6) = puVar4;
      *param_1 = iVar5 + 1;
    } while (iVar5 + 1 < iVar6);
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 6);
    iVar5 = *param_1 + -1;
  }
  if (*(ulong *)(param_1 + 2) < param_2) {
    *(ulong *)(param_1 + 2) = param_2;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    while( true ) {
      puVar1 = puVar4 + ((uint)(param_2 >> ((char)iVar5 * '\f' & 0x3fU)) & 0xfff);
      puVar4 = (undefined8 *)*puVar1;
      if (puVar4 != (undefined8 *)0x0) break;
      puVar4 = (undefined8 *)FUN_0041aec0(0x8000,"../crypto/sparse_array.c",0xb3);
      *puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) goto LAB_0054a5e8;
    }
  }
LAB_0054a5e8:
  lVar2 = puVar4[(uint)param_2 & 0xfff];
  if (param_3 == 0) {
    if (lVar2 != 0) {
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + -1;
    }
  }
  else if (lVar2 == 0) {
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
  }
  puVar4[(uint)param_2 & 0xfff] = param_3;
  return 1;
}

