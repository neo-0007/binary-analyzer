
long FUN_00422e80(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  uint local_48 [2];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar1 = FUN_00422c80();
    if (iVar1 != 0) {
      iVar1 = FUN_004222a0(DAT_0093fd20);
      if (iVar1 != 0) {
        local_48[0] = param_2 & 0xffff7fff;
        iVar1 = 0xb;
        local_40 = param_1;
        while( true ) {
          lVar2 = FUN_00545b60(DAT_0093fd28,local_48);
          if (lVar2 == 0) break;
          if ((*(int *)(lVar2 + 4) == 0) || ((param_2 & 0x8000) != 0)) {
            lVar2 = *(long *)(lVar2 + 0x10);
            break;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) {
            lVar2 = 0;
            break;
          }
          local_40 = *(long *)(lVar2 + 0x10);
        }
        FUN_004222e0(DAT_0093fd20);
        goto LAB_00422f33;
      }
    }
  }
  lVar2 = 0;
LAB_00422f33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

