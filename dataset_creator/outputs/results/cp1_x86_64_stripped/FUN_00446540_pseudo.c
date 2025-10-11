
undefined8
FUN_00446540(undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  *(byte *)((long)param_1 + 0x3c) = bVar1 & 0xfd | ((byte)param_7 & 1) * '\x02';
  if ((bVar1 & 1) == 0) {
    if (param_7 == 0) {
      pcVar3 = FUN_00553300;
    }
    else {
      pcVar3 = FUN_00553190;
    }
  }
  else if (param_7 == 0) {
    pcVar3 = FUN_005534c0;
  }
  else {
    pcVar3 = FUN_005533a0;
  }
  param_1[0x37] = pcVar3;
  if ((param_4 != 0) && (iVar2 = FUN_004866d0(param_1,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  if (param_2 == 0) goto LAB_004465de;
  if (param_1[3] != param_3) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",0x65,"aes_wrap_init");
    FUN_0051f8f0(0x39,0x69,0);
    return 0;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  if ((bVar1 & 0x20) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_0044660c:
      FUN_0048a5f0(param_2,(int)param_3 * 8,param_1 + 0x18);
      *param_1 = FUN_00489fa0;
      goto LAB_004465de;
    }
  }
  else if ((bVar1 & 2) == 0) goto LAB_0044660c;
  FUN_0048a8b0(param_2,(int)param_3 * 8,param_1 + 0x18);
  *param_1 = FUN_0048a530;
LAB_004465de:
  uVar4 = FUN_00445f60(param_1,param_6);
  return uVar4;
}

