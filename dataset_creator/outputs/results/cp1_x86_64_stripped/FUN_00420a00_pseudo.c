
bool FUN_00420a00(long param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_3 != 0) && ((*(byte *)(param_1 + 200) & 1) == 0)) {
    return true;
  }
  iVar2 = FUN_0041f700(param_1,1,param_2);
  if (0 < iVar2) {
    if (iVar2 != 1) {
      return true;
    }
    lVar6 = FUN_00417730(*(undefined8 *)(param_1 + 0x50),1,&DAT_008de180);
    if (lVar6 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
      FUN_0051f8f0(0xf,0xc0103,0);
    }
    else {
      iVar2 = FUN_004222a0(*(undefined8 *)(lVar6 + 0x20));
      if (iVar2 != 0) {
        bVar1 = *(byte *)(lVar6 + 0x48);
        FUN_004222e0(*(undefined8 *)(lVar6 + 0x20));
        if ((bVar1 >> 1 & 1) == 0) {
          iVar2 = FUN_00408c70(*(undefined8 *)(param_1 + 0x50));
          iVar3 = FUN_00518010(*(undefined8 *)(param_1 + 0x50));
          iVar4 = FUN_00515700(*(undefined8 *)(param_1 + 0x50));
          iVar5 = FUN_00436fe0(*(undefined8 *)(param_1 + 0x50));
          return iVar2 + iVar3 + iVar4 + iVar5 == 4;
        }
        return true;
      }
    }
  }
  return false;
}

