
long FUN_004c4f00(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0041bc60(param_2,"../crypto/buffer/buffer.c",0x3e);
  if ((lVar1 != 0) && (param_1[1] != 0)) {
    thunk_FUN_00713a50(lVar1,param_1[1],*param_1);
    FUN_0041c0b0(param_1[1],*param_1,"../crypto/buffer/buffer.c",0x42);
    param_1[1] = 0;
  }
  return lVar1;
}

