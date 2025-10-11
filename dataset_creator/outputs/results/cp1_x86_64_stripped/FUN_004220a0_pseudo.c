
undefined8 * FUN_004220a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041aec0(200,"../crypto/self_test_core.c",0x67);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_1;
    puVar1[0x18] = param_2;
    *puVar1 = &DAT_0083e5c2;
    puVar1[1] = &DAT_0083e5c2;
    puVar1[2] = &DAT_0083e5c2;
    FUN_00421ef0(puVar1);
  }
  return puVar1;
}

