
undefined8 FUN_004d8230(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004d8140(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    uVar2 = FUN_00544be0();
    return uVar2;
  }
  uVar2 = FUN_00544ac0(*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,param_3);
  return uVar2;
}

