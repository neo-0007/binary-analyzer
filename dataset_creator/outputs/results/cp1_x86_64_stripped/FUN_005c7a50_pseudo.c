
void FUN_005c7a50(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)(param_1 + param_3 * 8);
  iVar3 = 8;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

