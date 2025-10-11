
void FUN_0041fd90(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  lVar2 = FUN_00417730(*(undefined8 *)(param_1 + 0x50),1,&DAT_008de180);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    return;
  }
  iVar1 = FUN_004222c0(*(undefined8 *)(lVar2 + 0x20));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00436480(*(undefined8 *)(lVar2 + 0x10));
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      plVar3 = (long *)FUN_004364a0(*(undefined8 *)(lVar2 + 0x10),iVar4);
      if (*plVar3 == param_1) {
        FUN_00435ec0(*(undefined8 *)(lVar2 + 0x10),iVar4);
        FUN_0041ad60(plVar3,"../crypto/provider_core.c",0x704);
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar1);
  }
  FUN_004222e0(*(undefined8 *)(lVar2 + 0x20));
  return;
}

