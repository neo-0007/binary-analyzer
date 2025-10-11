
ulong FUN_0059f100(uint *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_4;
  if ((param_4 & 0x30000) == 0) {
LAB_0059f1a8:
    uVar6 = 0;
    goto LAB_0059f17e;
  }
  bVar8 = param_2 == 0;
  if (bVar8) {
    param_2 = FUN_004364a0(param_3,0);
  }
  uVar7 = (uint)bVar8;
  uVar4 = FUN_0059ef80(param_2);
  if (param_3 == 0) {
    uVar6 = FUN_0059e430(uVar4,0xffffffff,&local_48);
    goto LAB_0059f17e;
  }
  lVar5 = FUN_005a1b40(param_2);
  if (lVar5 == 2) {
    uVar6 = FUN_0059e430(uVar4,0xffffffff);
    if ((int)uVar6 == 0) {
      for (; iVar2 = FUN_00436480(param_3), (int)uVar7 < iVar2; uVar7 = uVar7 + 1) {
        uVar3 = FUN_005b0880(param_2);
        param_2 = FUN_004364a0(param_3,uVar7);
        lVar5 = FUN_005a1b40(param_2);
        if (lVar5 != 2) {
          uVar6 = 0x38;
          goto LAB_0059f172;
        }
        uVar4 = FUN_0059ef80(param_2);
        uVar6 = FUN_0059e430(uVar4,uVar3,&local_48);
        if ((int)uVar6 != 0) goto LAB_0059f250;
      }
      uVar3 = FUN_005b0880(param_2);
      uVar6 = FUN_0059e430(uVar4,uVar3,&local_48);
      if ((int)uVar6 == 0) goto LAB_0059f1a8;
LAB_0059f250:
      if ((int)uVar6 - 0x3bU < 2) {
        uVar1 = (uVar7 - 1) + (uint)(uVar7 == 0);
        goto LAB_0059f264;
      }
    }
    else {
      uVar7 = 0;
      uVar1 = 0;
      if ((int)uVar6 - 0x3bU < 2) {
LAB_0059f264:
        uVar7 = uVar1;
        if ((int)uVar6 == 0x3c) {
          uVar6 = uVar6 & 0xffffffff;
          if (local_48 != param_4) {
            uVar6 = 0x3d;
          }
        }
        else {
          uVar6 = 0x3b;
        }
      }
    }
  }
  else {
    uVar7 = 0;
    uVar6 = 0x38;
  }
LAB_0059f172:
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar7;
  }
LAB_0059f17e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

