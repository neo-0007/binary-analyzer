
void FUN_007ac010(void)

{
  int iVar1;
  long in_FS_OFFSET;
  
  iVar1 = FUN_00771200(1,0x80002,0);
  if (iVar1 < 0) {
    iVar1 = FUN_00771200(2,0x80002,0);
    if (iVar1 < 0) {
      iVar1 = FUN_00771200(10,0x80002,0);
      if (iVar1 < 0) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
      }
    }
  }
  return;
}

