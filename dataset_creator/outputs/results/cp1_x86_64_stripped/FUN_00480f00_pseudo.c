
undefined8 FUN_00480f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    iVar1 = FUN_0043b840();
    if ((iVar1 != 0) && (param_1 != 0)) {
      uVar2 = FUN_0047fd70(param_1,param_2,param_3,0x40);
      return uVar2;
    }
  }
  return 0;
}

