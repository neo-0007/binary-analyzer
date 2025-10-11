
undefined8 FUN_00568d00(undefined8 param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00423da0(*param_2);
  if (iVar1 == 0x390) {
    uVar2 = FUN_0042b160(param_2);
    iVar1 = FUN_00568970(param_1,0,uVar2,param_4);
    FUN_0056a4a0(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_004ab870(param_1,&DAT_008243ea);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_00598950(param_1,param_3,param_4);
    return uVar2;
  }
  return 1;
}

