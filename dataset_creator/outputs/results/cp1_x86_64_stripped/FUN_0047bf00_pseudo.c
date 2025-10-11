
void FUN_0047bf00(void)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  uint local_a0;
  long local_90;
  long local_20;
  
  piVar2 = &DAT_00940f00;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*piVar2 != -1) {
      iVar1 = FUN_0076d7f0(*piVar2,&local_b8);
      if ((((iVar1 != -1) && (*(long *)(piVar2 + 2) == local_b8)) &&
          (*(long *)(piVar2 + 4) == local_b0)) &&
         ((((piVar2[6] ^ local_a0) & 0xfffffe00) == 0 && (*(long *)(piVar2 + 8) == local_90)))) {
        FUN_0076dc30(*piVar2);
      }
    }
    *piVar2 = -1;
    piVar2 = piVar2 + 10;
  } while (piVar2 != (int *)&DAT_00940fa0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

