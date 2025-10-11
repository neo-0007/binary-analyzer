
ulong ossl_a2ucompare(undefined8 param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_230;
  char local_228 [520];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_230 = 0x201;
  iVar1 = ossl_a2ulabel(param_1,local_228,&local_230);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    iVar1 = strcmp(local_228,param_2);
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

