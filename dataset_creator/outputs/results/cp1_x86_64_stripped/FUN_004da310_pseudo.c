
undefined8 FUN_004da310(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041ad90(0x20,"../crypto/dsa/dsa_pmeth.c",0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0xe000000800;
    puVar1[3] = 0;
    *(undefined8 **)(param_1 + 0x98) = puVar1;
    *(undefined8 **)(param_1 + 0x68) = puVar1 + 2;
    *(undefined4 *)(param_1 + 0x70) = 2;
    return 1;
  }
  return 0;
}

