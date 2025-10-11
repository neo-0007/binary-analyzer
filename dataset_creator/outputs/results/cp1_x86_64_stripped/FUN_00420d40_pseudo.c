
void FUN_00420d40(byte *param_1)

{
  byte *pbVar1;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  LOCK();
  pbVar1 = param_1 + 0x10;
  *(int *)pbVar1 = *(int *)pbVar1 + -1;
  UNLOCK();
  if (*(int *)pbVar1 != 0) {
    if ((param_1[200] & 1) == 0) {
      return;
    }
    FUN_0041f1e0(param_1,0);
    return;
  }
  if ((*param_1 & 1) != 0) {
    FUN_00420d10();
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_0051dcc0(*(undefined4 *)(param_1 + 0x60));
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x68),"../crypto/provider_core.c",0x2b6);
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
    }
    FUN_0041ad60(*(undefined8 *)(param_1 + 0xa8),"../crypto/provider_core.c",699);
    *param_1 = *param_1 & 0xfe;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
  }
  FUN_0041ad50(param_1);
  FUN_004daaa0(*(undefined8 *)(param_1 + 0x38));
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),"../crypto/provider_core.c",0x2ca);
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x30),"../crypto/provider_core.c",0x2cb);
  FUN_00436430(*(undefined8 *)(param_1 + 0x48),FUN_0041f280);
  FUN_00422300(*(undefined8 *)(param_1 + 0xb8));
  FUN_00422300(*(undefined8 *)(param_1 + 8));
  FUN_0041ad60(param_1,"../crypto/provider_core.c",0x2d2);
  return;
}

