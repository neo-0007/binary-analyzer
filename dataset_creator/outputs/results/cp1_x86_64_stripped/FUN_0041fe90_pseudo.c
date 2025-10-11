
bool FUN_0041fe90(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = FUN_00417730(*(undefined8 *)(param_1 + 0x50),1,&DAT_008de180);
  if (lVar6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    return false;
  }
  iVar2 = FUN_004222a0(*(undefined8 *)(lVar6 + 0x20));
  if (iVar2 != 0) {
    bVar1 = *(byte *)(lVar6 + 0x48);
    FUN_004222e0(*(undefined8 *)(lVar6 + 0x20));
    if ((bVar1 >> 1 & 1) != 0) {
      return true;
    }
    iVar2 = FUN_004222a0(*(undefined8 *)(param_1 + 0xb8));
    if (iVar2 != 0) {
      FUN_0041ad60(*(undefined8 *)(param_1 + 0xa8),"../crypto/provider_core.c",0x4b2);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      FUN_004222e0(*(undefined8 *)(param_1 + 0xb8));
      iVar2 = FUN_00408cb0(param_1);
      iVar3 = FUN_00518050(param_1);
      iVar4 = FUN_00515740(param_1);
      iVar5 = FUN_00437020(param_1);
      return iVar2 + iVar3 + iVar4 + iVar5 == 4;
    }
  }
  return false;
}

