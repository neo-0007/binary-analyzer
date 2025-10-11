
bool FUN_00542570(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  
  iVar1 = FUN_005bc920(param_1,"prime P:",*param_2,0,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005bc920(param_1,"generator G:",param_2[2],0,param_3);
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2[1] != 0) &&
     (iVar1 = FUN_005bc920(param_1,"subgroup order Q:",param_2[1],0,param_3), iVar1 == 0)) {
    return false;
  }
  if ((param_2[3] != 0) &&
     (iVar1 = FUN_005bc920(param_1,"subgroup factor:",param_2[3],0,param_3), iVar1 == 0)) {
    return false;
  }
  if (param_2[4] != 0) {
    iVar1 = FUN_004abce0(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_004ab870(param_1,"seed:");
    if (iVar1 < 1) {
      return false;
    }
    uVar4 = 0;
    while (uVar2 = param_2[5], uVar4 < uVar2) {
      if (uVar4 * -0x1111111111111111 < 0x1111111111111112) {
        iVar1 = FUN_004ab870(param_1,&DAT_008243ea);
        if (iVar1 < 1) {
          return false;
        }
        iVar1 = FUN_004abce0(param_1,param_3 + 4,0x80);
        if (iVar1 == 0) {
          return false;
        }
        uVar2 = param_2[5];
      }
      pcVar3 = ":";
      if (uVar4 + 1 == uVar2) {
        pcVar3 = "";
      }
      iVar1 = FUN_004ae9e0(param_1,"%02x%s",*(undefined1 *)(param_2[4] + uVar4),pcVar3);
      uVar4 = uVar4 + 1;
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (*(int *)(param_2 + 6) == -1) {
    return true;
  }
  iVar1 = FUN_004abce0(param_1,param_3,0x80);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_004ae9e0(param_1,"counter: %d\n",*(undefined4 *)(param_2 + 6));
  return 0 < iVar1;
}

