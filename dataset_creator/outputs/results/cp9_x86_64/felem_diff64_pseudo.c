
void felem_diff64(long *param_1,long *param_2)

{
  *param_1 = (*param_1 - *param_2) + 0x3fffffffffffffe0;
  param_1[1] = (param_1[1] - param_2[1]) + 0x3ffffffffffffff0;
  param_1[2] = (param_1[2] + 0x3ffffffffffffff0) - param_2[2];
  param_1[3] = (param_1[3] + 0x3ffffffffffffff0) - param_2[3];
  param_1[4] = (param_1[4] + 0x3ffffffffffffff0) - param_2[4];
  param_1[5] = (param_1[5] + 0x3ffffffffffffff0) - param_2[5];
  param_1[6] = (param_1[6] + 0x3ffffffffffffff0) - param_2[6];
  param_1[7] = (param_1[7] + 0x3ffffffffffffff0) - param_2[7];
  param_1[8] = (param_1[8] + 0x3ffffffffffffff0) - param_2[8];
  return;
}

