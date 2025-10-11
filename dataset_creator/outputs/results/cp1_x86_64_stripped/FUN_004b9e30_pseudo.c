
void FUN_004b9e30(long param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = param_4;
  iVar3 = param_5;
  if (param_3 < param_5) {
    puVar4 = param_2;
    param_2 = param_4;
    iVar3 = param_3;
    param_3 = param_5;
  }
  if (iVar3 < 1) {
    FUN_005c0e80(param_1,param_2,param_3,0);
    return;
  }
  puVar5 = (undefined8 *)(param_1 + (long)param_3 * 8);
  uVar2 = FUN_005c0e80(param_1,param_2,param_3,*puVar4);
  *puVar5 = uVar2;
  while( true ) {
    if (iVar3 == 1) {
      return;
    }
    uVar2 = FUN_005c0d70(param_1 + 8,param_2,param_3,puVar4[1]);
    puVar5[1] = uVar2;
    if (iVar3 == 2) {
      return;
    }
    uVar2 = FUN_005c0d70(param_1 + 0x10,param_2,param_3,puVar4[2]);
    puVar5[2] = uVar2;
    if (iVar3 == 3) {
      return;
    }
    uVar2 = FUN_005c0d70(param_1 + 0x18,param_2,param_3,puVar4[3]);
    puVar5[3] = uVar2;
    iVar3 = iVar3 + -4;
    if (iVar3 == 0) break;
    puVar1 = puVar4 + 4;
    param_1 = param_1 + 0x20;
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 4;
    uVar2 = FUN_005c0d70(param_1,param_2,param_3,*puVar1);
    *puVar5 = uVar2;
  }
  return;
}

