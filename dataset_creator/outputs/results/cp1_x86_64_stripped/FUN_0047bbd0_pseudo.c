
bool FUN_0047bbd0(int *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_a8;
  long local_a0;
  uint local_90;
  long local_80;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != -1) {
    iVar1 = FUN_0076d7f0(*param_1,&local_a8);
    if ((((iVar1 != -1) && (*(long *)(param_1 + 2) == local_a8)) &&
        (*(long *)(param_1 + 4) == local_a0)) && (((param_1[6] ^ local_90) & 0xfffffe00) == 0)) {
      bVar2 = *(long *)(param_1 + 8) == local_80;
      goto LAB_0047bbf7;
    }
  }
  bVar2 = false;
LAB_0047bbf7:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

