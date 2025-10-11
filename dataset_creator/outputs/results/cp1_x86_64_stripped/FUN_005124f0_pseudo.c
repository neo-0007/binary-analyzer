
undefined8
FUN_005124f0(undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0040b080();
  lVar1 = FUN_00410840(*(undefined8 *)(lVar1 + 0x88));
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_meth.c",0x330,"pkey_ecd_digestsign25519");
      FUN_0051f8f0(0x10,100,0);
      return 0;
    }
    uVar2 = FUN_004e3ff0(param_2,param_4,param_5,lVar1 + 0x11,*(undefined8 *)(lVar1 + 0x50),0,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *param_3 = 0x40;
  return 1;
}

