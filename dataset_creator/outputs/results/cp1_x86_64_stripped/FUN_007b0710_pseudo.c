
uint * FUN_007b0710(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  
  puVar2 = (uint *)FUN_006fda20(param_1,"rce");
  puVar3 = puVar2;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 | 0x8000;
    iVar1 = FUN_00702a90(puVar2,0,0);
    if (iVar1 < 0) {
      puVar3 = (uint *)0x0;
      FUN_006fd190(puVar2);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1d;
    }
  }
  return puVar3;
}

