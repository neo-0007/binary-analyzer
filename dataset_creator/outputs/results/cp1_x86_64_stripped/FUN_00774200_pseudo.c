
void FUN_00774200(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN_007104f0(puVar3);
    puVar3 = puVar2;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  return;
}

