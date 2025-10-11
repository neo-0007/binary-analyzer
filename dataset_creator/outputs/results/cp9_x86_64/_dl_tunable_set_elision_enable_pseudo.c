
void _dl_tunable_set_elision_enable(int *param_1)

{
  if (*param_1 != 1) {
    return;
  }
  __pthread_force_elision = DAT_0093df08 >> 0xb & 1;
  return;
}

