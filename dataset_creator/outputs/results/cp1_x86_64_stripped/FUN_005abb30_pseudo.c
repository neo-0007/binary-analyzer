
void FUN_005abb30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = FUN_005abad0();
  FUN_005b92c0(uVar3,param_1 + 0x58,param_1 + 0x68,param_1,0,param_2,uVar2,uVar1);
  return;
}

