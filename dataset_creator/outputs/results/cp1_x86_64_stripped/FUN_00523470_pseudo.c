
undefined8 FUN_00523470(int param_1,undefined8 param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_00521cc0();
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 0) {
      return 0;
    }
    uVar2 = 2;
    if (*(int *)(param_3 + 0x1c) == -2) {
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
      *(long *)(param_3 + 0x20) = param_3 + 0x40;
      uVar2 = 1;
    }
    *(undefined4 *)(param_3 + 8) = uVar2;
    uVar3 = FUN_00521cc0(1,param_2);
    if ((int)uVar3 < 1) {
      return uVar3;
    }
    if (*(int *)(param_3 + 8) != 2) {
LAB_005234d1:
      uVar3 = FUN_00521e40(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_00521cc0(param_1,param_2);
    if ((int)uVar3 < 1) {
      return uVar3;
    }
    if (param_1 != 8) {
LAB_00523515:
      uVar3 = FUN_00521e40(param_1,param_2,param_3);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      if (param_1 == 2) {
        if (*(int *)(param_3 + 8) != 1) {
          return uVar3;
        }
      }
      else {
        if (param_1 != 7) {
          return uVar3;
        }
        if (*(int *)(param_3 + 8) != 2) {
          if (*(int *)(param_3 + 8) != 1) {
            return uVar3;
          }
          *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
          return uVar3;
        }
      }
      *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
      lVar4 = *(long *)(param_4 + 2);
      do {
        if (lVar4 == 0) {
          uVar3 = 0xffffffff;
LAB_0052357b:
          *(undefined8 *)(param_3 + 0x20) = 0;
          return uVar3;
        }
        iVar1 = FUN_0041c9c0(*(undefined8 *)(param_3 + 0x20));
        if (iVar1 == 0) {
          *(int *)(param_3 + 0x1c) = *param_4;
          uVar3 = 1;
          goto LAB_0052357b;
        }
        lVar4 = *(long *)(param_4 + 6);
        param_4 = param_4 + 4;
      } while( true );
    }
    if (*(int *)(param_3 + 8) != 1) goto LAB_005234d1;
  }
  lVar4 = *(long *)(param_4 + 2);
  if (lVar4 != 0) {
    do {
      if (*(int *)(param_3 + 0x1c) == *param_4) {
        *(long *)(param_3 + 0x20) = lVar4;
        uVar2 = thunk_FUN_007129d0();
        *(undefined4 *)(param_3 + 0x1c) = uVar2;
        goto LAB_00523515;
      }
      lVar4 = *(long *)(param_4 + 6);
      param_4 = param_4 + 4;
    } while (lVar4 != 0);
  }
  return 0xfffffffe;
}

