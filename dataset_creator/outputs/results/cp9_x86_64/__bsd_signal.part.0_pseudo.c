
_union_1457 __bsd_signal_part_0(int param_1,_union_1457 param_2)

{
  int iVar1;
  _union_1457 _Var2;
  long in_FS_OFFSET;
  _union_1457 local_148;
  ulong local_140;
  int local_c0;
  _union_1457 local_a8 [19];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 1L << ((char)param_1 - 1U & 0x3f);
  local_c0 = (uint)((local_140 & _sigintr._0_8_) == 0) << 0x1c;
  local_148 = param_2;
  iVar1 = sigaction(param_1,(sigaction *)&local_148,(sigaction *)local_a8);
  _Var2 = (_union_1457)0xffffffffffffffff;
  if (-1 < iVar1) {
    _Var2 = local_a8[0];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_union_1457)_Var2.sa_handler;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

