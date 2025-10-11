
void core_vset_error(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((int)uVar2 < 0) {
    ERR_vset_error(2,uVar2 & 0x7fffffff);
    return;
  }
  uVar1 = (param_2 & 0xffffffff) >> 0x17;
  if ((uVar1 & 0xff) != 0) {
    ERR_vset_error((uint)uVar1 & 0xff,uVar2 & 0x7fffff);
    return;
  }
  ERR_vset_error(*(undefined4 *)(param_1 + 0x60));
  return;
}

