
void new_exp_constprop_0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_1;
  }
  return;
}

