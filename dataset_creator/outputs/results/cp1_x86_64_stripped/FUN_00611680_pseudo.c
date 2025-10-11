
undefined8 FUN_00611680(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = param_3;
  FUN_0059d280("Require Explicit Policy",*param_2,local_20);
  FUN_0059d280("Inhibit Policy Mapping",param_2[1],local_20);
  return local_20[0];
}

