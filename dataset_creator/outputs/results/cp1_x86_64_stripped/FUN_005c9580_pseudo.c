
void FUN_005c9580(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  if (param_1[1] != 0) {
    return;
  }
  uVar1 = param_1[2];
  iVar2 = FUN_00436480(uVar1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      lVar3 = FUN_004364a0(uVar1,iVar2);
      FUN_0041ad60(*(undefined8 *)(lVar3 + 0x10),"../crypto/conf/conf_api.c",0xb0);
      FUN_0041ad60(*(undefined8 *)(lVar3 + 8),"../crypto/conf/conf_api.c",0xb1);
      FUN_0041ad60(lVar3,"../crypto/conf/conf_api.c",0xb2);
      bVar4 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar4);
  }
  FUN_004360b0(uVar1);
  FUN_0041ad60(*param_1,"../crypto/conf/conf_api.c",0xb5);
  FUN_0041ad60(param_1,"../crypto/conf/conf_api.c",0xb6);
  return;
}

