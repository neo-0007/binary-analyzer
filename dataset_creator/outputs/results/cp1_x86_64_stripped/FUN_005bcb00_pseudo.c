
bool FUN_005bcb00(undefined8 param_1,int param_2,long param_3,long param_4,ulong *param_5)

{
  ulong uVar1;
  int iVar2;
  
  if (0x14 < param_2) {
    do {
      iVar2 = FUN_004ab7e0(param_1,"                    ",0x14);
      if (iVar2 != 0x14) {
        return false;
      }
      param_2 = param_2 + -0x14;
    } while (0x14 < param_2);
  }
  iVar2 = FUN_004ab7e0(param_1,"                    ",param_2);
  if (iVar2 != param_2) {
    return false;
  }
  uVar1 = *param_5;
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x40) == 0) {
      if (param_4 == 0 && param_3 == 0) {
        return true;
      }
      if (param_3 != 0) {
        iVar2 = FUN_004ab870(param_1,param_3);
        if (iVar2 < 1) {
          return false;
        }
        if (param_4 == 0) goto LAB_005bcb9e;
        iVar2 = FUN_004ae9e0(param_1," (%s)",param_4);
        goto joined_r0x005bcbe7;
      }
      if (param_4 == 0) goto LAB_005bcb9e;
    }
    else if (param_4 == 0) {
      return true;
    }
    iVar2 = FUN_004ab870(param_1,param_4);
  }
  else {
    if ((uVar1 & 0x40) != 0) {
      return true;
    }
    if (param_3 == 0) {
      return true;
    }
    iVar2 = FUN_004ab870(param_1,param_3);
  }
joined_r0x005bcbe7:
  if (iVar2 < 1) {
    return false;
  }
LAB_005bcb9e:
  iVar2 = FUN_004ab7e0(param_1,": ",2);
  return iVar2 == 2;
}

