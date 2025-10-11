
int FUN_005b3c50(int *param_1,long *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar9 = *param_1;
  lVar5 = (long)iVar9;
  if (iVar9 < 1) {
    iVar9 = iVar9 + 1;
    if (param_2 == (long *)0x0) {
      return iVar9;
    }
    puVar2 = (undefined1 *)*param_2;
    *puVar2 = 0;
    pbVar8 = puVar2 + 1;
  }
  else {
    if ((*(ulong *)(param_1 + 4) & 8) == 0) {
      do {
        bVar1 = *(byte *)(*(long *)(param_1 + 2) + -1 + lVar5);
        iVar4 = (int)lVar5;
        if (bVar1 != 0) {
          iVar9 = iVar4 + 1;
          goto LAB_005b3d09;
        }
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      bVar1 = *(byte *)(*(long *)(param_1 + 2) + -1);
      iVar9 = 1;
      iVar4 = 0;
LAB_005b3d09:
      bVar6 = 0;
      if (((((bVar1 & 1) == 0) && (bVar6 = 1, (bVar1 & 2) == 0)) && (bVar6 = 2, (bVar1 & 4) == 0))
         && (((bVar6 = 3, (bVar1 & 8) == 0 && (bVar6 = 4, (bVar1 & 0x10) == 0)) &&
             ((bVar6 = 5, (bVar1 & 0x20) == 0 && (bVar6 = 6, (bVar1 & 0x40) == 0)))))) {
        bVar6 = (char)bVar1 >> 0x1f & 7;
      }
      if (param_2 == (long *)0x0) {
        return iVar9;
      }
      pbVar8 = (byte *)*param_2;
      *pbVar8 = bVar6;
      pbVar8 = pbVar8 + 1;
      if (iVar4 == 0) goto LAB_005b3ccc;
      uVar7 = *(undefined8 *)(param_1 + 2);
    }
    else {
      bVar6 = (byte)*(ulong *)(param_1 + 4) & 7;
      iVar9 = iVar9 + 1;
      if (param_2 == (long *)0x0) {
        return iVar9;
      }
      pbVar8 = (byte *)*param_2;
      *pbVar8 = bVar6;
      uVar7 = *(undefined8 *)(param_1 + 2);
      pbVar8 = pbVar8 + 1;
    }
    lVar3 = thunk_FUN_00713a50(pbVar8,uVar7,lVar5);
    pbVar8 = (byte *)(lVar3 + lVar5);
    pbVar8[-1] = pbVar8[-1] & (byte)(0xff << bVar6);
  }
LAB_005b3ccc:
  *param_2 = (long)pbVar8;
  return iVar9;
}

