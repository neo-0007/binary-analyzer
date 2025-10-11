
undefined8 FUN_0059b9e0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0059afc0();
  if (iVar1 != 0) {
    if (param_2 == -1) {
      return 1;
    }
    iVar1 = FUN_0059a9b0(param_2);
    if (iVar1 != -1) {
      lVar2 = FUN_0059a910(iVar1);
                    /* WARNING: Could not recover jumptable at 0x0059ba27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}

