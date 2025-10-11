
undefined8 FUN_00526910(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = FUN_004098f0();
  uVar4 = FUN_00409860(param_1);
  iVar1 = FUN_0040a4b0(uVar4);
  if ((iVar1 - 1U < 2) && (param_4 == 0)) {
    if ((DAT_0094b59c._1_1_ & 2) != 0) {
      if (iVar1 == 2) {
        iVar1 = FUN_0040a180(param_1);
        iVar2 = FUN_0048a8b0(param_2,iVar1 * 8,lVar3);
        *(code **)(lVar3 + 0xf8) = FUN_0048a530;
        *(code **)(lVar3 + 0x100) = FUN_0049a5a0;
      }
      else {
        iVar1 = FUN_0040a180(param_1);
        iVar2 = FUN_0049c660(param_2,iVar1 * 8,lVar3);
        *(undefined8 *)(lVar3 + 0x100) = 0;
        *(code **)(lVar3 + 0xf8) = FUN_0049c6c0;
      }
      goto LAB_005269a3;
    }
    iVar2 = FUN_0040a180(param_1);
    iVar2 = FUN_0048a8b0(param_2,iVar2 * 8,lVar3);
    *(code **)(lVar3 + 0xf8) = FUN_0048a530;
    if (iVar1 != 2) goto LAB_0052699a;
LAB_005269eb:
    pcVar5 = FUN_0048aae0;
  }
  else {
    if ((DAT_0094b59c._1_1_ & 2) == 0) {
      iVar2 = FUN_0040a180(param_1);
      iVar2 = FUN_0048a5f0(param_2,iVar2 * 8,lVar3);
      *(code **)(lVar3 + 0xf8) = FUN_00489fa0;
      if (iVar1 == 2) goto LAB_005269eb;
    }
    else {
      if (iVar1 == 5) {
        iVar1 = FUN_0040a180(param_1);
        iVar2 = FUN_0048a5f0(param_2,iVar1 * 8,lVar3);
        *(code **)(lVar3 + 0xf8) = FUN_00489fa0;
        *(code **)(lVar3 + 0x100) = FUN_0049aa50;
        goto LAB_005269a3;
      }
      iVar2 = FUN_0040a180(param_1);
      iVar2 = FUN_0049c630(param_2,iVar2 * 8,lVar3);
      *(code **)(lVar3 + 0xf8) = FUN_0049c6a0;
      if (iVar1 == 2) {
        pcVar5 = FUN_0049c6e0;
        goto LAB_0052699c;
      }
    }
LAB_0052699a:
    pcVar5 = (code *)0x0;
  }
LAB_0052699c:
  *(code **)(lVar3 + 0x100) = pcVar5;
LAB_005269a3:
  if (iVar2 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/e_aes.c",0x96e,"aes_init_key");
    FUN_0051f8f0(6,0x8f,0);
    return 0;
  }
  return 1;
}

