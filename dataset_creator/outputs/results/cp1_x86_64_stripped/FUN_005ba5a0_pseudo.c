
long FUN_005ba5a0(undefined4 param_1,long *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_3;
  if ((param_2 == (long *)0x0) || (lVar3 = *param_2, lVar3 == 0)) {
    lVar3 = FUN_0040ec60();
    if (lVar3 == 0) {
      FUN_0051f420();
      lVar3 = 0;
      FUN_0051f540("../crypto/asn1/d2i_pr.c",0x56,"ossl_d2i_PrivateKey_legacy");
      FUN_0051f8f0(0xd,0x80006,0);
      goto LAB_005ba736;
    }
    iVar1 = FUN_0040f1a0(lVar3,param_1);
    if (iVar1 == 0) goto LAB_005ba609;
LAB_005ba680:
    FUN_0051f000();
    lVar5 = *(long *)(lVar3 + 8);
    if (*(code **)(lVar5 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(lVar5 + 0xb8))(lVar3,&local_48,param_4 & 0xffffffff);
      if (iVar1 == 0) {
        lVar5 = *(long *)(lVar3 + 8);
        goto LAB_005ba6ae;
      }
      FUN_0051f1a0();
LAB_005ba725:
      *param_3 = local_48;
      if (param_2 != (long *)0x0) {
        *param_2 = lVar3;
      }
      goto LAB_005ba736;
    }
LAB_005ba6ae:
    if ((*(long *)(lVar5 + 0x40) == 0) && (*(long *)(lVar5 + 0x138) == 0)) {
      FUN_0051f1a0();
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/d2i_pr.c",0x7f,"ossl_d2i_PrivateKey_legacy");
      FUN_0051f8f0(0xd,0x8000d,0);
      lVar5 = lVar3;
    }
    else {
      lVar4 = FUN_004a2bb0(0,&local_48,param_4);
      if (lVar4 != 0) {
        lVar5 = FUN_005fde40(lVar4,param_5,param_6);
        FUN_004a2c30(lVar4);
        if (lVar5 != 0) {
          FUN_0040f4f0(lVar3);
          FUN_0051f050();
          iVar1 = FUN_0040e520(param_1);
          iVar2 = FUN_0040e590(lVar5);
          lVar3 = lVar5;
          if (iVar1 == iVar2) goto LAB_005ba725;
          goto LAB_005ba639;
        }
      }
      FUN_0051f1a0();
      lVar5 = lVar3;
    }
  }
  else {
    FUN_0051a270(*(undefined8 *)(lVar3 + 0x10));
    *(undefined8 *)(lVar3 + 0x10) = 0;
    iVar1 = FUN_0040f1a0(lVar3,param_1);
    if (iVar1 != 0) goto LAB_005ba680;
LAB_005ba609:
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/d2i_pr.c",0x62,"ossl_d2i_PrivateKey_legacy");
    FUN_0051f8f0(0xd,0xa3,0);
    lVar5 = lVar3;
  }
LAB_005ba639:
  if ((param_2 == (long *)0x0) || (lVar3 = 0, *param_2 != lVar5)) {
    lVar3 = 0;
    FUN_0040f4f0(lVar5);
  }
LAB_005ba736:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

