
void FUN_005aa6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x50) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = FUN_005abad0();
  FUN_005b61c0(uVar3,param_1 + 8,param_1 + 0x58,param_1 + 0x68,param_1,0,param_2,param_3,uVar2,uVar1
              );
  return;
}

