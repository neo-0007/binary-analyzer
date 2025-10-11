
int FUN_00691f60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  iVar3 = 100;
  while( true ) {
    iVar1 = rdrand();
    bVar4 = (bool)rdrandIsValid();
    iVar2 = iVar1;
    if (bVar4) {
      iVar2 = 1;
    }
    if (iVar2 != 0) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403a6e("random_device: rdrand failed");
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

