
int FUN_004eb050(long param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_004ee2d0();
    if (lVar2 != 0) {
      lVar2 = FUN_004ef7e0(lVar2);
      if (lVar2 != 0) {
        local_28 = lVar2;
        local_20 = lVar2;
        iVar1 = FUN_004eae50(&local_28,0);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        goto LAB_004eb09e;
      }
    }
    iVar1 = 0;
  }
LAB_004eb09e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

