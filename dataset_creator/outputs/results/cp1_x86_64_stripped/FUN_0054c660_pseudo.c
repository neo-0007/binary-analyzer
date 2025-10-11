
void FUN_0054c660(undefined1 (*param_1) [16],char param_2,char param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[2] + 8) = param_5;
  (*param_1)[0] = param_2 * '\x04' - 8U & 0x38 | param_3 - 1U & 7;
  *(undefined8 *)param_1[3] = param_4;
  return;
}

