
void FUN_0049eb50(long param_1,ulong param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(param_1 + 4) = param_3;
  iVar2 = 8;
  puVar1 = &local_11;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    do {
      puVar3 = puVar1;
      *puVar3 = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = puVar3 + -1;
    } while (param_2 != 0);
    *(uint *)(param_1 + 4) = param_3 | 0x100;
  }
  else {
    do {
      puVar3 = puVar1;
      *puVar3 = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = puVar3 + -1;
    } while (param_2 != 0);
  }
  FUN_004a1fa0(param_1,puVar3,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

