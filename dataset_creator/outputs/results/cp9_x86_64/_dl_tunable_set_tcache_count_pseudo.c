
void _dl_tunable_set_tcache_count(ulong *param_1)

{
  if (0xffff < *param_1) {
    return;
  }
  DAT_00931158 = *param_1;
  return;
}

