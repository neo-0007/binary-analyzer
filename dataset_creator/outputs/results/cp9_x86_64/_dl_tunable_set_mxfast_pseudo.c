
void _dl_tunable_set_mxfast(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xa0 < uVar1) {
    return;
  }
  global_max_fast = 0x10;
  if (7 < uVar1) {
    global_max_fast = uVar1 + 8 & 0xfffffffffffffff0;
  }
  return;
}

