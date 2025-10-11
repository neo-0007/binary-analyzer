
ulong __sysconf_check_spec(char *param_1)

{
  undefined4 uVar1;
  long lVar2;
  stat64 *psVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  stat64 *psVar8;
  char *__src;
  long in_FS_OFFSET;
  stat64 local_d8;
  long local_40;
  stat64 *psVar9;
  
  __n = 0x10;
  psVar9 = &local_d8;
  psVar8 = &local_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  __s = (char *)secure_getenv("GETCONF_DIR");
  __src = "/usr/lib/getconf";
  if (__s != (char *)0x0) {
    __n = strlen(__s);
    __src = __s;
  }
  sVar5 = strlen(param_1);
  uVar6 = __n + 0x1a + sVar5;
  psVar3 = &local_d8;
  while (psVar9 != (stat64 *)((long)&local_d8 - (uVar6 & 0xfffffffffffff000))) {
    psVar8 = (stat64 *)((long)psVar3 + -0x1000);
    *(undefined8 *)((long)psVar3 + -8) = *(undefined8 *)((long)psVar3 + -8);
    psVar9 = (stat64 *)((long)psVar3 + -0x1000);
    psVar3 = (stat64 *)((long)psVar3 + -0x1000);
  }
  uVar6 = (ulong)((uint)uVar6 & 0xff0);
  lVar2 = -uVar6;
  if (uVar6 != 0) {
    *(undefined8 *)((long)psVar8 + -8) = *(undefined8 *)((long)psVar8 + -8);
  }
  *(undefined8 *)((long)psVar8 + lVar2 + -8) = 0x75f333;
  puVar7 = (undefined8 *)mempcpy((undefined1 *)((long)psVar8 + lVar2),__src,__n);
  *puVar7 = 0x565f5849534f502f;
  *(undefined2 *)(puVar7 + 1) = 0x5f36;
  *(undefined8 *)((long)psVar8 + lVar2 + -8) = 0x75f359;
  memcpy((void *)((long)puVar7 + 10),param_1,sVar5 + 1);
  *(undefined8 *)((long)psVar8 + lVar2 + -8) = 0x75f368;
  iVar4 = stat64((char *)((long)psVar8 + lVar2),&local_d8);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)psVar8 + lVar2 + -8) = sysconf;
    __stack_chk_fail_local();
  }
  return (long)iVar4 >> 0x3f | 1;
}

