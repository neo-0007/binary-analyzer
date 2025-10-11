
undefined1  [16] FUN_00694550(long param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(uint *)(param_1 + 0x40) & param_4;
  uVar3 = *(uint *)(param_1 + 0x40) & 8;
  param_4 = param_4 & uVar3;
  if (param_4 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (((param_2 == 0) || (lVar4 != 0)) && ((uVar1 & 0x18) != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    if ((uVar2 != 0) && ((*(ulong *)(param_1 + 0x18) == 0 || (*(ulong *)(param_1 + 0x18) < uVar2))))
    {
      if (uVar3 == 0) {
        *(ulong *)(param_1 + 8) = uVar2;
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    if ((-1 < param_2) && (param_2 <= *(long *)(param_1 + 0x18) - lVar4)) {
      if (param_4 != 0) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2;
      }
      if ((uVar1 & 0x10) != 0) {
        FUN_006943b0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),param_2
                    );
      }
      uVar2 = param_3 & 0xffffffff;
      param_3 = param_3 >> 0x20;
      goto LAB_00694590;
    }
  }
  param_3 = 0;
  uVar2 = 0;
  param_2 = -1;
LAB_00694590:
  auVar5._8_8_ = uVar2 | param_3 << 0x20;
  auVar5._0_8_ = param_2;
  return auVar5;
}

