
void * __minimal_calloc(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  void *pvVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  if ((((param_1 | param_2) >> 0x20 != 0) && (param_2 != 0)) && (SUB168(auVar1 * auVar2,8) != 0)) {
    return (void *)0x0;
  }
  pvVar3 = malloc(SUB168(auVar1 * auVar2,0));
  return pvVar3;
}

