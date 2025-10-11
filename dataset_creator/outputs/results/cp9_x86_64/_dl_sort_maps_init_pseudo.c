
void _dl_sort_maps_init(void)

{
  int local_c [3];
  
  __tunable_get_val(0xc,local_c,0);
  _dl_dso_sort_algo = (uint)(local_c[0] != 1);
  return;
}

