
undefined8 FUN_005aa400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_004a89c0(param_1 + 0x88,param_1 + 0x20);
  uVar5 = 0;
  if (iVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x178);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    uVar4 = FUN_005b0050();
    uVar5 = FUN_005b92c0(uVar4,param_1 + 0x88,param_1 + 0x98,param_1,uVar2,param_2,uVar1,uVar5);
  }
  return uVar5;
}

