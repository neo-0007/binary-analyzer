
void FUN_005aa490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = FUN_005afbc0();
  FUN_005b92c0(uVar3,param_1 + 0x38,uVar2,param_1,uVar1,param_2,param_3,param_4);
  return;
}

