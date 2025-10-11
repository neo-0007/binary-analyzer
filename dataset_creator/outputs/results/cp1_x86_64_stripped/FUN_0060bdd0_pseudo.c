
undefined8 FUN_0060bdd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = param_3;
  FUN_0059ce90("CA",*param_2,local_20);
  FUN_0059d280("pathlen",*(undefined8 *)(param_2 + 2),local_20);
  return local_20[0];
}

