
/* WARNING: Removing unreachable block (ram,0x006927af) */

ulong FUN_00692780(undefined8 param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_38;
  do {
    puVar2 = puVar2 + -1;
    *puVar2 = (&DAT_00821d21)[param_3 % 10];
    bVar1 = 9 < param_3;
    param_3 = param_3 / 10;
  } while (bVar1);
  uVar3 = (long)local_38 - (long)puVar2;
  if (param_2 < uVar3) {
    uVar3 = 0xffffffff;
  }
  else {
    thunk_FUN_00713a50(param_1,local_38 + -uVar3,uVar3);
    uVar3 = uVar3 & 0xffffffff;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

