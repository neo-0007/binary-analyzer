
void FUN_004227b0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xf) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    for (; ((ulong)param_1 & 7) != 0; param_1 = (undefined8 *)((long)param_1 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
    }
    do {
      *param_1 = 0;
      param_2 = param_2 - 8;
      param_1 = param_1 + 1;
    } while ((param_2 & 0xfffffffffffffff8) != 0);
    if (param_2 == 0) {
      return;
    }
  }
  do {
    *(undefined1 *)param_1 = 0;
    param_2 = param_2 - 1;
    param_1 = (undefined8 *)((long)param_1 + 1);
  } while (param_2 != 0);
  return;
}

