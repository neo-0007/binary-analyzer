
void do_num2name(long param_1,long *param_2)

{
  if (*param_2 != 0) {
    *param_2 = *param_2 + -1;
    return;
  }
  if (param_2[1] != 0) {
    return;
  }
  param_2[1] = param_1;
  return;
}

