
undefined4 FUN_00692fe0(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((*(byte *)(param_1 + 0x40) & 8) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if ((puVar1 != (undefined4 *)0x0) && ((puVar2 == (undefined4 *)0x0 || (puVar2 < puVar1)))) {
      *(undefined4 **)(param_1 + 0x18) = puVar1;
      puVar2 = puVar1;
    }
    if (*(undefined4 **)(param_1 + 0x10) < puVar2) {
      return **(undefined4 **)(param_1 + 0x10);
    }
  }
  return 0xffffffff;
}

