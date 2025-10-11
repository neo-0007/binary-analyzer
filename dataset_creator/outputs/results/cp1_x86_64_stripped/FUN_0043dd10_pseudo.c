
ulong FUN_0043dd10(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_0043c7e0(param_1 + 2);
  if ((lVar2 == 0) && (lVar2 = FUN_0043c6a0(param_1 + 2,*param_1,&DAT_007d5248,0), lVar2 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = FUN_0058f040(param_1[1],lVar2,param_6,param_3);
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/asymciphers/sm2_enc.c",0x5d,"sm2_asym_encrypt");
      FUN_0051f8f0(0x39,0x9e,0);
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  uVar3 = FUN_0058f0f0(param_1[1],lVar2,param_5,param_6,param_2,param_3);
  return uVar3;
}

