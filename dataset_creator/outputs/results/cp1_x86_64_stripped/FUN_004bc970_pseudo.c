
ulong FUN_004bc970(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 != 0) {
    uVar8 = 0;
    if ((int)param_1[1] == 0) {
      return 0;
    }
    iVar1 = FUN_004b75b0(param_2);
    iVar2 = FUN_004bc220(param_1,param_1,0x40 - iVar1);
    if (iVar2 != 0) {
      iVar2 = (int)param_1[1];
      uVar7 = iVar2 - 1;
      if (-1 < (int)uVar7) {
        lVar5 = *param_1;
        bVar4 = (byte)(0x40 - iVar1);
        param_2 = param_2 << (bVar4 & 0x3f);
        lVar6 = (long)(int)uVar7 << 3;
        uVar8 = 0;
        do {
          lVar5 = *(long *)(lVar5 + lVar6);
          lVar3 = FUN_005c1020(uVar8,lVar5,param_2);
          uVar8 = lVar5 - param_2 * lVar3;
          lVar5 = *param_1;
          *(long *)(lVar5 + lVar6) = lVar3;
          lVar6 = lVar6 + -8;
        } while (((long)iVar2 - (ulong)uVar7) * 8 + -0x10 != lVar6);
        iVar2 = (int)param_1[1];
        uVar8 = uVar8 >> (bVar4 & 0x3f);
      }
      if (0 < iVar2) {
        if (*(long *)(*param_1 + -8 + (long)iVar2 * 8) != 0) {
          return uVar8;
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
      }
      if (iVar2 != 0) {
        return uVar8;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      return uVar8;
    }
  }
  return 0xffffffffffffffff;
}

