
void FUN_006c9410(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  
  cVar1 = FUN_006caa40(param_2);
  if (cVar1 != '\0') {
    *param_3 = *param_3 + 0x20;
    return;
  }
  FUN_006b8910(param_1,param_2,param_3);
  return;
}

