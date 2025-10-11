
void FUN_004a17a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  puVar6 = param_1;
  for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[1] = uVar1;
  *param_1 = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

