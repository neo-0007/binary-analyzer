
void FUN_00483cd0(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 4;
    *puVar1 = (char)((uint)*param_1 >> 0x18);
    puVar1[1] = (char)((uint)*param_1 >> 0x10);
    puVar1[2] = (char)((uint)*param_1 >> 8);
    puVar1[3] = (char)*param_1;
    puVar1 = puVar2;
    param_1 = param_1 + 1;
  } while (param_2 + 0x20 != puVar2);
  return;
}

