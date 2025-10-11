
void FUN_004bad20(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  FUN_005c0e80(param_1,param_2,param_4,*param_3);
  if (1 < param_4) {
    uVar5 = param_4 - 2;
    uVar2 = uVar5 & 0xfffffffc;
    iVar4 = param_4;
    while (FUN_005c0d70(param_1 + 8,param_2,iVar4 + -1,param_3[1]), uVar5 != 0) {
      FUN_005c0d70(param_1 + 0x10,param_2,uVar5,param_3[2]);
      if (iVar4 + -3 == 0) {
        return;
      }
      FUN_005c0d70(param_1 + 0x18,param_2,iVar4 + -3,param_3[3]);
      iVar3 = iVar4 + -4;
      if (iVar3 == 0) {
        return;
      }
      puVar1 = param_3 + 4;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + 4;
      FUN_005c0d70(param_1,param_2,iVar3,*puVar1);
      if (iVar3 == (param_4 + -4) - uVar2) {
        return;
      }
      uVar5 = iVar4 - 6;
      iVar4 = iVar3;
    }
  }
  return;
}

