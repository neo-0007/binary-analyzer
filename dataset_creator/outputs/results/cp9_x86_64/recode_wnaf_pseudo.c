
int recode_wnaf(long param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar5 = (ulong)*param_2;
  uVar9 = 1 << ((byte)(param_3 + 1U) & 0x1f);
  iVar10 = 0;
  uVar6 = 1;
  iVar2 = (int)(0x1be / (ulong)(param_3 + 1U));
  iVar3 = iVar2 + 1;
  *(undefined8 *)(param_1 + (ulong)(iVar2 + 2) * 8) = 0xffffffff;
  do {
    while (uVar6 < 0x1c) {
      uVar5 = uVar5 + (uint)((int)(*(ulong *)(param_2 + (ulong)(uVar6 >> 2) * 4) >>
                                  (sbyte)((uVar6 & 3) << 4)) << 0x10);
      if ((short)uVar5 == 0) {
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 >> 0x10;
        iVar10 = iVar10 + 0x10;
      }
      else {
LAB_004cf0a4:
        lVar7 = (long)(iVar3 + -1);
        do {
          iVar1 = 0;
          for (uVar4 = (uint)uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar1 = iVar1 + 1;
          }
          uVar8 = (uint)uVar5 >> ((byte)iVar1 & 0x1f);
          uVar4 = uVar8 & uVar9 - 1;
          if ((uVar8 & uVar9) != 0) {
            uVar4 = uVar4 - uVar9;
          }
          *(uint *)(param_1 + 0xc + lVar7 * 8) = uVar4;
          iVar3 = (int)lVar7;
          *(int *)(param_1 + 8 + lVar7 * 8) = iVar1 + iVar10;
          lVar7 = lVar7 + -1;
          uVar5 = uVar5 - (long)(int)(uVar4 << ((byte)iVar1 & 0x1f));
        } while ((short)uVar5 != 0);
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 >> 0x10;
        iVar10 = iVar10 + 0x10;
        if (uVar6 == 0x1e) goto LAB_004cf102;
      }
    }
    if ((short)uVar5 != 0) goto LAB_004cf0a4;
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 >> 0x10;
    iVar10 = iVar10 + 0x10;
  } while (uVar6 != 0x1e);
LAB_004cf102:
  uVar5 = 0;
  uVar6 = (iVar2 + 3) - (iVar3 + 1);
  if (uVar6 != 0) {
    do {
      *(undefined8 *)(param_1 + uVar5 * 8) =
           *(undefined8 *)(param_1 + (ulong)(uint)(iVar3 + 1 + (int)uVar5) * 8);
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  return uVar6 - 1;
}

