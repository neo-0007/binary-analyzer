
undefined4 * FUN_0063df30(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 < param_3) {
    do {
      puVar2 = param_2 + 1;
      uVar1 = FUN_007719b0(*param_2,*(undefined8 *)(param_1 + 0x10));
      *param_2 = uVar1;
      param_2 = puVar2;
    } while (puVar2 < param_3);
  }
  return param_3;
}

