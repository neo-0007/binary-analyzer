
void FUN_004bc420(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar2 = param_3 * 2;
  puVar6 = param_1 + 1;
  iVar1 = param_3 + -1;
  param_1[(long)iVar2 + -1] = 0;
  *param_1 = 0;
  puVar7 = param_2;
  if (0 < iVar1) {
    puVar7 = param_2 + 1;
    puVar5 = puVar6 + iVar1;
    uVar3 = FUN_005c0e80(puVar6,puVar7,iVar1,*param_2);
    puVar6 = param_1 + 3;
    *puVar5 = uVar3;
  }
  iVar4 = param_3 + -2;
  if (0 < iVar4) {
    puVar5 = puVar6 + (long)iVar1 + -1;
    do {
      uVar3 = FUN_005c0d70(puVar6,puVar7 + 1,iVar4,*puVar7);
      *puVar5 = uVar3;
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  FUN_005c1040(param_1,param_1,param_1,iVar2);
  FUN_005c0f70(param_4,param_2,param_3);
  FUN_005c1040(param_1,param_1,param_4,iVar2);
  return;
}

