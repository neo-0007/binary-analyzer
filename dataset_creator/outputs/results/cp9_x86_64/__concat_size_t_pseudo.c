
/* WARNING: Removing unreachable block (ram,0x0068f60f) */
/* __gnu_cxx::__concat_size_t(char*, unsigned long, unsigned long) */

ulong __gnu_cxx::__concat_size_t(char *param_1,ulong param_2,ulong param_3)

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
    *puVar2 = (&DAT_00816bd1)[param_3 % 10];
    bVar1 = 9 < param_3;
    param_3 = param_3 / 10;
  } while (bVar1);
  uVar3 = (long)local_38 - (long)puVar2;
  if (param_2 < uVar3) {
    uVar3 = 0xffffffff;
  }
  else {
    memcpy(param_1,local_38 + -uVar3,uVar3);
    uVar3 = uVar3 & 0xffffffff;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

