
undefined8 * FUN_007789b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  puVar1 = (undefined8 *)FUN_007101b0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    uVar2 = FUN_007af830(param_1);
    puVar1[2] = 1;
    puVar1[1] = uVar2;
    puVar1[4] = *(undefined8 *)(in_FS_OFFSET + -0x10);
    *(undefined8 **)(in_FS_OFFSET + -0x10) = puVar1;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  return puVar1;
}

