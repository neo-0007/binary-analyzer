
void FUN_005aa640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = FUN_005afbc0();
  FUN_005b61c0(uVar4,param_1 + 0x38,0,uVar3,param_1,0,param_2,param_3,uVar2,uVar1);
  return;
}

