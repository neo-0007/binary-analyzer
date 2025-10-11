
undefined8 FUN_005a3520(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  iVar3 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
  iVar5 = param_2;
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0x28) & 5) == 0)) || (param_2 < 1)) {
    if (iVar3 <= param_2) goto LAB_005a3602;
  }
  else {
    if (iVar3 <= param_2) {
LAB_005a3602:
      if (iVar3 != param_2) {
        return 3;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0) {
        return 3;
      }
      lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
      FUN_0051f000();
      pcVar2 = *(code **)(param_1 + 0x78);
      uVar7 = FUN_0059e6d0(lVar6);
      lVar8 = (*pcVar2)(param_1,uVar7);
      FUN_0051f050();
      if (lVar8 == 0) {
        return 0xffffffff;
      }
      iVar5 = 0;
      do {
        iVar3 = FUN_00436480(lVar8);
        if (iVar3 <= iVar5) {
LAB_005a3771:
          FUN_00436430(lVar8,FUN_005b0200);
          return 3;
        }
        lVar9 = FUN_004364a0(lVar8,iVar5);
        iVar3 = FUN_0059e700(lVar9,lVar6);
        if (iVar3 == 0) {
          if (lVar9 != 0) {
            iVar5 = FUN_005a1b20(lVar9);
            if (iVar5 == 0) {
              FUN_00436430(lVar8,FUN_005b0200);
              return 0xffffffff;
            }
            FUN_00436430(lVar8,FUN_005b0200);
            iVar5 = FUN_00614630(lVar9,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
            if (iVar5 != 2) {
              FUN_004364d0(*(undefined8 *)(param_1 + 0x98),0,lVar9);
              FUN_005b0200(lVar6);
              *(undefined4 *)(param_1 + 0x94) = 0;
              goto LAB_005a35ae;
            }
            FUN_005b0200(lVar9);
            iVar5 = 0;
            goto LAB_005a3635;
          }
          goto LAB_005a3771;
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    uVar7 = FUN_005a3240(param_1,param_2);
    if ((int)uVar7 != 3) {
      return uVar7;
    }
  }
  do {
    lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar5);
    iVar4 = FUN_00614630(lVar6,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
    if (iVar4 == 1) goto LAB_005a35ae;
    if (iVar4 == 2) {
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0xac);
      }
      else {
LAB_005a3635:
        *(int *)(param_1 + 0xac) = iVar5;
      }
      if (lVar6 == 0) {
        lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar5);
      }
      *(long *)(param_1 + 0xb8) = lVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0x1c;
      iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar5 != 0) {
        return 3;
      }
      return 2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar3);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0) {
    return 3;
  }
LAB_005a35ae:
  if ((lVar1 != 0) && (iVar5 = FUN_00436480(*(undefined8 *)(lVar1 + 8)), 0 < iVar5)) {
    if (*(int *)(lVar1 + 0x30) < 0) {
      *(int *)(lVar1 + 0x30) = param_2;
    }
    if (*(int *)(lVar1 + 0x2c) < 0) {
      return 3;
    }
  }
  return 1;
}

