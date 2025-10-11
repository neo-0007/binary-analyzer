
void padlock_sha1_blocks(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_88 [136];
  
  xsha1(param_3,param_2,(int)local_88);
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 2);
  return;
}

