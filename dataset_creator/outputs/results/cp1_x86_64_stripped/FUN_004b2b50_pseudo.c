
void FUN_004b2b50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  FUN_0041ad60(param_1[4],"../crypto/bn/bn_ctx.c",0x102);
  plVar2 = (long *)*param_1;
  param_1[4] = 0;
  while (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 0x30;
    do {
      if (*plVar2 != 0) {
        FUN_004b7f20(plVar2);
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1);
    param_1[1] = *(long *)(*param_1 + 0x188);
    FUN_0041ad60(*param_1,"../crypto/bn/bn_ctx.c",0x136);
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
  }
  FUN_0041ad60(param_1,"../crypto/bn/bn_ctx.c",0xb2);
  return;
}

