
void call_dl_init(undefined8 *param_1)

{
  _dl_init(*param_1,*(undefined4 *)(param_1 + 1),param_1[2],param_1[3]);
  return;
}

