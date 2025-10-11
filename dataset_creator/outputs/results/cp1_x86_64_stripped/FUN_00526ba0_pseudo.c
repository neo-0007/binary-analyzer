
undefined8 FUN_00526ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = FUN_004098f0();
  uVar4 = FUN_00409860(param_1);
  iVar1 = FUN_0040a4b0(uVar4);
  if (iVar1 - 1U < 2) {
    if (param_4 == 0) {
      iVar2 = FUN_0040a180(param_1);
      iVar2 = FUN_00498be0(param_2,iVar2 * 8,lVar3);
      *(code **)(lVar3 + 0xf8) = FUN_00494f10;
      pcVar5 = (code *)0x0;
      if (iVar1 != 2) goto LAB_00526c16;
    }
    else {
      iVar2 = FUN_0040a180(param_1);
      iVar2 = FUN_00498c50(param_2,iVar2 * 8,lVar3);
      *(code **)(lVar3 + 0xf8) = FUN_00494ec0;
      if (iVar1 != 2) goto LAB_00526c67;
    }
    pcVar5 = FUN_00498270;
  }
  else {
    iVar2 = FUN_0040a180(param_1);
    iVar2 = FUN_00498c50(param_2,iVar2 * 8,lVar3);
    *(code **)(lVar3 + 0xf8) = FUN_00494ec0;
    if (iVar1 != 5) {
LAB_00526c67:
      *(undefined8 *)(lVar3 + 0x100) = 0;
      goto joined_r0x00526c7a;
    }
    pcVar5 = FUN_00495dc0;
  }
LAB_00526c16:
  *(code **)(lVar3 + 0x100) = pcVar5;
joined_r0x00526c7a:
  if (iVar2 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/e_aes.c",0xad,"aesni_init_key");
    FUN_0051f8f0(6,0x8f,0);
    return 0;
  }
  return 1;
}

