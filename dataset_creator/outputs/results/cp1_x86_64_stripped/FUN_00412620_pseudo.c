
long FUN_00412620(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_118 [66];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = DAT_0093f9f8;
  if (DAT_0093f9f8 != 0) {
    local_118[0] = param_1;
    iVar1 = FUN_00435f40(DAT_0093f9f8,local_118);
    lVar2 = 0;
    if (-1 < iVar1) {
      lVar2 = FUN_004364a0(DAT_0093f9f8);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

