
undefined8 FUN_007831e0(long param_1,ulong *param_2,long param_3,char param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((ulong)(param_1 - param_3) < *param_2) {
    lVar4 = (param_1 - param_3) + 1;
    if (param_2[lVar4 * 2 + 1] != 0) {
      param_2[lVar4 * 2] = DAT_00945840 + 1;
      param_2[lVar4 * 2 + 1] = 0;
    }
    if (DAT_00945888 != param_1) {
      DAT_00945880 = 1;
      return 1;
    }
  }
  else if (param_2[1] == 0) {
    if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("! should_be_there","dl-close.c",0x3c,"remove_slotinfo");
    }
  }
  else {
    uVar1 = FUN_007831e0(param_1,param_2[1],*param_2 + param_3,param_4);
    if ((char)uVar1 != '\0') {
      return uVar1;
    }
    param_1 = *param_2 + param_3;
  }
  uVar3 = DAT_00945870 + 1;
  if (param_3 != 0) {
    uVar3 = 0;
  }
  uVar2 = param_1 - param_3;
  do {
    if (uVar2 <= uVar3) {
      return 0;
    }
    lVar4 = param_3 + -1 + uVar2;
    uVar2 = uVar2 - 1;
  } while (param_2[uVar2 * 2 + 3] == 0);
  DAT_00945888 = lVar4;
  return 1;
}

