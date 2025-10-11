
undefined8 FUN_0041f590(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  iVar1 = FUN_00424700(param_2);
  iVar2 = FUN_00424700(param_4);
  if ((((param_3 == (char *)0x0) || (*param_3 == '\0')) ||
      (iVar4 = FUN_00424700(param_3), iVar4 != 0)) && (iVar1 != 0)) {
    iVar3 = FUN_00424c50(iVar1,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    if (iVar2 != 0) {
      uVar5 = FUN_00424dd0(iVar1,iVar4,iVar2);
      return uVar5;
    }
  }
  return 0;
}

