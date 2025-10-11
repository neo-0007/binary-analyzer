
void FUN_005151b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 5);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_0041ad60(param_1[2],"../crypto/encode_decode/decoder_meth.c",0x3d);
  FUN_004273f0(param_1[4]);
  FUN_00420d40(*param_1);
  FUN_00422300(param_1[6]);
  FUN_0041ad60(param_1,"../crypto/encode_decode/decoder_meth.c",0x41);
  return;
}

