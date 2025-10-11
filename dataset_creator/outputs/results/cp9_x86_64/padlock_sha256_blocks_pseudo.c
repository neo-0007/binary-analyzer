
undefined8 padlock_sha256_blocks(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_88 [136];
  
  xsha256(param_3,param_2,(int)local_88);
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = param_1[3];
  return CONCAT44(0xffffffff,param_3);
}

