
void FUN_004c52e0(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = param_1 + (param_3 - 1);
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 >> 1 != 0) {
      puVar3 = puVar2;
      do {
        uVar1 = *puVar3;
        puVar4 = puVar3 + -1;
        *puVar3 = *param_1;
        *param_1 = uVar1;
        puVar3 = puVar4;
        param_1 = param_1 + 1;
      } while (puVar2 + -(param_3 >> 1) != puVar4);
    }
  }
  else if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      puVar3 = puVar2 + -1;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + -1);
    return;
  }
  return;
}

