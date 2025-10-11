
/* WARNING: Removing unreachable block (ram,0x0061dbf3) */

undefined4 FUN_0061dbb0(void)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_0061da40();
  FUN_00436430(0,FUN_005aca30);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

