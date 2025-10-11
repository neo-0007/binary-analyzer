
undefined1  [16] FUN_006943f0(long param_1,ulong param_2,int param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  
  uVar5 = *(uint *)(param_1 + 0x40) & 8;
  bVar7 = (param_4 & uVar5) != 0;
  bVar2 = (byte)((*(uint *)(param_1 + 0x40) & param_4) >> 4);
  bVar6 = bVar7 & bVar2 & param_3 != 1;
  bVar2 = ((byte)(param_4 >> 3) ^ 1) & 1 & bVar2;
  bVar3 = ((byte)(param_4 >> 4) ^ 1) & bVar7;
  if (bVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (((lVar1 != 0) || (param_2 == 0)) && (bVar2 != 0 || bVar6 != 0)) goto LAB_00694472;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    if ((lVar1 != 0) || (param_2 == 0)) {
LAB_00694472:
      uVar4 = *(ulong *)(param_1 + 0x28);
      if ((uVar4 != 0) &&
         ((*(ulong *)(param_1 + 0x18) == 0 || (*(ulong *)(param_1 + 0x18) < uVar4)))) {
        if (uVar5 == 0) {
          *(ulong *)(param_1 + 8) = uVar4;
          *(ulong *)(param_1 + 0x10) = uVar4;
        }
        *(ulong *)(param_1 + 0x18) = uVar4;
      }
      if (param_3 == 1) {
        uVar4 = (uVar4 - lVar1) + param_2;
        param_2 = param_2 + (*(long *)(param_1 + 0x10) - lVar1);
      }
      else {
        uVar4 = param_2;
        if (param_3 == 2) {
          uVar4 = param_2 + (*(long *)(param_1 + 0x18) - lVar1);
          param_2 = uVar4;
        }
      }
      if (((bVar3 == 0 && bVar6 == 0) || ((long)param_2 < 0)) ||
         (*(long *)(param_1 + 0x18) - lVar1 < (long)param_2)) {
        param_2 = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2;
      }
      if (((-1 < (long)uVar4) && (bVar2 != 0 || bVar6 != 0)) &&
         ((long)uVar4 <= *(long *)(param_1 + 0x18) - lVar1)) {
        FUN_006943b0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),uVar4);
        param_2 = uVar4;
      }
      goto LAB_00694459;
    }
  }
  param_2 = 0xffffffffffffffff;
LAB_00694459:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  return auVar8;
}

