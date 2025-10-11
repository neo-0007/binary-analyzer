
undefined8 FUN_00712950(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_007a0550();
  if (lVar1 != 0) {
    uVar2 = FUN_006e27f0(&DAT_0083ed80,lVar1,5);
    return uVar2;
  }
  uVar2 = FUN_006e27f0(&DAT_0083ed80,"Unknown error ",5);
  FUN_00795560(param_2,param_3,&DAT_0082ac0f,uVar2,param_1);
  return param_2;
}

