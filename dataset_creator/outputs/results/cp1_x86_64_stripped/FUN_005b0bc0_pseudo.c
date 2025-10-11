
undefined4 * FUN_005b0bc0(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x150);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar1 = *(undefined4 **)(puVar1 + 4), puVar1 != (undefined4 *)0x0)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    puVar1 = *(undefined4 **)(puVar1 + 2);
  }
  return puVar1;
}

