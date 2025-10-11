
void FUN_005aa540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x80) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  uVar3 = FUN_005b0050();
  FUN_005b61c0(uVar3,param_1 + 0x20,param_1 + 0x88,param_1 + 0x98,param_1,0,param_2,param_3,uVar2,
               uVar1);
  return;
}

