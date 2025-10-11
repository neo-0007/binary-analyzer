
undefined1  [16] FUN_00698b20(long param_1,ulong param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  
  uVar4 = *(uint *)(param_1 + 0x40) & 8;
  bVar7 = (param_4 & uVar4) != 0;
  bVar1 = (byte)((*(uint *)(param_1 + 0x40) & param_4) >> 4);
  bVar6 = bVar7 & bVar1 & param_3 != 1;
  bVar1 = ((byte)(param_4 >> 3) ^ 1) & 1 & bVar1;
  bVar2 = ((byte)(param_4 >> 4) ^ 1) & bVar7;
  if (bVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (((lVar5 != 0) || (param_2 == 0)) && (bVar1 != 0 || bVar6 != 0)) goto LAB_00698ba2;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) || (param_2 == 0)) {
LAB_00698ba2:
      uVar3 = *(ulong *)(param_1 + 0x28);
      if ((uVar3 != 0) &&
         ((*(ulong *)(param_1 + 0x18) == 0 || (*(ulong *)(param_1 + 0x18) < uVar3)))) {
        if (uVar4 == 0) {
          *(ulong *)(param_1 + 8) = uVar3;
          *(ulong *)(param_1 + 0x10) = uVar3;
        }
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      if (param_3 == 1) {
        uVar3 = ((long)(uVar3 - lVar5) >> 2) + param_2;
        param_2 = param_2 + (*(long *)(param_1 + 0x10) - lVar5 >> 2);
      }
      else {
        uVar3 = param_2;
        if (param_3 == 2) {
          uVar3 = param_2 + (*(long *)(param_1 + 0x18) - lVar5 >> 2);
          param_2 = uVar3;
        }
      }
      if (((bVar2 == 0 && bVar6 == 0) || ((long)param_2 < 0)) ||
         (*(long *)(param_1 + 0x18) - lVar5 >> 2 < (long)param_2)) {
        param_2 = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2 * 4;
      }
      if (((-1 < (long)uVar3) && (bVar1 != 0 || bVar6 != 0)) &&
         ((long)uVar3 <= *(long *)(param_1 + 0x18) - lVar5 >> 2)) {
        FUN_00698ae0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),uVar3);
        param_2 = uVar3;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_2;
      return auVar8;
    }
  }
  return ZEXT816(0xffffffffffffffff);
}

