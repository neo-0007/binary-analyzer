
void FUN_0049f980(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  iVar3 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 4) = 2;
  puVar1 = &local_11;
  do {
    puVar2 = puVar1;
    *puVar2 = (char)param_2;
    iVar3 = iVar3 + -1;
    param_2 = param_2 >> 8;
    puVar1 = puVar2 + -1;
  } while (param_2 != 0);
  FUN_004a1fa0(param_1,puVar2,8 - iVar3);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

