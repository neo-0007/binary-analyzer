
void bn_scatter5(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_3 + param_4 * 8);
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

