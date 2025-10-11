
undefined4 afalg_chk_platform(void)

{
  int iVar1;
  char *__nptr;
  longlong lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  int iStack_1c8;
  undefined8 local_1c4;
  int local_1bc;
  utsname local_1b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1bc = -1;
  local_1c4 = 0xffffffffffffffff;
  iVar1 = uname(&local_1b8);
  if (iVar1 == 0) {
    __nptr = strtok(local_1b8.release,".");
    uVar7 = 0;
    if (__nptr == (char *)0x0) {
      iVar6 = -1;
      iVar1 = -1;
      uVar3 = 0xffffffff;
    }
    else {
      lVar5 = 1;
      do {
        lVar2 = strtoll(__nptr,(char **)0x0,10);
        (&iStack_1c8)[lVar5] = (int)lVar2;
        __nptr = strtok((char *)0x0,".");
        iVar1 = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (iVar1 < 3 && __nptr != (char *)0x0);
      uVar3 = local_1c4 & 0xffffffff;
      iVar4 = 0xff;
      if (local_1bc < 0x100) {
        iVar4 = local_1bc;
      }
      iVar1 = local_1c4._4_4_;
      iVar6 = local_1bc;
      if (0x400ff < (int)local_1c4 * 0x10000 + local_1c4._4_4_ * 0x100 + iVar4) {
        iVar1 = socket(0x26,5,0);
        if (iVar1 == -1) {
          ERR_AFALG_error_constprop_0(0x6d,0x35b);
        }
        else {
          close(iVar1);
          uVar7 = 1;
        }
        goto LAB_0043678c;
      }
    }
    __fprintf_chk(stderr,1,"ALG_ERR: ASYNC AFALG not supported this kernel(%d.%d.%d)\n",uVar3,iVar1,
                  iVar6);
    __fprintf_chk(stderr,1,"ALG_ERR: ASYNC AFALG requires kernel version %d.%d.%d or later\n",4,1,0)
    ;
    ERR_AFALG_error_constprop_0(0x6b,0x353);
  }
  else {
    uVar7 = 0;
    ERR_AFALG_error_constprop_0(0x6f,0x342);
  }
LAB_0043678c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

