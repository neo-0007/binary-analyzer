
undefined8 FUN_00421dd0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    return 0;
  }
  uVar3 = FUN_004222a0(*(undefined8 *)(lVar2 + 0x20));
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = FUN_00436480(*(undefined8 *)(lVar2 + 0x10));
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      lVar4 = FUN_004364a0(*(undefined8 *)(lVar2 + 0x10),iVar5);
      (**(code **)(lVar4 + 0x18))(param_2,*(undefined8 *)(lVar4 + 0x20));
      iVar5 = iVar6;
    } while (iVar6 != iVar1);
  }
  FUN_004222e0(*(undefined8 *)(lVar2 + 0x20));
  return 1;
}

