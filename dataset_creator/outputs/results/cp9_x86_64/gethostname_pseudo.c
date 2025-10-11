
int gethostname(char *__name,size_t __len)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  byte bVar9;
  utsname uStack_1b8;
  long local_30;
  
  bVar9 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = uname(&uStack_1b8);
  if (iVar1 == 0) {
    sVar2 = strlen(uStack_1b8.nodename);
    uVar4 = (uint)__len;
    uVar3 = sVar2 + 1;
    if (uVar3 <= __len) {
      uVar4 = (uint)uVar3;
    }
    if (uVar4 < 8) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 != 0) && (*__name = uStack_1b8.nodename[0], (uVar4 & 2) != 0)) {
          *(undefined2 *)(__name + ((ulong)uVar4 - 2)) =
               *(undefined2 *)(uStack_1b8.sysname + (ulong)uVar4 + 0x3f);
        }
      }
      else {
        *(undefined4 *)__name = uStack_1b8.nodename._0_4_;
        *(undefined4 *)(__name + ((ulong)uVar4 - 4)) =
             *(undefined4 *)(uStack_1b8.sysname + (ulong)uVar4 + 0x3d);
      }
    }
    else {
      *(ulong *)__name = CONCAT44(uStack_1b8.nodename._4_4_,uStack_1b8.nodename._0_4_);
      *(undefined8 *)(__name + ((ulong)uVar4 - 8)) =
           *(undefined8 *)(uStack_1b8.sysname + (ulong)uVar4 + 0x39);
      lVar6 = (long)__name - (long)((ulong)(__name + 8) & 0xfffffffffffffff8);
      pcVar7 = uStack_1b8.nodename + -lVar6;
      puVar8 = (undefined8 *)((ulong)(__name + 8) & 0xfffffffffffffff8);
      for (uVar5 = (ulong)(uVar4 + (int)lVar6 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *(undefined8 *)pcVar7;
        pcVar7 = pcVar7 + ((ulong)bVar9 * -2 + 1) * 8;
        puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
      }
    }
    iVar1 = 0;
    if (__len < uVar3) {
      iVar1 = -1;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x24;
    }
  }
  else {
    iVar1 = -1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

