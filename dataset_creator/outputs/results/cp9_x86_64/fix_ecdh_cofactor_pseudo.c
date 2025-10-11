
undefined8 fix_ecdh_cofactor(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 0) {
      return 0;
    }
    uVar2 = 1;
    if (*(int *)(param_3 + 0x1c) != -2) {
      uVar2 = 2;
    }
    *(undefined4 *)(param_3 + 8) = uVar2;
    uVar1 = default_check_constprop_0(1);
    if (0 < (int)uVar1) {
      if ((*(int *)(param_3 + 8) != 2) || (*(int *)(param_3 + 0x1c) + 1U < 3)) {
        uVar1 = default_fixup_args(1,param_2,param_3);
        return uVar1;
      }
      uVar1 = 0xfffffffe;
    }
  }
  else {
    if (param_1 == 4) {
      *(undefined4 *)(param_3 + 8) = 2;
    }
    else if ((param_1 == 7) && (*(int *)(param_3 + 8) == 0)) {
      return 0;
    }
    uVar1 = default_check_constprop_0(param_1,param_2);
    if ((0 < (int)uVar1) && (uVar1 = default_fixup_args(param_1,param_2,param_3), 0 < (int)uVar1)) {
      if (param_1 == 2) {
        if ((*(int *)(param_3 + 8) == 1) && (1 < *(uint *)(param_3 + 0x1c))) {
          *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
          uVar1 = 0xffffffff;
        }
      }
      else if ((param_1 == 7) && (*(int *)(param_3 + 8) == 1)) {
        *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
      }
    }
  }
  return uVar1;
}

