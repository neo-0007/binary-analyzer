
byte FUN_004219a0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    return 0;
  }
  iVar2 = FUN_004215d0(lVar3);
  if (((iVar2 != 0) && (pbVar4 = (byte *)FUN_00420f10(param_1,param_2,0), pbVar4 != (byte *)0x0)) &&
     (iVar2 = FUN_004222a0(*(undefined8 *)(pbVar4 + 8)), iVar2 != 0)) {
    bVar1 = *pbVar4;
    FUN_004222e0(*(undefined8 *)(pbVar4 + 8));
    FUN_00420d40(pbVar4);
    return bVar1 >> 1 & 1;
  }
  return 0;
}

