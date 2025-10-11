
void FUN_00638140(long *param_1)

{
  if ((undefined1 *)*param_1 == &DAT_009452b8) {
    return;
  }
  if (*(int *)((undefined1 *)*param_1 + -8) < 1) {
    *(undefined4 *)(*param_1 + -8) = 0xffffffff;
    return;
  }
  FUN_00637f00(param_1,0,0,0);
  *(undefined4 *)(*param_1 + -8) = 0xffffffff;
  return;
}

