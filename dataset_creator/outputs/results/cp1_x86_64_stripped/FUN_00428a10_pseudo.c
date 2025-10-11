
undefined4 FUN_00428a10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 local_3c;
  
  uVar2 = FUN_004cc770(param_2);
  lVar3 = FUN_00417730(uVar2,5,&DAT_0091b6a0);
  uVar2 = FUN_004cdb50(param_1);
  lVar4 = FUN_004cca80(param_2,uVar2);
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rand/rand_lib.c",0x2fb,"random_conf_init");
    FUN_0051f8f0(0xf,0x77,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
    iVar6 = 0;
    if (lVar3 == 0) {
LAB_00428af0:
      local_3c = 0;
    }
    else {
      for (; iVar1 = FUN_00436480(lVar4), iVar6 < iVar1; iVar6 = iVar6 + 1) {
        lVar5 = FUN_004364a0(lVar4,iVar6);
        iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar5 + 8),"random");
        if (iVar1 == 0) {
          iVar1 = FUN_00428980(lVar3 + 0x20,*(undefined8 *)(lVar5 + 0x10));
joined_r0x00428b94:
          if (iVar1 == 0) goto LAB_00428af0;
        }
        else {
          iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar5 + 8),"cipher");
          if (iVar1 == 0) {
            iVar1 = FUN_00428980(lVar3 + 0x28,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x00428b94;
          }
          iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar5 + 8),"digest");
          if (iVar1 == 0) {
            iVar1 = FUN_00428980(lVar3 + 0x30,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x00428b94;
          }
          iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar5 + 8),"properties");
          if (iVar1 == 0) {
            iVar1 = FUN_00428980(lVar3 + 0x38,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x00428b94;
          }
          iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar5 + 8),"seed");
          if (iVar1 == 0) {
            iVar1 = FUN_00428980(lVar3 + 0x40,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x00428b94;
          }
          iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar5 + 8),"seed_properties");
          if (iVar1 == 0) {
            iVar1 = FUN_00428980(lVar3 + 0x48,*(undefined8 *)(lVar5 + 0x10));
            goto joined_r0x00428b94;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/rand/rand_lib.c",0x317,"random_conf_init");
          FUN_0051f8f0(0xf,0x78,"name=%s, value=%s",*(undefined8 *)(lVar5 + 8),
                       *(undefined8 *)(lVar5 + 0x10));
          local_3c = 0;
        }
      }
    }
  }
  return local_3c;
}

