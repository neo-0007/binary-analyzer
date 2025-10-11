
/* WARNING: Removing unreachable block (ram,0x00764ebc) */
/* WARNING: Removing unreachable block (ram,0x00764f00) */
/* WARNING: Removing unreachable block (ram,0x00764f0a) */
/* WARNING: Removing unreachable block (ram,0x00764f15) */
/* WARNING: Removing unreachable block (ram,0x00764f2b) */
/* WARNING: Removing unreachable block (ram,0x00764ec6) */
/* WARNING: Removing unreachable block (ram,0x00764f35) */
/* WARNING: Removing unreachable block (ram,0x00764f42) */
/* WARNING: Removing unreachable block (ram,0x00764f47) */
/* WARNING: Removing unreachable block (ram,0x00764f4f) */
/* WARNING: Removing unreachable block (ram,0x00764f60) */
/* WARNING: Removing unreachable block (ram,0x00764f80) */
/* WARNING: Removing unreachable block (ram,0x00764e99) */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  ulong local_78;
  undefined8 uStack_70;
  cc_t local_68;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined2 local_57;
  cc_t local_55;
  undefined1 local_48 [40];
  long local_20;
  
  lVar2 = 0x5401;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)local_48;
  syscall();
  if ((uint)__optional_actions < 3) {
    uStack_70._0_4_ = __termios_p->c_cflag;
    uStack_70._4_4_ = __termios_p->c_lflag;
    local_78._0_4_ = __termios_p->c_iflag;
    local_78._4_4_ = __termios_p->c_oflag;
    lVar2 = (long)(__optional_actions + 0x5402);
    local_67 = *(undefined8 *)__termios_p->c_cc;
    uStack_5f = *(undefined8 *)(__termios_p->c_cc + 8);
    local_57 = *(undefined2 *)(__termios_p->c_cc + 0x10);
    local_68 = __termios_p->c_line;
    local_78 = local_78 & 0xffffffff7fffffff;
    local_55 = __termios_p->c_cc[0x12];
    syscall();
    iVar3 = 0x10;
    puVar1 = &local_78;
  }
  else {
    iVar3 = -1;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(__fd,lVar2,puVar1);
}

