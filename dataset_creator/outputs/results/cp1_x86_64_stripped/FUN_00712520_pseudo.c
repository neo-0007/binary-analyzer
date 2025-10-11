
undefined8 FUN_00712520(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  uVar1 = param_1[1];
  lVar3 = *param_1;
  uVar2 = uVar1 * 2;
  if ((long *)lVar3 == param_1 + 2) {
    lVar5 = FUN_007101b0(uVar2);
    if (lVar5 == 0) {
      return 0;
    }
    lVar3 = thunk_FUN_00713a50(lVar5,lVar3,uVar1);
LAB_0071255c:
    *param_1 = lVar3;
    uVar4 = 1;
    param_1[1] = uVar2;
  }
  else {
    if (uVar2 < uVar1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    }
    else {
      lVar3 = FUN_00710840(lVar3,uVar2);
      if (lVar3 != 0) goto LAB_0071255c;
      lVar3 = *param_1;
    }
    FUN_007104f0(lVar3);
    *param_1 = (long)(param_1 + 2);
    uVar4 = 0;
    param_1[1] = 0x400;
  }
  return uVar4;
}

