
ulong FUN_0059c620(undefined8 param_1,char *param_2,ulong param_3,uint param_4,int param_5,
                  undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  code *local_68;
  undefined4 local_54;
  int local_3c;
  
  uVar10 = param_4 & 0xffff7fff;
  if (param_5 == 1) {
    local_54 = 0x16;
    local_68 = FUN_0059cd60;
    local_3c = 0x30;
LAB_0059c67a:
    if (param_3 == 0) {
      param_3 = thunk_FUN_007129d0(param_2);
    }
    lVar4 = FUN_0059f590(param_1,0x55,0,0);
    if (lVar4 != 0) goto LAB_0059c6a9;
  }
  else {
    local_54 = 4;
    local_68 = FUN_0059ccc0;
    local_3c = 0;
    if (param_5 != 2) goto LAB_0059c67a;
    if (param_3 < 2) {
      local_68 = FUN_0059bd60;
      local_54 = 0x16;
      if ((param_4 & 2) == 0) {
        local_68 = FUN_0059c120;
      }
      local_3c = 0xd;
      goto LAB_0059c67a;
    }
    if (*param_2 == '.') {
      uVar10 = uVar10 | 0x8000;
    }
    if ((uVar10 & 2) == 0) {
      lVar4 = FUN_0059f590(param_1,0x55,0,0);
      local_68 = FUN_0059c120;
    }
    else {
      lVar4 = FUN_0059f590(param_1,0x55,0,0);
      local_68 = FUN_0059bd60;
    }
    local_54 = 0x16;
    local_3c = 0xd;
    if (lVar4 == 0) goto LAB_0059c7c4;
LAB_0059c6a9:
    bVar1 = false;
    for (iVar9 = 0; iVar3 = FUN_00436480(lVar4), iVar9 < iVar3; iVar9 = iVar9 + 1) {
      piVar5 = (int *)FUN_004364a0(lVar4,iVar9);
      iVar3 = *piVar5;
      if (iVar3 == 2) {
        if (param_5 == 2) {
LAB_0059c6c3:
          uVar6 = *(undefined8 *)(piVar5 + 2);
LAB_0059c6c7:
          uVar7 = param_6;
          uVar2 = FUN_0059c450(uVar6,local_54,local_68,uVar10,param_2,param_3);
          if (uVar2 != 0) {
            FUN_0060e7a0(lVar4,uVar7);
            return (ulong)uVar2;
          }
          bVar1 = true;
        }
      }
      else if (iVar3 < 3) {
        if (iVar3 == 0) {
          iVar3 = FUN_00423da0(**(undefined8 **)(piVar5 + 2));
          if (((iVar3 == 0x4b8) && (param_5 == 1)) && (**(int **)(*(long *)(piVar5 + 2) + 8) == 0xc)
             ) {
            local_54 = 0;
            uVar6 = *(undefined8 *)(*(int **)(*(long *)(piVar5 + 2) + 8) + 2);
            goto LAB_0059c6c7;
          }
        }
        else if ((iVar3 == 1) && (param_5 == 1)) goto LAB_0059c6c3;
      }
      else if ((iVar3 == 7) && (param_5 == 7)) goto LAB_0059c6c3;
    }
    FUN_0060e7a0(lVar4);
    if ((bVar1) && ((uVar10 & 1) == 0)) {
      return 0;
    }
  }
  if (local_3c == 0) {
    return 0;
  }
LAB_0059c7c4:
  if ((uVar10 & 0x20) == 0) {
    uVar6 = FUN_0059e6d0(param_1);
    iVar9 = -1;
    while (iVar9 = FUN_005a9a30(uVar6,local_3c,iVar9), -1 < iVar9) {
      uVar7 = FUN_005a9a70(uVar6,iVar9);
      uVar7 = FUN_005aa210(uVar7);
      uVar8 = FUN_0059c450(uVar7,0xffffffff,local_68,uVar10,param_2,param_3,param_6);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
  }
  return 0;
}

