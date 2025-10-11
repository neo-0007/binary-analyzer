
void FUN_00709520(long param_1)

{
  long in_FS_OFFSET;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(in_FS_OFFSET + 0x2f8);
  *(uint *)(param_1 + 0x10) = (uint)*(byte *)(in_FS_OFFSET + 0x972);
  *(undefined1 *)(in_FS_OFFSET + 0x972) = 0;
  *(long *)(in_FS_OFFSET + 0x2f8) = param_1;
  return;
}

