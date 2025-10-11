
undefined8 FUN_00417a20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0041ad90(0x10,"../crypto/context.c",0x1e7);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b8);
    *puVar2 = param_2;
    puVar2[1] = uVar1;
    *(undefined8 **)(param_1 + 0x1b8) = puVar2;
    return 1;
  }
  return 0;
}

