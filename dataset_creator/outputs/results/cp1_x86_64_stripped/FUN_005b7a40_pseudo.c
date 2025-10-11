
undefined4 * FUN_005b7a40(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_3 == -1) {
    param_3 = (99 < param_2[5] - 0x32) + 0x17;
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_005b7a63;
  }
  else if (param_3 != 0x18) {
LAB_005b7a63:
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    param_1 = (undefined4 *)0x0;
    goto LAB_005b7a6a;
  }
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_004a21f0();
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar1 = FUN_004a1fa0(param_1,0,0x14);
    if (iVar1 == 0) {
LAB_005b7a6a:
      FUN_004a2270(param_1);
      return (undefined4 *)0x0;
    }
  }
  else {
    iVar1 = FUN_004a1fa0(param_1,0,0x14);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
  }
  iVar1 = param_2[4];
  param_1[1] = param_3;
  if (param_3 == 0x18) {
    iVar3 = param_2[5] + 0x76c;
    pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
  }
  else {
    pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
    iVar3 = (int)param_2[5] % 100;
  }
  uVar2 = FUN_004aeb30(*(undefined8 *)(param_1 + 2),0x14,pcVar4,iVar3,iVar1 + 1,param_2[3],
                       param_2[2],param_2[1],*param_2);
  *param_1 = uVar2;
  return param_1;
}

