
undefined8
FUN_00444800(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfd | (param_7 & 1) * '\x02';
  if (param_4 != 0) {
    if (*(long *)(param_1 + 0x20) != param_5) {
      if (0xe < param_5 - 1U) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x79,"aes_ocb_init");
        FUN_0051f8f0(0x39,0x6d,0);
        return 0;
      }
      *(long *)(param_1 + 0x20) = param_5;
    }
    iVar1 = FUN_004866d0(param_1,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x360) = 1;
  }
  if (param_2 == 0) {
LAB_0044489d:
    if (param_6 == 0) {
      return 1;
    }
    uVar2 = FUN_00444520(param_1,param_6);
    return uVar2;
  }
  if (*(long *)(param_1 + 0x18) == param_3) {
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 != 0) goto LAB_0044489d;
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x84,"aes_ocb_init");
    FUN_0051f8f0(0x39,0x69,0);
  }
  return 0;
}

