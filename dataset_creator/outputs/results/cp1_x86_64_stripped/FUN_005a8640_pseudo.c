
long FUN_005a8640(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (param_1 == 0) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/x509/x509_vfy.c",0xd14,"X509_build_chain");
    FUN_0051f8f0(0xb,0xc0102,0);
    goto LAB_005a873c;
  }
  lVar2 = FUN_005a7a40(param_5,param_6);
  if (lVar2 == 0) goto LAB_005a873c;
  if (param_3 == 0) {
    iVar1 = FUN_005a7c60(lVar2,0,param_1,0);
    if (iVar1 != 0) {
      FUN_005a7b40(lVar2,param_2);
      iVar1 = FUN_0059e930(lVar2 + 0x98,param_1,1);
      if (iVar1 == 0) goto LAB_005a87a0;
      *(undefined4 *)(lVar2 + 0x94) = 1;
      FUN_005a4030(lVar2);
LAB_005a86e6:
      iVar1 = FUN_00436480(*(undefined8 *)(lVar2 + 0x98));
      if ((iVar1 < 2) || (uVar3 = 9, param_4 != 0)) {
        uVar3 = 1;
      }
      iVar1 = FUN_0059e9b0(&local_38,*(undefined8 *)(lVar2 + 0x98),uVar3);
      if (iVar1 == 0) {
        FUN_004360b0(local_38);
        local_38 = 0;
      }
    }
  }
  else {
    iVar1 = FUN_005a7c60(lVar2,param_3,param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_0059e930(lVar2 + 0x98,param_1,1);
      if (iVar1 == 0) {
LAB_005a87a0:
        *(undefined4 *)(lVar2 + 0xb0) = 0x11;
      }
      else {
        *(undefined4 *)(lVar2 + 0x94) = 1;
        iVar1 = FUN_005a4030(lVar2);
        if (iVar1 != 0) goto LAB_005a86e6;
      }
    }
  }
  FUN_005a7c00(lVar2);
  lVar2 = local_38;
LAB_005a873c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

