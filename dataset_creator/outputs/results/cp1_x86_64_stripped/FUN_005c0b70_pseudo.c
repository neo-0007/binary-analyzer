
undefined8 FUN_005c0b70(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x40);
    if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar1 != (long *)0x0)) {
      lVar2 = *plVar1;
      if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      FUN_004c4ff0(lVar2);
    }
    FUN_0041ad60(plVar1[1],"../crypto/bio/bss_mem.c",0x98);
    FUN_0041ad60(plVar1,"../crypto/bio/bss_mem.c",0x99);
    return 1;
  }
  return 0;
}

