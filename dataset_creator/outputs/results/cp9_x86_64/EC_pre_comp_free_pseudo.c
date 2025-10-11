
void EC_pre_comp_free(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x98)) {
  case 1:
    EC_nistp224_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  case 2:
    EC_nistp256_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  case 3:
    EC_nistp521_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  case 4:
    EC_nistz256_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  case 5:
    EC_ec_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}

