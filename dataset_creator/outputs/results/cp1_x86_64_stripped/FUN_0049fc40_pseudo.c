
void FUN_0049fc40(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined1 local_11;
  long local_10;
  
  lVar3 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = &local_11;
  do {
    puVar2 = puVar1;
    *puVar2 = (char)param_2;
    lVar3 = lVar3 + -1;
    param_2 = param_2 >> 8;
    puVar1 = puVar2 + -1;
  } while (param_2 != 0);
  local_20 = param_1;
  FUN_0049f1e0(puVar2,8 - lVar3,param_3,&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

