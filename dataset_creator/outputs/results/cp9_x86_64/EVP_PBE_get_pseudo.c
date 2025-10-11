
undefined8 EVP_PBE_get(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 < 0x1d) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(builtin_pbe + param_3 * 0x20);
    }
    uVar1 = 1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(builtin_pbe + param_3 * 0x20 + 4);
    }
  }
  return uVar1;
}

